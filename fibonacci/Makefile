CC=gcc
CFLAGS=-O0 -w

SRC=fibonacci.c
OBJ=fibonacci.o
EXE=fibonacci

compile:
	$(CC) $(CFLAGS) $(SRC) -c -o $(OBJ)
all: compile
	$(CC) $(CFLAGS) $(OBJ) -o $(EXE)
clean:
	rm -rf $(OBJ) $(EXE)
.PHONY: all clean
