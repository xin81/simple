## Makefile: Linux, Unix, Mac OS X ##
CC=gcc
CFLAGS=-Og -Wall
SYMBOLS=-D_SYSTEM64_ -D_USE_MATH_DEFINES
## -D_WINDOWS_
SRC=dt.c
OBJ=dt.o
TARGET=dt

compile:
	$(CC) $(CFLAGS) $(SYMBOLS) $(SRC) -c -o $(OBJ)
all: compile
	$(CC) $(CFLAGS) $(SYMBOLS) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)
.PHONY: all clean
