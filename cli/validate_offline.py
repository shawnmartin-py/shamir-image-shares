import os
import socket
import sys


def has_internet_connection(host="www.google.com", port=80, timeout=2) -> bool:
    try:
        socket.setdefaulttimeout(timeout)
        socket.socket(socket.AF_INET, socket.SOCK_STREAM).connect((host, port))
        return True
    except OSError:
        return False


def exit_if_online() -> None:
    allow_internet = os.getenv("RUN_WHILE_ONLINE")
    if has_internet_connection() and not allow_internet:
        print("Internet connection is available. Program will now exit.")
        sys.exit()
