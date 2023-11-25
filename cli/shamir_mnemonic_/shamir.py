import hmac
import secrets
from typing import Self, Sequence, NamedTuple, Iterable, Any, Iterator

from . import cipher
from .constants import (
    DIGEST_INDEX,
    DIGEST_LENGTH_BYTES,
    ID_LENGTH_BITS,
    MAX_SHARE_COUNT,
    MIN_STRENGTH_BITS,
    SECRET_INDEX, ID_EXP_LENGTH_WORDS, GROUP_PREFIX_LENGTH_WORDS,
)
from .share import Share, ShareGroupParameters, ShareCommonParameters
from .utils import bits_to_bytes, MnemonicError


RANDOM_BYTES = secrets.token_bytes


class RawShare(NamedTuple):
    x: int
    data: bytes


class ShareGroup:
    def __init__(self) -> None:
        self.shares: set[Share] = set()

    def __iter__(self) -> Iterator[Share]:
        return iter(self.shares)

    def __len__(self) -> int:
        return len(self.shares)

    def __bool__(self) -> bool:
        return bool(self.shares)

    def __contains__(self, obj: Any) -> bool:
        return obj in self.shares

    def add(self, share: Share) -> None:
        if self.shares and self.group_parameters() != share.group_parameters():
            fields = zip(
                ShareGroupParameters._fields,
                self.group_parameters(),
                share.group_parameters(),
            )
            mismatch = next(name for name, x, y in fields if x != y)
            raise MnemonicError(
                f"Invalid set of mnemonics. The {mismatch} parameters don't match."
            )
        self.shares.add(share)

    def to_raw_shares(self) -> list[RawShare]:
        return [RawShare(s.index, s.value) for s in self.shares]

    def get_minimal_group(self) -> "ShareGroup":
        group = ShareGroup()
        group.shares = set(
            share for _, share in zip(range(self.member_threshold()), self.shares)
        )
        return group

    def common_parameters(self) -> ShareCommonParameters:
        return next(iter(self.shares)).common_parameters()

    def group_parameters(self) -> ShareGroupParameters:
        return next(iter(self.shares)).group_parameters()

    def member_threshold(self) -> int:
        return next(iter(self.shares)).member_threshold

    def is_complete(self) -> int:
        return len(self.shares) >= self.member_threshold() if self.shares else False


class EncryptedMasterSecret:
    def __init__(self, *, identifier: int, iteration_exponent: int, ciphertext: bytes):
        self.identifier = identifier
        self.iteration_exponent = iteration_exponent
        self.ciphertext = ciphertext

    @classmethod
    def from_master_secret(
        cls,
        master_secret: bytes,
        passphrase: bytes,
        identifier: int,
        iteration_exponent: int,
    ) -> Self:
        ciphertext = cipher.encrypt(
            master_secret,
            passphrase=passphrase,
            iteration_exponent=iteration_exponent,
            identifier=identifier,
        )
        return cls(
            identifier=identifier,
            iteration_exponent=iteration_exponent,
            ciphertext=ciphertext,
        )

    def decrypt(self, passphrase: bytes) -> bytes:
        return cipher.decrypt(
            self.ciphertext,
            passphrase=passphrase,
            iteration_exponent=self.iteration_exponent,
            identifier=self.identifier,
        )


def _precompute_exp_log() -> tuple[list[int], list[int]]:
    exp = [0 for _ in range(255)]
    log = [0 for _ in range(256)]
    poly = 1
    for i in range(255):
        exp[i] = poly
        log[poly] = i
        poly = (poly << 1) ^ poly
        if poly & 0x100:
            poly ^= 0x11B
    return exp, log


EXP_TABLE, LOG_TABLE = _precompute_exp_log()


