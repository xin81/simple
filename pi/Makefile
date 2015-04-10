## Makefile ##
CC=gcc
CFLAGS=-Og -Wall
STD=c99

LIB_PATH=../lib
LIBS=-lm -lfactorial
INCLUDE=../include

SRC=main.c pi.c
OBJ=main.o pi.o
TARGET=pi

compile:
	$(CC) $(CFLAGS) -std=$(STD) -I$(INCLUDE) $(SRC) -c
all: compile
	$(CC) $(CFLAGS) -std=$(STD) -L$(LIB_PATH) $(OBJ) $(LIBS) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)
.PHONY: all clean
