from typing import Iterable, Sequence

from .constants import RADIX
from .utils import MnemonicError
from .wordlist_data import SLIP39_WORDLIST


def _load_wordlist() -> tuple[list[str], dict[str, int]]:
    wordlist = SLIP39_WORDLIST.copy()
    if len(wordlist) != RADIX:
        raise ImportError(
            f"The wordlist should contain {RADIX} words, but it contains "
            f"{len(wordlist)} words."
        )
    word_index_map = {word: i for i, word in enumerate(wordlist)}
    return wordlist, word_index_map


WORDLIST, WORD_INDEX_MAP = _load_wordlist()


def words_from_indices(indices: Iterable[int]) -> Iterable[str]:
    return (WORDLIST[i] for i in indices)


def mnemonic_from_indices(indices: Iterable[int]) -> str:
    return " ".join(words_from_indices(indices))


def mnemonic_to_indices(mnemonic: str) -> Sequence[int]:
    try:
        return [WORD_INDEX_MAP[word.lower()] for word in mnemonic.split()]
    except KeyError as key_error:
        raise MnemonicError(f"Invalid mnemonic word {key_error}.") from None

