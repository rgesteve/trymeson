FROM ubuntu:22.04

RUN apt update && apt upgrade -y
RUN apt install -y build-essential ninja-build cmake git meson
RUN useradd -s /bin/bash -m vscode
USER vscode
