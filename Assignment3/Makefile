all: a.out

a.out: lex.yy.c
	gcc lex.yy.c  -lfl

lex.yy.c: ass3_16CS30023.l ass3_16CS30023.c
	flex ass3_16CS30023.l ass3_16CS30023.c

clean:
	rm lex.yy.c a.out