CC = gcc -c
AR=ar rcs
FLAGS= -Wall -g


all: connections libmy_mat.a

libmy_mat.a: my_mat.o
	$(AR) libmy_mat.a my_mat.o
	
connections: main.o libmy_mat.a 
	gcc -Wall main.o libmy_mat.a -o connections 

.PHONY: clean all
clean:
	rm -f *.o *.a *.so connections  

my_mat.o:my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c my_mat.h

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c my_mat.h
