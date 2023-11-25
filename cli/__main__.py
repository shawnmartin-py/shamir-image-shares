import socket
import argparse
from cli.cli_tool import cli


def check_internet_connection(host="www.google.com", port=80, timeout=2):
    try:
        socket.setdefaulttimeout(timeout)
        socket.socket(socket.AF_INET, socket.SOCK_STREAM).connect((host, port))
        return True
    except OSError:
        return False


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--allow-internet",
        help="Allow the program to run even if an internet connection is detected"
    )
    args = parser.parse_args()
    if not check_internet_connection() or args.allow_internet:
        cli()
    else:
        print("Internet connection is available. Program will now exit.")
