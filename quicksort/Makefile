## Makefile ##
CC=gcc
CFLAGS=-Og -Wall
STD=c99

SRC=main.c quicksort.c
OBJ=main.o quicksort.o
TARGET=quicksort

compile:
	$(CC) $(CFLAGS) -std=$(STD) $(SRC) -c
all: compile
	$(CC) $(CFLAGS) -std=$(STD) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)

.PHONY: all clean
