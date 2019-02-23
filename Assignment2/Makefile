a.out: main.o libassgn2_16CS30023.a
	gcc main.o -L. -lassgn2_16CS30023

main.o: main.c myl.h
	gcc -Wall -c main.c 

libassgn2_16CS30023.a: assgn2_16CS30023.o
	ar -rcs libassgn2_16CS30023.a assgn2_16CS30023.o

assgn2_16CS30023.o: assgn2_16CS30023.c
	gcc -Wall -c assgn2_16CS30023.c

clean:
	rm a.out main.o libassgn2_16CS30023.a assgn2_16CS30023.o