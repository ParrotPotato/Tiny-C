a.out: ass6_16CS30023_translator.o ass6_16CS30023_targated_translator.o globalvariables.o  y.tab.o lex.yy.o ass6_16CS30023_main.o 
	g++  ass6_16CS30023_main.o lex.yy.o y.tab.o ass6_16CS30023_translator.o ass6_16CS30023_targated_translator.o globalvariables.o -lfl
lex.yy.c: ass6_16CS30023.l
	flex ass6_16CS30023.l
y.tab.c: ass6_16CS30023.y
	yacc -dtv ass6_16CS30023.y
ass6_16CS30023_main.o: ass6_16CS30023_main.cpp
	g++ -c ass6_16CS30023_main.cpp
lex.yy.o: lex.yy.c
	g++ -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -c y.tab.c  

ass6_16CS30023_translator.o: ass6_16CS30023_translator.cpp
	g++ -c ass6_16CS30023_translator.cpp

ass6_16CS30023_targated_translator.o: ass6_16CS30023_targated_translator.cpp
	g++ -c ass6_16CS30023_targated_translator.cpp


globalvariables.o: globalvariables.cpp
	g++ -c globalvariables.cpp

run1: a.out test1.c 
	./a.out < test1.c > ass6_16CS30023_1.s
	gcc -m32 ass6_16CS30023_1.s myl.c -o 1.out
	./1.out
run2: a.out test2.c
	./a.out < test2.c > ass6_16CS30023_2.s
	gcc -m32 ass6_16CS30023_2.s myl.c -o 2.out
	./2.out
run3: a.out test3.c
	./a.out < test3.c > ass6_16CS30023_3.s
	gcc -m32 ass6_16CS30023_3.s myl.c -o 3.out
	./3.out
run4: a.out test4.c
	./a.out < test4.c > ass6_16CS30023_4.s
	gcc -m32 ass6_16CS30023_4.s myl.c -o 4.out
	./4.out
run5: a.out test5.c
	./a.out < test5.c > ass6_16CS30023_5.s
	gcc -m32 ass6_16CS30023_5.s myl.c -o 5.out
	./5.out

clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass6_16CS30023_main.o a.out ass6_16CS30023_translator.o globalvariables.o ass6_16CS30023_targated_translator.o