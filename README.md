# Running in a Docker Container

1. `docker build -t cli-tool .`
2. `docker network create --internal no-internet`
3. `docker run --network no-internet cli-tool`

- use `docker cp <origin> <destination>` to copy files to and from the container
- docker location should be: cli-tool:/usr/src/app



## Compiling to a Single Executable
`python -m nuitka --onefile --standalone --include-data-file=wordlist.txt=./bip_utils/bip/bip39/wordlist/english.txt app.py`

[//]: # (# Guide for Encoding and Decoding Text in an Image)

[//]: # (## Encoding Text into an Image)