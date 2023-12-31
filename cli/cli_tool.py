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
        raise click.UsageError("Seed phrase must contain 12, 18, or 24 words.")
    if not all(word in wordlist for word in words):
        raise click.UsageError("Seed phrase contains invalid words.")


def parse_seed_to_int(seed: str) -> int | None:
    try:
        return int(seed) if seed else None
    except ValueError:
        raise click.UsageError("Seed must be an integer.")


@click.group()
def cli():
    print("Running...")


@cli.command()
@click.option("--seed", "-s", default="", prompt=True, hide_input=True)
@click.password_option(default="")
def generate(seed: str, password: str):
    wordlist = list(BIP_39_WORDLIST)
    if seed:
        validate_seed_words(seed, wordlist=wordlist)
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
    range_seed = parse_seed_to_int(seed)
    image = Image.open(input_image)
    encoded_img = encode_image(text=text, image=image, seed=range_seed)
    encoded_img.save(output_image)
    encoded_img_loaded = Image.open(output_image)
    decoded_text = decode_image(image=encoded_img_loaded, seed=range_seed)
    assert text == decoded_text, "Was not able to encode and decode the text"


@cli.command()
@click.argument("input_image", required=True)
@click.option(
    "--seed",
    "-s",
    prompt=True,
    hide_input=True,
    confirmation_prompt=True,
    default="",
)
def decode_text_from_image(input_image: str, seed: str):
    range_seed = parse_seed_to_int(seed)
    encoded_img_loaded = Image.open(input_image)
    decoded_text = decode_image(image=encoded_img_loaded, seed=range_seed)
    print(decoded_text)




