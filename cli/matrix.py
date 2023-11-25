def generate_random_row(wordlist: list[str], *, length: int = 10) -> list[str]:
    return [secrets.choice(wordlist) for _ in range(length)]


def create_mnemonic_matrix(
        seed_words: list[str], pin: str, wordlist: list[str]
) -> list[list[str]]:
    pin_digits = [int(digit) for digit in pin]
    matrix = [generate_random_row(wordlist)]
    for index, key in enumerate(seed_words):
        position = pin_digits[index % len(pin_digits)]
        row = generate_random_row(wordlist)
        row[position] = key
        matrix.append(row)

        if (index + 1) % len(pin_digits) == 0:
            matrix.append(generate_random_row(wordlist))
    if len(seed_words) % len(pin_digits) != 0:
        matrix.append(generate_random_row(wordlist))
    return matrix