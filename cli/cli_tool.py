from itertools import repeat

from PIL import Image
import click

from cli.slip39 import (
    BIP_39_WORDLIST,
    generate_random_seed_phrase,
    transform_mnemonic,
    reverse_transform_mnemonic,
    validate_mnemonics_reversibility,
    print_shares,
)
from cli.image_steganography import encode_image, decode_image


GROUPS = tuple(repeat((2, 2), 2)) + tuple(repeat((1, 1), 5))


def validate_seed_words(seed_phrase: str, *, wordlist: list[str]) -> None:
    words = seed_phrase.split()
    word_count = len(words)
    if word_count not in [12, 18, 24]:
        raise ValueError("Seed phrase must contain 12, 18, or 24 words.")
    if not all(word in wordlist for word in words):
        raise ValueError("Seed phrase contains invalid words.")


@click.group()
def cli():
    print("Running...")


@cli.command()
@click.option("--seed", "-s", default="", prompt=True, hide_input=True)
@click.password_option(default="")
def generate(seed: str, password: str):
    wordlist = list(BIP_39_WORDLIST)
    if seed:
        try:
            validate_seed_words(seed, wordlist=wordlist)
        except ValueError as error:
            raise click.UsageError(str(error))
    else:
        seed = generate_random_seed_phrase()
    print("Generated seed phrase: ", seed)
    shares = transform_mnemonic(seed, password, groups=GROUPS)
    validate_mnemonics_reversibility(shares, original_seed=seed, password=password)
    print_shares(*shares)


@cli.command()
@click.password_option(default="")
def combine(password: str):
    shares: list[str] = []
    while True:
        share = click.prompt("Enter a share", hide_input=True, default="")
        if share:
            shares.append(share)
        else:
            break
    if not shares:
        raise click.UsageError("No shares provided.")
    original_seed = reverse_transform_mnemonic(shares, password)
    print("Original seed phrase: ", original_seed)


@cli.command()
@click.option("--text", "-t", required=True, prompt=True, hide_input=True)
@click.option("--input_image", "-i", required=True)
@click.option("--output_image", "-o", required=True)
@click.option(
    "--seed",
    "-s",
    prompt=True,
    hide_input=True,
    confirmation_prompt=True,
    default="",
)
def encode_text_in_image(text: str, input_image: str, output_image: str, seed: str):
    try:
        seed_int = int(seed) if seed else None
    except ValueError:
        raise click.UsageError("Seed must be an integer")
    image = Image.open(input_image)
    encoded_img = encode_image(text=text, image=image, seed=seed_int)
    encoded_img.save(output_image)
    encoded_img_loaded = Image.open(output_image)
    decoded_text = decode_image(image=encoded_img_loaded, seed=seed_int)
    assert text == decoded_text, "Was not able to encode and decode the text"


@cli.command()
@click.option("--input_image", "-i", required=True)
@click.option("--seed", "-s")
def decode_text_from_image(input_image: str, seed: int | None = None):
    try:
        seed_int = int(seed) if seed else None
        encoded_img_loaded = Image.open(input_image)
        decoded_text = decode_image(image=encoded_img_loaded, seed=seed_int)
        print(decoded_text)
    except ValueError as e:
        click.echo(f"Error: {e}", err=True)



