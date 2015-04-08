## Makefile: factorial for Linux
CC=gcc
CFLAGS=-Og -Wall

SRC=factorial.c
OBJ=factorial.o
TARGET=factorial

compile:
	$(CC) $(CFLAGS) $(SRC) -c
all: compile
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)
