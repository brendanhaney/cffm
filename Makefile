CC = gcc
CFLAGS = --ansi -pedantic -lncurses -ltinfo -Wall -Werror -Wextra -D_FORTIFY_SOURCE=2

SRC = src/main.c src/file/*.c src/display/*.c src/misc/*.c
BIN = cffm

all:
	$(CC) $(SRC) $(CFLAGS) -o $(BIN)

release:
	$(CC) $(SRC) --static $(CFLAGS) -o $(BIN)

install:
	sudo cp $(BIN) /usr/bin/

uninstall:
	sudo rm /usr/bin/$(BIN)

preprocess:
	$(CC) $(CFLAGS) -E -o preproc.i main.c
