from io import BytesIO
from enum import Enum

from tabulate import tabulate
from PIL import Image, ImageDraw, ImageFont
import requests

from cli.hide_in_image import encode_image, decode_image


class OutputType(Enum):
    TEXT = 0
    IMG = 1
    HIDDEN_INSIDE_IMG = 2


def generate_table(
        matrix: list[list[str]],
        *,
        split: int,
        output_type: OutputType = OutputType.TEXT,
        input_image_path: str | None = None,
) -> None:
    if split:
        mid_point = len(matrix) // 2
        first_part = matrix[:mid_point]
        second_part = matrix[mid_point:]
        if output_type is OutputType.IMG:
            create_png_from_matrix(first_part, filename="mnemonic_matrix_1.png")
            create_png_from_matrix(second_part, filename="mnemonic_matrix_2.png")
        elif output_type is OutputType.TEXT:
            print(table_with_padding(first_part))
            print(table_with_padding(second_part))
        else:
            raise ValueError(f"Invalid output_type: {output_type} for split")
    else:
        if output_type is OutputType.IMG:
            create_png_from_matrix(matrix)
            print("Successfully created image.")
        else:
            formatted_table = table_with_padding(matrix)
            if output_type is OutputType.TEXT:
                print(formatted_table)
            else:
                encoded_img = encode_image(
                    formatted_table,
                    Image.open(input_image_path).copy(),
                )
                encoded_img.save("encoded_image2.png")
                encoded_img_loaded = Image.open("encoded_image2.png")
                decoded_txt = decode_image(encoded_img_loaded)
                assert formatted_table == decoded_txt, "text is different"
                print("Successfully hidden matrix in image.")
                print(decoded_txt)



def table_with_padding(matrix: list[list[str]], *, padding: int = 6):
    table = tabulate(matrix, tablefmt="grid")
    padded_table = "\n".join([" " * padding + line for line in table.split("\n")])
    return "\n\n" + padded_table + "\n\n"


def download_font(url: str):
    response = requests.get(url)
    response.raise_for_status()
    return BytesIO(response.content)


def create_png_from_matrix(
    matrix: list[list[str]], filename: str = "mnemonic_matrix.png", padding: int = 20
):
    font_size = 20
    font_url = "https://github.com/googlefonts/roboto/raw/main/src/hinted/Roboto-Regular.ttf"
    font_file = download_font(font_url)
    font = ImageFont.truetype(font_file, font_size)

    cell_width = 120
    cell_height = 40
    img_width = cell_width * len(matrix[0]) + (2 * padding)
    img_height = cell_height * len(matrix) + (2 * padding)

    image = Image.new("RGB", (img_width, img_height), "white")
    draw = ImageDraw.Draw(image)

    for row_idx, row in enumerate(matrix):
        for col_idx, word in enumerate(row):
            x = col_idx * cell_width + padding
            y = row_idx * cell_height + padding
            draw.text((x + 10, y + 10), word, fill="black", font=font)
    image.save(filename)