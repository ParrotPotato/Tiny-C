a.out: ass5_16CS30023_translator.o ass5_16CS30023_globalVariables.o  y.tab.o lex.yy.o ass5_16CS30023_main.o 
	g++ ass5_16CS30023_main.o lex.yy.o y.tab.o ass5_16CS30023_translator.o ass5_16CS30023_globalVariables.o -lfl
	./a.out<ass5_16CS30023_conditiontest.c >ass5_16CS30023_conditiontest_output.c
	./a.out<ass5_16CS30023_expressiontest.c >ass5_16CS30023_expressiontest_output.c
	./a.out<ass5_16CS30023_declarationtest.c >ass5_16CS30023_declarationtest_output.c
	./a.out<ass5_16CS30023_functiontest.c >ass5_16CS30023_functiontest_output.c
	./a.out<ass5_16CS30023_looptest.c >ass5_16CS30023_looptest_output.c
lex.yy.c: ass5_16CS30023.l
	flex ass5_16CS30023.l
y.tab.c: ass5_16CS30023.y
	yacc -dtv ass5_16CS30023.y

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -c y.tab.c 
ass5_16CS30023_translator.o: ass5_16CS30023_translator.cpp
	g++ -c ass5_16CS30023_translator.cpp
globalVariables.o: ass5_16CS30023_globalVariables.cpp
	g++ -c ass5_16CS30023_globalVariables.cpp
ass5_16CS30023_main.o: ass5_16CS30023_main.cpp
	g++ -c ass5_16CS30023_main.cpp
clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass5_16CS30023_main.o a.out ass5_16CS30023_translator.o ass5_16CS30023_globalVariables.o
