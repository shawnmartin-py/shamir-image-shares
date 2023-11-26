from PIL import Image
from mnemonic import Mnemonic
import click

from cli.slip39 import (
    generate_random_seed_phrase,
    transform_mnemonic,
    reverse_transform_mnemonic,
    validate_mnemonics_reversibility,
    print_shares,
)
from cli.image_steganography import encode_image, decode_image


def validate_seed_words(seed_phrase: str, *, wordlist: list[str]) -> None:
    words = seed_phrase.split()
    word_count = len(words)
    if word_count not in [12, 18, 24]:
        raise ValueError("Seed phrase must contain 12, 18, or 24 words.")
    if not all(word in wordlist for word in words):
        raise ValueError("Seed phrase contains invalid words.")


@click.group()
def cli():
    print("running cli")


@cli.command()
@click.option("--seed", "-s", default=None)
@click.option("--password", "-p", default="")
def generate(seed: str | None, password: str):
    wordlist = Mnemonic("english").wordlist
    try:
        if seed:
            validate_seed_words(seed, wordlist=wordlist)
        else:
            seed = generate_random_seed_phrase()
            print("Generated seed phrase:", seed)
        shares = transform_mnemonic(seed, password)
        validate_mnemonics_reversibility(shares, original_seed=seed, password=password)
        print_shares(*shares)
    except ValueError as e:
        click.echo(f"Error: {e}", err=True)


@cli.command()
@click.option("--share", "-s", multiple=True, required=True)
@click.option("--password", "-p", required=True)
def combine(mnemonics: list[str], password: str):
    try:
        original_seed = reverse_transform_mnemonic(mnemonics, password)
        print("Original seed phrase: ", original_seed)
    except ValueError as e:
        click.echo(f"Error: {e}", err=True)


@cli.command()
@click.option("--text", "-t", required=True)
@click.option("--input_image", "-i", required=True)
@click.option("--output_image", "-o", required=True)
@click.option("--seed", "-s")
def encode_text_in_image(
    text: str, input_image: str, output_image: str, seed: str | None = None
):
    try:
        image = Image.open(input_image)
        seed_int = int(seed) if seed else None
        encoded_img = encode_image(text, image, seed_int)
        encoded_img.save(output_image)
        encoded_img_loaded = Image.open(output_image)
        decoded_text = decode_image(encoded_img_loaded, seed_int)
        assert text == decoded_text, "text is different"
    except ValueError as e:
        click.echo(f"Error: {e}", err=True)


@cli.command()
@click.option("--input_image", "-i", required=True)
@click.option("--seed", "-s")
def decode_text_from_image(input_image: str, seed: int | None = None):
    try:
        seed_int = int(seed) if seed else None
        encoded_img_loaded = Image.open(input_image)
        decoded_text = decode_image(encoded_img_loaded, seed_int)
        print(decoded_text)
    except ValueError as e:
        click.echo(f"Error: {e}", err=True)



