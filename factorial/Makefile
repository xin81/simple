## Makefile: factorial for Linux
CC=gcc
CFLAGS=-Og -Wall
STD=c99
## SYMBOLS=_WINDOWS_
SRC=factorial.c main.c
OBJ=factorial.o main.o
TARGET=factorial

compile:
	$(CC) $(CFLAGS) -std=$(STD) $(SRC) -c
all: compile
	$(CC) $(CFLAGS) -std=$(STD) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)
