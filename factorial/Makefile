## Makefile: factorial for Linux
CC=gcc
CFLAGS=-Og -Wall
SYMBOLS=_SYSTEM32_
STD=c99
SRC=factorial.c main.c
OBJ=factorial32.o main32.o
TARGET=factorial32

factorial32.o: factorial.c
	$(CC) $(CFLAGS) -std=$(STD) -D$(SYMBOLS) $< -c -o $@

main32.o: main.c
	$(CC) $(CFLAGS) -std=$(STD) -D$(SYMBOLS) $< -c -o $@

all: factorial32.o main32.o
	$(CC) $(CFLAGS) -std=$(STD) -D$(SYMBOLS) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)
