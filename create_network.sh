#!/bin/bash
if [ -z "$(docker network ls | grep no-internet)" ]; then
  docker network create --internal no-internet
fi
