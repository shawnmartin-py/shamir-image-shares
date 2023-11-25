from itertools import combinations
import pytest

from cli.slip39 import (
    transform_mnemonic,
    reverse_transform_mnemonic,
    generate_random_seed_phrase,
    generate_random_password,
)
from cli.shamir_mnemonic_.utils import MnemonicError

TEST_ITERATIONS = 100


def test_encryption_decryption(num_tests=TEST_ITERATIONS):
    combinations_tested = 0
    asserts_run = 0
    transformed_seed_phrase: list[list[str]] = []
    for _ in range(num_tests):
        seed_phrase = generate_random_seed_phrase()
        password = generate_random_password()
        transformed_seed_phrase = transform_mnemonic(
            seed_phrase,
            password,
        )
        for selected_transformed_seed_phrase in combinations(
                transformed_seed_phrase, 2):
            combinations_tested += 1
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
            asserts_run += 1
    assert combinations_tested == num_tests * len(transformed_seed_phrase) * (
            len(transformed_seed_phrase) - 1) / 2
    assert bool(asserts_run)
    assert asserts_run == combinations_tested


def test_single_share_insufficient(num_tests=TEST_ITERATIONS):
    tests_run = 0
    transformed_seed_phrase: list[list[str]] = []
    for _ in range(num_tests):
        seed_phrase = generate_random_seed_phrase()
        password = generate_random_password()
        transformed_seed_phrase = transform_mnemonic(
            seed_phrase,
            password,
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
            tests_run += 1
    assert bool(tests_run)
    assert tests_run == num_tests * len(transformed_seed_phrase)


def test_fails_with_different_password(num_tests=TEST_ITERATIONS):
    tests_run = 0
    for _ in range(num_tests):
        seed_phrase = generate_random_seed_phrase()
        password = generate_random_password()
        transformed_seed_phrase = transform_mnemonic(
            seed_phrase,
            password,
        )
        selected_transformed_seed_phrase = transformed_seed_phrase[:2]
        flattened_transformed_seed_phrase = [
            item for sublist in selected_transformed_seed_phrase for item in sublist
        ]
        decrypted_seed_phrase = reverse_transform_mnemonic(
            flattened_transformed_seed_phrase,
            password + "a",
        )
        assert seed_phrase != decrypted_seed_phrase, (
            f"Test failed for Seed: '{seed_phrase}' with password: {password}\n"
            f"Decrypted Seed Phrase: '{decrypted_seed_phrase}'"
        )
        tests_run += 1
    assert bool(tests_run)
    assert tests_run == num_tests
