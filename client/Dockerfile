FROM ubuntu:latest

RUN apt-get update && apt-get install -y \
    build-essential \
    curl \
    python3-dev \
    python3-pip \
    sudo \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

RUN pip3 install -U platformio

ENTRYPOINT [ "platformio" ]
