import os
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
    allow_internet = os.getenv("RUN_WHILE_ONLINE")
    if not check_internet_connection() or allow_internet:
        cli()
    else:
        print("Internet connection is available. Program will now exit.")
