#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip> 
#include "y.tab.h"
#include "ass6_16CS30023_translator.h"

using namespace std;
extern int yylex();
extern int yydebug;
extern std::vector<Quad*> quadVector;
extern int quadPointer;
extern symbolTable *global;
extern symbolTable *symTab;
extern Symbol* curSym;
extern Type *globalType;
extern Symbol *curSym;
extern string array_name;
extern int side;
using namespace std;
extern Quad* q;
extern symbolTable *external;
extern int labelcount;
extern int stringcount;
extern std::vector<label> labelTable;


// all the printing statements for the tables are removed 
int main()
{
	
	createExternalTable();

	yyparse();

	global->update();
	createLabelTable(quadVector);
	global->createMemoryBinding();



	for(int i=0;i<global->symbols.size();i++)
	{
		if(global->symbols[i]->symTabPointer!=NULL)
		{	

			
			global->symbols[i]->symTabPointer->createMemoryBinding();
			
		}
	}
	cout<<".data\n ";
	createStringLabel();
	cout<<endl;

	
	cout<<".text\n ";
	symTab = global;
	for(int i=0;i<quadVector.size();i++)
	{
		quadVector[i]->printAssembly(i);
	}

}