from typing import Iterable, List

from .constants import CHECKSUM_LENGTH_WORDS, CUSTOMIZATION_STRING


def _polymod(values: Iterable[int]) -> int:
    gen = (
        0xE0E040,
        0x1C1C080,
        0x3838100,
        0x7070200,
        0xE0E0009,
        0x1C0C2412,
        0x38086C24,
        0x3090FC48,
        0x21B1F890,
        0x3F3F120,
    )
    chk = 1
    for v in values:
        b = chk >> 20
        chk = (chk & 0xFFFFF) << 10 ^ v
        for i in range(10):
            chk ^= gen[i] if ((b >> i) & 1) else 0
    return chk


def create_checksum(data: Iterable[int]) -> List[int]:
    values = list(CUSTOMIZATION_STRING) + list(data) + [0] * CHECKSUM_LENGTH_WORDS
    polymod = _polymod(values) ^ 1
    return [(polymod >> 10 * i) & 1023 for i in reversed(range(CHECKSUM_LENGTH_WORDS))]


def verify_checksum(data: Iterable[int]) -> bool:
    return _polymod(list(CUSTOMIZATION_STRING) + list(data)) == 1
