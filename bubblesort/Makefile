## Makefile ##
CC=gcc
CFLAGS=-Og -Wall
STD=c99

SRC=bubblesort.c main.c
OBJ=bubblesort.o main.o
TARGET=bubblesort

compile:
	$(CC) $(CFLAGS) -std=$(STD) $(SRC) -c
all: compile
	$(CC) $(CFLAGS) -std=$(STD) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)
