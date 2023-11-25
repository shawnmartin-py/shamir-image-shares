from typing import Iterable


class MnemonicError(Exception):
    pass


def _round_bits(n: int, radix_bits: int) -> int:
    return (n + radix_bits - 1) // radix_bits


def bits_to_bytes(n: int) -> int:
    return _round_bits(n, 8)


def bits_to_words(n: int) -> int:
    from .constants import RADIX_BITS
    return _round_bits(n, RADIX_BITS)


def int_to_indices(value: int, length: int, radix_bits: int) -> Iterable[int]:
    mask = (1 << radix_bits) - 1
    return ((value >> (i * radix_bits)) & mask for i in reversed(range(length)))