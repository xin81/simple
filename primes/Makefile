CC=gcc
CFLAGS=-O0 -w 

SRC=primes.c
OBJ=primes.o
EXE=primes

compile:
	$(CC) $(CFLAGS) $(SRC) -c
all: compile
	$(CC) $(OBJ) -o $(EXE)
clean:
	rm -rf $(OBJ) $(EXE)
