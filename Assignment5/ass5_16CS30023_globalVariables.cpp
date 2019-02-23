#include "ass5_16CS30023_translator.h"
#include <iostream>
using namespace std;

Type *globalType; 
Symbol *curSym = 0;

string array_name;

int quadPointer=0;
std::vector<Quad*> quadVector;

symbolTable *global = new symbolTable();
symbolTable *symTab = global;

