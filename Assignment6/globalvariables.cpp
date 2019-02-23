#include "ass6_16CS30023_translator.h"
#include <iostream>
using namespace std;


std::vector<Quad*> quadVector;

symbolTable *global = new symbolTable();
int quadPointer=0;
int labelcount = 1;
int stringcount = 1;

std::vector<label> labelTable;
symbolTable *symTab = global;
Type *globalType; 
Symbol *curSym = 0;
string array_name;

symbolTable *external = new symbolTable();