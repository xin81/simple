## Makefile: factorial for Linux
CC=gcc
CFLAGS=-Og -Wall

SRC=factorial.c main.c
OBJ=factorial.o main.o
TARGET=factorial

compile:
	$(CC) $(CFLAGS) $(SRC) -c
all: compile
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)
