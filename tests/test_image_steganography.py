import os
import pytest
from PIL import Image
from cli.image_steganography import text_to_bin, bin_to_text, encode_image, decode_image
from cli.slip39 import generate_random_seed_phrase, generate_random_password


TEST_ITERATIONS = 100


@pytest.fixture(
    params=[
        (
            Image.open(f"tests/test_images/{file}"),
            abs(hash(generate_random_password())),
            generate_random_seed_phrase(24),
        )
        for file in os.listdir("tests/test_images") for _ in range(TEST_ITERATIONS)
    ]
)
def image_and_seeds(request):
    return request.param


def test_text_to_bin():
    assert text_to_bin('test') == '01110100011001010111001101110100'


def test_bin_to_text():
    assert bin_to_text('01110100011001010111001101110100') == 'test'


def test_encode_decode_image(image_and_seeds):
    img, seed_for_encoding, text = image_and_seeds
    encoded_img = encode_image(text, img, seed_for_encoding)
    decoded_text = decode_image(encoded_img, seed_for_encoding)
    assert decoded_text == text
