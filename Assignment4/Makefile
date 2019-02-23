all: a.out
	./a.out < ass4_16CS30023_test.c > test_out

a.out: lex.yy.c y.tab.c ass4_16CS30023_main.o
	gcc lex.yy.c y.tab.c ass4_16CS30023_main.o -lfl

lex.yy.c: ass4_16CS30023.l
	flex ass4_16CS30023.l

y.tab.c: ass4_16CS30023.y
	yacc -dtv ass4_16CS30023.y

ass4_16CS30023_main.o: ass4_16CS30023_main.c y.tab.c
	gcc -c ass4_16CS30023_main.c -lfl

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output ass4_16CS30023_main.o 