def _interpolate(shares: Sequence[RawShare], x: int) -> bytes:
    x_coordinates = set(share.x for share in shares)
    if len(x_coordinates) != len(shares):
        raise MnemonicError("Invalid set of shares. Share indices must be unique.")

    share_value_lengths = set(len(share.data) for share in shares)
    if len(share_value_lengths) != 1:
        raise MnemonicError(
            "Invalid set of shares. All share values must have the same length."
        )

    if x in x_coordinates:
        for share in shares:
            if share.x == x:
                return share.data

    log_prod = sum(LOG_TABLE[share.x ^ x] for share in shares)

    result = bytes(share_value_lengths.pop())
    for share in shares:
        log_basis_eval = (
            log_prod
            - LOG_TABLE[share.x ^ x]
            - sum(LOG_TABLE[share.x ^ other.x] for other in shares)
        ) % 255

        result = bytes(
            intermediate_sum
            ^ (
                EXP_TABLE[(LOG_TABLE[share_val] + log_basis_eval) % 255]
                if share_val != 0
                else 0
            )
            for share_val, intermediate_sum in zip(share.data, result)
        )
    return result


def _random_identifier() -> int:
    identifier = int.from_bytes(RANDOM_BYTES(bits_to_bytes(ID_LENGTH_BITS)), "big")
    return identifier & ((1 << ID_LENGTH_BITS) - 1)


def _create_digest(random_data: bytes, shared_secret: bytes) -> bytes:
    return hmac.new(random_data, shared_secret, "sha256").digest()[:DIGEST_LENGTH_BYTES]


def _split_secret(
    *, threshold: int, share_count: int, shared_secret: bytes
) -> list[RawShare]:
    if threshold < 1:
        raise ValueError("The requested threshold must be a positive integer.")
    if threshold > share_count:
        raise ValueError(
            "The requested threshold must not exceed the number of shares."
        )
    if share_count > MAX_SHARE_COUNT:
        raise ValueError(
            f"The requested number of shares must not exceed {MAX_SHARE_COUNT}."
        )
    if threshold == 1:
        return [RawShare(i, shared_secret) for i in range(share_count)]
    random_share_count = threshold - 2
    shares = [
        RawShare(i, RANDOM_BYTES(len(shared_secret))) for i in range(random_share_count)
    ]
    random_part = RANDOM_BYTES(len(shared_secret) - DIGEST_LENGTH_BYTES)
    digest = _create_digest(random_part, shared_secret)
    base_shares = shares + [
        RawShare(DIGEST_INDEX, digest + random_part),
        RawShare(SECRET_INDEX, shared_secret),
    ]
    for i in range(random_share_count, share_count):
        shares.append(RawShare(i, _interpolate(base_shares, i)))
    return shares


def _recover_secret(threshold: int, shares: Sequence[RawShare]) -> bytes:
    if threshold == 1:
        return next(iter(shares)).data

    shared_secret = _interpolate(shares, SECRET_INDEX)
    digest_share = _interpolate(shares, DIGEST_INDEX)
    digest = digest_share[:DIGEST_LENGTH_BYTES]
    random_part = digest_share[DIGEST_LENGTH_BYTES:]

    if digest != _create_digest(random_part, shared_secret):
        raise MnemonicError("Invalid digest of the shared secret.")
    return shared_secret


def decode_mnemonics(mnemonics: Iterable[str]) -> dict[int, ShareGroup]:
    common_params: set[ShareCommonParameters] = set()
    groups: dict[int, ShareGroup] = {}
    for mnemonic in mnemonics:
        share = Share.from_mnemonic(mnemonic)
        common_params.add(share.common_parameters())
        group = groups.setdefault(share.group_index, ShareGroup())
        group.add(share)

    if len(common_params) != 1:
        raise MnemonicError(
            "Invalid set of mnemonics. "
            f"All mnemonics must begin with the same {ID_EXP_LENGTH_WORDS} words, "
            "must have the same group threshold and the same group count."
        )
    return groups


