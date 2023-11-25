from PIL import Image
import numpy as np


SAMPLE_IMAGE_PATH = "./fatdude.png"
SAMPLE_TXT = "hidden_text"
OUTPUT_IMAGE_PATH = "encoded_image.png"
SEED = 1


def text_to_bin(text: str) -> str:
    return "".join(format(ord(c), "08b") for c in text)


def bin_to_text(binary) -> str:
    text = ""
    for i in range(0, len(binary), 8):
        text += chr(int(binary[i:i+8], 2))
    return text


def encode_image(text: str, image: Image, seed: int | None = None):
    binary = text_to_bin(text) + "1111111111111110"
    pixels = np.array(image)
    total_pixels = pixels.shape[0] * pixels.shape[1]
    if len(binary) > total_pixels:
        raise ValueError("Text too long to encode in image.")
    if seed is not None:
        prng = np.random.default_rng(seed)
        pixel_indices = prng.permutation(total_pixels)
        channel = 0
    else:
        pixel_indices = range(total_pixels)
        channel = 2
    index = 0
    for idx in pixel_indices:
        if index < len(binary):
            i = idx // pixels.shape[1]
            j = idx % pixels.shape[1]
            pixels[i, j, channel] = (pixels[i, j, channel] & ~1) | int(binary[index])
            index += 1
    return Image.fromarray(pixels)


def decode_image(image: Image, seed: int | None = None):
    pixels = np.array(image)
    binary = ""
    total_pixels = pixels.shape[0] * pixels.shape[1]
    if seed is not None:
        prng = np.random.default_rng(seed)
        pixel_indices = prng.permutation(total_pixels)
        channel = 0
    else:
        pixel_indices = range(total_pixels)
        channel = 2
    for idx in pixel_indices:
        i = idx // pixels.shape[1]
        j = idx % pixels.shape[1]
        binary += str(pixels[i, j, channel] & 1)
        if binary[-16:] == "1111111111111110":
            return bin_to_text(binary[:-16])
    return "No hidden text found."


if __name__ == "__main__":
    img = Image.open(SAMPLE_IMAGE_PATH)

    encoded_img = encode_image(SAMPLE_TXT, img)
    encoded_img.save(OUTPUT_IMAGE_PATH)

    encoded_img_loaded = Image.open(OUTPUT_IMAGE_PATH)

    decoded_text = decode_image(encoded_img_loaded)
    assert SAMPLE_TXT == decoded_text, "text is different"
    print(decoded_text)
