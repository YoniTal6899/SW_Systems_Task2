CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=mylib.o
FLAGS= -Wall -g
.PHONY: all

all: my_mat.o main.o
	$(CC) $(FLAGS) -o connections.out main.o my_mat.o

connections.out: my_mat.o main.o
	$(CC) $(FLAGS) -o main.o my_mat.o connections

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

run:
	gcc my_mat.c
	./a.out


clean:
	rm -f *.o *.a *.so *.out
