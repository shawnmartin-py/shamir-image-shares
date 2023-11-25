.PHONY: build run

build:
	docker build -t cli-tool .

run:
	./create_network.sh
	docker run --network no-internet cli-tool