def split_ems(
    *,
    group_threshold: int,
    groups: Sequence[tuple[int, int]],
    encrypted_master_secret: EncryptedMasterSecret,
) -> list[list[Share]]:
    if len(encrypted_master_secret.ciphertext) * 8 < MIN_STRENGTH_BITS:
        raise ValueError(
            "The length of the master secret must be "
            f"at least {bits_to_bytes(MIN_STRENGTH_BITS)} bytes."
        )
    if group_threshold > len(groups):
        raise ValueError(
            "The requested group threshold must not exceed the number of groups."
        )
    if any(
        member_threshold == 1 and member_count > 1
        for member_threshold, member_count in groups
    ):
        raise ValueError(
            "Creating multiple member shares with member threshold 1 is not allowed. "
            "Use 1-of-1 member sharing instead."
        )
    group_shares = _split_secret(
        threshold=group_threshold,
        share_count=len(groups),
        shared_secret=encrypted_master_secret.ciphertext,
    )
    return [
        [
            Share(
                encrypted_master_secret.identifier,
                encrypted_master_secret.iteration_exponent,
                group_index,
                group_threshold,
                len(groups),
                member_index,
                member_threshold,
                value,
            )
            for member_index, value in _split_secret(
                threshold=member_threshold,
                share_count=member_count,
                shared_secret=group_secret,
            )
        ]
        for (member_threshold, member_count), (group_index, group_secret) in zip(
            groups, group_shares
        )
    ]


def generate_mnemonics(
    group_threshold: int,
    groups: Sequence[tuple[int, int]],
    master_secret: bytes,
    passphrase: bytes = b"",
    iteration_exponent: int = 1,
) -> list[list[str]]:
    identifier = _random_identifier()
    encrypted_master_secret = EncryptedMasterSecret.from_master_secret(
        master_secret,
        passphrase=passphrase,
        identifier=identifier,
        iteration_exponent=iteration_exponent,
    )
    grouped_shares = split_ems(
        group_threshold=group_threshold,
        groups=groups,
        encrypted_master_secret=encrypted_master_secret,
    )
    return [[share.mnemonic() for share in group] for group in grouped_shares]


def recover_ems(groups: dict[int, ShareGroup]) -> EncryptedMasterSecret:
    if not groups:
        raise MnemonicError("The set of shares is empty.")
    params = next(iter(groups.values())).common_parameters()

    if len(groups) < params.group_threshold:
        raise MnemonicError(
            "Insufficient number of mnemonic groups. "
            f"The required number of groups is {params.group_threshold}."
        )

    if len(groups) != params.group_threshold:
        raise MnemonicError(
            "Wrong number of mnemonic groups. "
            f"Expected {params.group_threshold} groups, "
            f"but {len(groups)} were provided."
        )

    for group in groups.values():
        if len(group) != group.member_threshold():
            share_words = next(iter(group)).words()
            prefix = " ".join(share_words[:GROUP_PREFIX_LENGTH_WORDS])
            raise MnemonicError(
                "Wrong number of mnemonics. "
                f"Expected {group.member_threshold()} mnemonics starting with "
                f'"{prefix}" ...", but {len(group)} were provided.'
            )

    group_shares = [
        RawShare(
            group_index,
            _recover_secret(group.member_threshold(), group.to_raw_shares()),
        )
        for group_index, group in groups.items()
    ]
    ciphertext = _recover_secret(params.group_threshold, group_shares)
    return EncryptedMasterSecret(
        identifier=params.identifier,
        iteration_exponent=params.iteration_exponent,
        ciphertext=ciphertext,
    )


def combine_mnemonics(mnemonics: Iterable[str], passphrase: bytes = b"") -> bytes:
    if not mnemonics:
        raise MnemonicError("The list of mnemonics is empty.")
    groups = decode_mnemonics(mnemonics)
    encrypted_master_secret = recover_ems(groups)
    return encrypted_master_secret.decrypt(passphrase)
