from itertools import combinations
from math import comb
import string
import random
from typing import Generator, Sequence

from bip_utils import Bip39MnemonicGenerator, Bip39MnemonicDecoder
from bip_utils import Bip39Languages

from cli.shamir_mnemonic_ import (
    generate_mnemonics,
    combine_mnemonics,
    BIP_39_WORDLIST,
    SLIP39_WORDLIST,
)


assert len(BIP_39_WORDLIST) == 2048
assert len(SLIP39_WORDLIST) == 1024


GROUP_THRESHOLD = 2
GROUPS = ((1, 1), (1, 1), (1, 1), (1, 1))


def _seed_to_bytes(seed: str) -> bytes:
    return Bip39MnemonicDecoder(Bip39Languages.ENGLISH).Decode(seed)


def _bytes_to_seed(seed_bytes: bytes) -> str:
    return str(Bip39MnemonicGenerator().FromEntropy(seed_bytes))


def transform_mnemonic(
        original_seed: str,
        password: str = "",
        group_threshold: int = GROUP_THRESHOLD,
        groups: Sequence[tuple[int, int]] = GROUPS,
) -> list[list[str]]:
    print("Hex: ", _seed_to_bytes(original_seed).hex())
    return generate_mnemonics(
        group_threshold=group_threshold,
        groups=groups,
        master_secret=_seed_to_bytes(original_seed),
        passphrase=password.encode("UTF-8"),
    )


def reverse_transform_mnemonic(mnemonic_groups: list[str], password: str = "") -> str:
    recovered = combine_mnemonics(mnemonic_groups, passphrase=password.encode("UTF-8"))
    return _bytes_to_seed(recovered)


def generate_random_seed_phrase(length: int = 12):
    return str(Bip39MnemonicGenerator().FromWordsNumber(length))


def generate_random_password(length: int = 10):
    characters = string.ascii_letters + string.digits
    return ''.join(random.choice(characters) for _ in range(length))


def print_shares(*mnemonic_groups: list[str]) -> None:
    print("Generated Mnemonics:")
    for mnemonic_group in mnemonic_groups:
        if len(mnemonic_group) > 1:
            print("(")
            print(*[" " * 4 + "- " + m for m in mnemonic_group], sep="\n")
            print(")")
        else:
            print("- " + mnemonic_group[0])


def create_combinations(*mnemonic_groups: list[str], n: int = 2) -> list[list[str]]:
    return [
        m if isinstance(m, list) else [m]
        for combination in combinations(mnemonic_groups, n) for m in combination
    ]


def iterate_combinations(
    mnemonic_groups: list[list[str]], *, n: int
) -> Generator[list[str], None, None]:
    for mnemonics in combinations(mnemonic_groups, n):
        selected: list[str] = []
        for mnemonic in mnemonics:
            if isinstance(mnemonic, list):
                selected.extend(mnemonic)
            else:
                selected.append(mnemonic)
        yield selected


def validate_mnemonics_reversibility(
    mnemonics: list[list[str]], *, original_seed: str, password: str, n: int = 2
) -> None:
    total_iterations = 0
    for selected_mnemonic_groups in iterate_combinations(mnemonics, n=n):
        reversed_mnemonic = reverse_transform_mnemonic(
            selected_mnemonic_groups,
            password,
        )
        total_iterations += 1
        assert original_seed == reversed_mnemonic
    assert total_iterations == comb(7, n)


# ------------------------------------------------------------------------------------ #


if __name__ == "__main__":
    starting_mnemonic = generate_random_seed_phrase(12)
    print("Original Mnemonic:", starting_mnemonic)
    random_password = generate_random_password()

    generated_mnemonics = transform_mnemonic(starting_mnemonic, random_password)
    validate_mnemonics_reversibility(
        generated_mnemonics,
        original_seed=starting_mnemonic,
        password=random_password,
    )
    print_shares(*generated_mnemonics)


