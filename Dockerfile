From ubuntu:23.04

WORKDIR /rpg

COPY . .

RUN apt-get -y update && apt-get install -y libcsfml-dev gcc make

RUN make
