# Running in a Docker Container

1. `docker build -t cli-tool .`
2. `docker network create --internal no-internet`
3. `docker run --network no-internet cli-tool`

- use `docker cp <origin> <destination>` to copy files to and from the container
- docker location should be: cli-tool:/usr/src/app

# Guide for Encoding and Decoding Text in an Image
## Encoding Text into an Image