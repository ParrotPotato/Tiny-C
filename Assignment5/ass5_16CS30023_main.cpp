#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip> 
#include "y.tab.h"
#include "ass5_16CS30023_translator.h"
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

int main()
{
	
	yyparse();
	
	global->update();
	cout<<std::setw(95)<<"******************************** GLOBAL SYMBOL TABLE **********************************"<<endl;
	cout<<std::setw(95)<<"---------------------------------------------------------------------------------------"<<endl;
	cout << std::setw(20) << "Symbol Name";
	cout << std::setw(35) << "Symbol Type";
	cout << std::setw(20) << "Initial Value";
	cout << std::setw(15) << "Size";
	cout << std::setw(15) << "Offset";
	cout << std::setw(25) << "function pointer"<<endl;
	global->print();
	cout<<std::setw(95)<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	for(int i=0;i<global->symbols.size();i++)
	{
		if(global->symbols[i]->symTabPointer!=NULL)
		{	

			cout<<std::setw(40)<<"****************************** "<<std::setw(15)<<global->symbols[i]->name<<std::setw(45)<<" SYMBOL TABLE **********************************"<<endl;
			cout<<std::setw(95)<<"---------------------------------------------------------------------------------------"<<endl;
			cout << std::setw(20) << "Symbol Name";
			cout << std::setw(35) << "Symbol Type";
			cout << std::setw(20) << "Initial Value";
			cout << std::setw(15) << "Size";
			cout << std::setw(15) << "Offset";
			cout << std::setw(25) << "function pointer"<<endl;
			global->symbols[i]->symTabPointer->print();cout<<std::setw(90)<<"---------------------------------------------------------------------------------------"<<endl;
			cout<<endl;
		}
	}
	cout<<endl<<endl;

	for(int i=0;i<quadVector.size();i++)
	{
		cout<< i<<") ";
		quadVector[i]->print();
	}

}