from itertools import combinations
import math

import pytest

from cli.slip39 import (
    transform_mnemonic,
    reverse_transform_mnemonic,
    generate_random_seed_phrase,
    generate_random_password,
)
from cli.shamir_mnemonic_.utils import MnemonicError

TEST_ITERATIONS = 500


test_params = list(
    zip(
        [
            ((1, 1), (1, 1), (1, 1), (1, 1)),
            ((2, 2), (2, 2), (1, 1), (1, 1), (1, 1), (1, 1), (1, 1)),
            ((1, 1), (1, 1), (1, 1)),
        ],
        [
            2, 2, 1,
        ],
    )
)


@pytest.mark.parametrize("groups, threshold", test_params)
def test_encryption_decryption(
    groups,
    threshold,
    num_tests=TEST_ITERATIONS,
):
    combinations_tested = 0
    transformed_seed_phrase: list[list[str]] = []
    for _ in range(num_tests):
        seed_phrase = generate_random_seed_phrase()
        password = generate_random_password()
        transformed_seed_phrase = transform_mnemonic(
            seed_phrase,
            password,
            group_threshold=threshold,
            groups=groups,
        )
        for selected_transformed_seed_phrase in combinations(
                transformed_seed_phrase, threshold):
            flattened_transformed_seed_phrase = [
                item for sublist in selected_transformed_seed_phrase
                for item in sublist
            ]
            decrypted_seed_phrase = reverse_transform_mnemonic(
                flattened_transformed_seed_phrase,
                password,
            )
            assert seed_phrase == decrypted_seed_phrase, (
                f"Test failed for Seed: '{seed_phrase}' with password: {password}\n"
                f"Decrypted Seed Phrase: '{decrypted_seed_phrase}'"
            )
            combinations_tested += 1
    print()
    expected_combinations = math.comb(len(transformed_seed_phrase), threshold)
    print(f"Expected combinations: {expected_combinations}")
    assert bool(combinations_tested)
    assert TEST_ITERATIONS * expected_combinations == combinations_tested


@pytest.mark.parametrize("groups, threshold", test_params)
def test_single_share_insufficient(
        groups,
        threshold,
        num_tests=TEST_ITERATIONS * 5,
):
    if threshold == 1:
        return
    combinations_tested = 0
    transformed_seed_phrase: list[list[str]] = []
    for _ in range(num_tests):
        seed_phrase = generate_random_seed_phrase()
        password = generate_random_password()
        transformed_seed_phrase = transform_mnemonic(
            seed_phrase,
            password,
            group_threshold=threshold,
            groups=groups,
        )
        for single_share in transformed_seed_phrase:
            with pytest.raises(MnemonicError):
                decrypted_seed_phrase = reverse_transform_mnemonic(
                    single_share,
                    password,
                )
                assert seed_phrase != decrypted_seed_phrase, (
                    f"Test failed for Seed: '{seed_phrase}' with password: {password}\n"
                    f"Decrypted Seed Phrase: '{decrypted_seed_phrase}'"
                )
            combinations_tested += 1
    print()
    expected_combinations = len(transformed_seed_phrase)
    print(f"Expected combinations: {expected_combinations}")
    assert bool(combinations_tested)
    assert num_tests * expected_combinations == combinations_tested


@pytest.mark.parametrize("groups, threshold", test_params)
def test_fails_with_different_password(
    groups,
    threshold,
    num_tests=TEST_ITERATIONS // 10,
):
    passwords_to_try = 10
    combinations_tested = 0
    transformed_seed_phrase: list[list[str]] = []
    for _ in range(num_tests):
        seed_phrase = generate_random_seed_phrase()
        password = generate_random_password()
        transformed_seed_phrase = transform_mnemonic(
            seed_phrase,
            password,
            group_threshold=threshold,
            groups=groups,
        )
        for selected_transformed_seed_phrase in combinations(
                transformed_seed_phrase, threshold):
            flattened_transformed_seed_phrase = [
                item for sublist in selected_transformed_seed_phrase
                for item in sublist
            ]

            for _ in range(passwords_to_try):
                wrong_password = generate_random_password()
                decrypted_seed_phrase = reverse_transform_mnemonic(
                    flattened_transformed_seed_phrase,
                    wrong_password,
                )
                assert seed_phrase != decrypted_seed_phrase, (
                    f"Test failed for Seed: '{seed_phrase}' with password: {password}\n"
                    f"Decrypted Seed Phrase: '{decrypted_seed_phrase}'"
                )
                combinations_tested += 1
    print()
    expected_combinations = math.comb(len(transformed_seed_phrase), threshold)
    print(f"Expected combinations: {expected_combinations}")
    assert bool(combinations_tested)
    assert num_tests * passwords_to_try * expected_combinations == combinations_tested
