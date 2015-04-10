## Makefile ##
CC=gcc
CFLAGS=-Og -Wall

SRC=main.c
OBJ=main.o
TARGET=hex

compile:
	$(CC) $(CFLAGS) $(SRC) -c
all: compile
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)

.PHONY: clean all
