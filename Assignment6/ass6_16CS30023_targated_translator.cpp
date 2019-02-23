#include "ass6_16CS30023_translator.h"
#include <iomanip> 
#include <vector>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>

using namespace std;

extern std::vector<Quad*> quadVector; 
extern int quadPointer;
extern symbolTable *global;
extern symbolTable *symTab;
extern Symbol* curSym;
extern Type *globalType;
extern string array_name;

extern symbolTable *external;
extern int labelcount;
extern std::vector<label> labelTable;
extern int stringcount;

int symbolTable::findIndex(string s){
	int i=0;
	int j=0;
	Symbol* temp_symbol;
	for(i=0;i<symbols.size();i++){
		if(symbols[i]->name.compare(s)==0)
			{
				return i;
			}
	}
	
	return -1;
}


void symbolTable::createMemoryBinding()
{
	
	int offset = -4;
	int parameters = param;
	if(parameters==0)
	{
		int check = findIndex("$return_value$");
		if(check == -1)
		{
			return;
		}
		else
		{
			offset = symbols[0]->offset;
			symbols[0]->offset = 0;
			
			for(int i=1;i<symbols.size();i++)
			{

			 	symbols[i]->offset -=offset; 
				symbols[i]->offset *=-1;
				symbols[i]->offset -=symbols[i]->size;
			}

		}

	}
	else
	{
		offset = 0;
		for(int i=0;i<param;i++)
		{
			symbols[i]->offset+=8;
		}
		offset = symbols[param]->offset+symbols[param]->type->width;
		symbols[param]->offset = 0;
		for(int i=param+1;i<symbols.size();i++)
		{
			symbols[i]->offset -=offset; 
			symbols[i]->offset *=-1;
			symbols[i]->offset -=8;
		}
	}
}


void Quad::printAssembly(int index)
{
	int resOffset,arg1offset,arg2offset;
	Type* restype,*arg1type,*arg2type;
	if(result.compare("NULL")!=0)
	{
		resOffset = symTab->lookup(result)->offset;
		restype = symTab->lookup(result)->type;
	}
	if(arg1.compare("NULL")!=0 && !checkStringIsInt(arg1))
	{
		arg1offset = symTab->lookup(arg1)->offset;
		arg1type = symTab->lookup(arg1)->type;
	}
	if(arg2.compare("NULL")!=0 && !checkStringIsInt(arg2))
	{
		arg2offset = symTab->lookup(arg2)->offset;
		arg2type = symTab->lookup(arg2)->type;
	}
	if (isLabel(index))
	{
		label l = findLabel(index);
		cout<<l.name<<":"<<endl;
	}
	switch(op)
	{
		case PLUS:
		{			
			if(restype->type==_INT)
			{
				if(checkStringIsInt(arg2))
				{

					int val = convertToInt(arg2);
					if(val == 1)
					{
						cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
						cout<<"addl $1, \%eax"<<endl;
						cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
					}
				}
				else
				{
					
					cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
					cout<<"movl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
		
					cout<<"addl \%edx, \%eax"<<endl;
					
					cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
				}
			}
			if(restype->type==_CHAR)
			{
					cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
					cout<<"movzbl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
					
					cout<<"addl \%edx, \%eax"<<endl;
					
					cout<<"movb "<<"\%al, "<<resOffset<<"(\%ebp)"<<endl;
					break;
			}
			break;
		}
		case MINUS:
		{
			
			if(restype->type==_CHAR)
			{
					cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
					cout<<"movzbl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
					
					cout<<"subl \%edx, \%eax"<<endl;
					cout<<"movb "<<"\%al, "<<resOffset<<"(\%ebp)"<<endl;
					break;
			}

			if(checkStringIsInt(arg2))
			{
				int val = convertToInt(arg2);
				
				if(val == 1)
				{
					
					cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
					cout<<"subl $1, \%eax"<<endl;
					cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
				}
				
			}
			else
			{
				
				cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"movl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
				
				cout<<"subl \%edx, \%eax"<<endl;
				
				cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			}
			break;
		}
		case MULT:
		{
			
			if(restype->type==_CHAR)
			{
				if(checkStringIsInt(arg2))
				{
					int val = convertToInt(arg2);
					
					cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
					cout<<"imull $"<<val<<", \%eax"<<endl;
					cout<<"movb "<<"\%al, "<<resOffset<<"(\%ebp)"<<endl;
					break;
				}
				cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"movzbl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
				
				cout<<"imull \%edx, \%eax"<<endl;
				
				cout<<"movb "<<"\%al, "<<resOffset<<"(\%ebp)"<<endl;
				break;
			}

			if(checkStringIsInt(arg2))
			{
				int val = convertToInt(arg2);
				
				cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"imull $"<<val<<", \%eax"<<endl;
				cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			}
			
			else
			{
				
				cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"movl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
				
				cout<<"imull \%edx, \%eax"<<endl;
				
				cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			}

			break;
		}
		case DIVIDE:
		{
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cltd"<<endl;
			
			cout<<"idivl "<<arg2offset<<"(\%ebp)"<<endl;
			
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			
			break;
		}
		case MODULUS:
		{
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cltd"<<endl;
			
			cout<<"idivl "<<arg2offset<<"(\%ebp)"<<endl;
			
			cout<<"movl "<<"\%edx, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case LOGICAL_AND:
		{
			
			cout<<result<<" = "<<arg1<<" && "<<arg2<<endl;
			break;
		}
		case LOGICAL_OR:
		{
			
			cout<<result<<" = "<<arg1<<" || "<<arg2<<endl;
			break;
		}
		
		case LESS_THAN:
		{
			
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%ebp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jl  "<<l.name<<endl;
				break;
			}
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cmpl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jl  "<<l.name<<endl;
			break;
		}
		case GREATER_THAN:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%ebp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jg  "<<l.name<<endl;
				break;
			}
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cmpl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jg  "<<l.name<<endl;
			break;
		}
		case LESS_THAN_EQUAL:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%ebp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jle  "<<l.name<<endl;
				break;
			}
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cmpl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jle  "<<l.name<<endl;
			break;
		}
		case GREATER_THAN_EQUAL:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%ebp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jge  "<<l.name<<endl;
				break;
			}
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cmpl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jge  "<<l.name<<endl;
			break;
			
		}
		case EQUAL_TO:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%ebp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"je  "<<l.name<<endl;
				break;
			}
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cmpl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"je  "<<l.name<<endl;
			break;
		}
		case NOT_EQUAL_TO:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%ebp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jne  "<<l.name<<endl;
				break;
			}
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cmpl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jne  "<<l.name<<endl;
			break;
		}
		
		case LEFT_SHIFT:
		{
			
			cout<<result<<" = "<<arg1<<"<<"<<arg2<<endl;
			break;
		}
		case RIGHT_SHIFT:
		{
			
			cout<<result<<" = "<<arg1<<">>"<<arg2<<endl;
			break;
		}
		case UMINUS:
		{
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"negl \%eax"<<endl;
			
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case UPLUS:
		{
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case UPOINTER:
		{
			
			if(restype->type==_CHAR)
			{
				cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				
				cout<<"movzbl "<<"(\%eax), \%eax"<<endl;
				cout<<"movb "<<"\%al, "<<resOffset<<"(\%ebp)"<<endl;
				break;
			}
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			
			cout<<"movl "<<"(\%eax), \%eax"<<endl;
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case UADDRESS:
		{
			
			if(restype->type==_CHAR)
			{
				cout<<"leal "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				
				cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
				break;
			}
			
			cout<<"leal "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case UNEGATION:
		{
			
			cout<<"cmpl $0, "<<arg1offset<<"(\%ebp)"<<endl;
			cout<<"sete \%al"<<endl;
			cout<<"movzbl \%al, \%eax"<<endl;
			
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case UBITNEGATION:
		{
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			
			cout<<"notl \%eax"<<endl;
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case BIT_AND:
		{
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"movl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
				
			cout<<"andl \%edx, \%eax"<<endl;
				
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case BIT_XOR:
		{
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"movl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
				
			cout<<"xorl \%edx, \%eax"<<endl;
				
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case BIT_OR:
		{
			
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"movl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
				
			cout<<"orl \%edx, \%eax"<<endl;
				
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		case COPY:
		{
			
			if(restype->type !=_CHAR)
			{	
				if(checkStringIsInt(arg1))
				{
					int val = convertToInt(arg1);
					cout<<"movl $"<<val<<", "<<resOffset<<"(\%ebp)"<<endl;
				}
				else
				{
					
					if(result[0]!='*')
					{
						cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
						cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;
					}
					
					else
					{
						
						resOffset = symTab->lookup(result.substr(1))->offset;
						restype = symTab->lookup(result.substr(1))->type;
						if(restype->type==_POINTER && restype->next->type==_INT)
						{
							cout<<"movl "<<resOffset<<"(\%ebp), \%eax"<<endl;
							cout<<"movl "<<arg1offset<<"(\%ebp), \%edx"<<endl;
							cout<<"movl \%edx, (\%eax)"<<endl;
							break;
						}
						if(restype->type==_POINTER && restype->next->type==_CHAR)
						{
							cout<<"movl "<<resOffset<<"(\%ebp), \%eax"<<endl;
							cout<<"movzbl "<<arg1offset<<"(\%ebp), \%edx"<<endl;
							cout<<"movb \%dl, (\%eax)"<<endl;
							break;
						}

					}
				}
			}
			
			if(restype->type ==_CHAR)
			{
				
				if(arg1[0]=='\'' && arg1[arg1.length()-1]=='\'')
				{
					char c=arg1[1];
					int val = (int)c;
					cout<<"movb $"<<val<<", "<<resOffset<<"(\%ebp)"<<endl;
				}
				else
				{
					
					cout<<"movzbl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
					cout<<"movb "<<"\%al, "<<resOffset<<"(\%ebp)"<<endl;	
				}
			}
			
			break;
		}
		case ARRAYRIGHT:
		{
			
			
			
			if(restype->type ==_CHAR)
			{
				cout<<"leal "<<arg1offset<<"(\%ebp), \%edx"<<endl;
				cout<<"movl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
				cout<<"addl \%edx, \%eax"<<endl;
				cout<<"movzbl (\%eax), \%eax"<<endl;
				cout<<"movb \%al, "<<resOffset<<"(\%ebp)"<<endl;	
				break;
			}
			cout<<"movl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
			cout<<"movl "<<arg1offset<<"(\%ebp,\%eax,1), \%eax"<<endl;
			cout<<"movl "<<"\%eax, "<<resOffset<<"(\%ebp)"<<endl;

			break;
		}
		case ARRAYLEFT:
		{
			
			if(restype->type ==_ARRAY && getBaseType(restype)->type==_CHAR)
			{
				cout<<"leal "<<resOffset<<"(\%ebp), \%edx"<<endl;
				cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
				cout<<"addl \%eax, \%edx"<<endl;
				cout<<"movzbl "<<arg2offset<<"(\%ebp), \%eax"<<endl;
				cout<<"movb \%al, (\%edx)"<<endl;	
				break;
			}
			cout<<"movl "<<arg2offset<<"(\%ebp), \%edx"<<endl;
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"movl \%edx, "<<resOffset<<"(\%ebp,\%eax,1)"<<endl;

			break;
		}
		case _goto:
		{
			
			label l = findLabel(convertToInt(result));
			cout<<"jmp  "<<l.name<<endl;
			break;
		}
		case _if:
		{
			
			if(arg1type->type==_CHAR)
			{
				cout<<"cmpb $0, "<<arg1offset<<"(\%ebp)"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jne  "<<l.name<<endl;
				break;
			}
			cout<<"movl "<<arg1offset<<"(\%ebp), \%eax"<<endl;
			cout<<"cmpl $0, \%eax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jne  "<<l.name<<endl;
			break;
		}
		case PARAM:
		{
			
			if(restype->type!=_POINTER)			
			{
				if(restype->type==_INT)
				{	
					cout<<"movl "<<resOffset<<"(\%ebp), \%eax"<<endl;
					cout<<"pushl \%eax"<<endl;
					break;
				}
				if(restype->type==_CHAR)
				{	
					cout<<"movsbl "<<resOffset<<"(\%ebp), \%eax"<<endl;
					cout<<"pushl \%eax"<<endl;
					break;
				}

			}
			else
			{
				cout<<"movl "<<resOffset<<"(\%ebp), \%eax"<<endl;
				cout<<"pushl \%eax"<<endl;
			}
			break;
		}
		case CALL:
		{
			
			cout<<"call "<<arg1<<endl;
			if(result.compare("VOID")!=0)
			{
				if(restype->type==_INT)
				{
					cout<<"movl \%eax, "<<resOffset<<"(\%ebp)"<<endl;
					break;
				}
				if(restype->type==_CHAR)
				{
					cout<<"movb \%al, "<<resOffset<<"(\%ebp)"<<endl;
					break;
				}
			}
			break;
		}
		case _RETURN:
		{
			if(result.compare("NULL")==0)
			{
				
				cout<<"movl $0, \%eax"<<endl;
				cout<<"movl \%ebp,\%esp"<<endl;
				cout<<"popl \%ebp"<<endl;
				cout<<"ret"<<endl;
			}
			else
			{
				
				if(restype->type==_INT || (restype->type==_POINTER && restype->next->type==_INT))
				{
					cout<<"movl "<<resOffset<<"(\%ebp), \%eax"<<endl;
					cout<<"movl \%ebp,\%esp"<<endl;
					cout<<"popl \%ebp"<<endl;
					cout<<"ret"<<endl;
					break;
				}
				if(restype->type==_CHAR || (restype->type==_POINTER && restype->next->type==_CHAR))
				{
					cout<<"movzbl "<<resOffset<<"(\%ebp), \%eax"<<endl;
					cout<<"movl \%ebp,\%esp"<<endl;
					cout<<"popl \%ebp"<<endl;
					cout<<"ret"<<endl;
					break;
				}
				if(restype->type==_POINTER && restype->next->type==_INT)
				{
					cout<<"movl "<<resOffset<<"(\%ebp), \%eax"<<endl;
					cout<<"movl \%ebp,\%esp"<<endl;
					cout<<"popl \%ebp"<<endl;
					cout<<"ret"<<endl;
					break;
				}
				if(restype->type==_POINTER && restype->next->type==_CHAR)
				{
					cout<<"movzbl "<<resOffset<<"(\%ebp), \%eax"<<endl;
					cout<<"movl \%ebp,\%esp"<<endl;
					cout<<"popl \%ebp"<<endl;
					cout<<"ret"<<endl;
					break;
				}


			}
			break;
		}
		case inttobool:
		{
			
			break;
		}
		case inttodbl:
		{
			
			break;
		}
		case chartodbl:
		{
			
			break;
		}
		case dbltoint:
		{
			
			break;
		}
		case chartoint:
		{
			
			break;
		}
		case dbltochar:
		{
			
			break;
		}
		case intTochar:
		{
			
			break;
		}
		case ENDPROGRAM:
		{
			
			break;
		}
		case FUNCTION_OP: 
		{
			
			symTab = global->lookup(result)->symTabPointer;
			cout<<".globl "<<result<<"\n .type "<<result<<", @function\n";
			cout<<result<<":"<<endl;
			cout<<"pushl	\%ebp"<<endl;
			cout<<"movl 	\%esp,\%ebp"<<endl;
			int size = symTab->symbols.size();
			int subtractBy = symTab->symbols[size-1]->offset;
			subtractBy *=-1;
			cout<<"subl	$"<<subtractBy<<",\%esp"<<endl;
			break;
			
		}
		case _STRING: 
		{
			
			cout<<"movl $"<<arg2<<", "<<resOffset<<"(\%ebp)"<<endl;
			break;
		}
		default:
		{
			cout<<"unknown operation"<<endl;
		}
	}
}



label findLabel(int index)
{
	int i = 0;
	for(i=0;i<labelTable.size();i++)
	{
		if(labelTable[i].quadindex==index)
			return labelTable[i];
		
	}
	label l;
	l.quadindex = -1;
	l.name = "invalid";
	return l;
}
label addLabel(int index)
{
	label l;
	l.quadindex = index;
	string s = ".LBNO";
	s.append(to_string(labelcount));
	labelcount++;
	l.name = s;
	labelTable.push_back(l);	
	return l;
}

bool  isLabel(int index)
{	
	int i = 0;
	for(i=0;i<labelTable.size();i++)
	{
		if(labelTable[i].quadindex==index)
			return true;
	}
	return false;
}

void createLabelTable(vector<Quad*> v)
{
	for(int i=0;i<v.size();i++)
	{
		string result = v[i]->result;
		string arg1 = v[i]->arg1;
		string arg2 = v[i]->arg2;
		switch(v[i]->op)
		{
			case LESS_THAN:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addLabel(convertToInt(result));
				}
				break;
			}
			case GREATER_THAN:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addLabel(convertToInt(result));
				}

				break;
			}
			case LESS_THAN_EQUAL:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addLabel(convertToInt(result));
				}
				break;
			}
			case GREATER_THAN_EQUAL:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addLabel(convertToInt(result));
				}
				break;
			}
			case EQUAL_TO:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addLabel(convertToInt(result));
				}
				break;
			}
			case NOT_EQUAL_TO:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addLabel(convertToInt(result));
				}
				break;
			}
			case _goto:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addLabel(convertToInt(result));
				}
				break;
			}
			case _if:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addLabel(convertToInt(result));
				}
				break;
			}
			case FUNCTION_OP:
			{				
				break;
			}
			default:
			break;
		}
	}
}

void printLabelTable()
{
	cout<<"********************** LABEL TABLE *************************"<<endl;
	for(int i=0;i<labelTable.size();i++)
	{
		cout<<labelTable[i].quadindex<<"\t\t"<<labelTable[i].name<<endl;
	}
}

void createStringLabel()
{
	for(int i=0;i<quadVector.size();i++)
	{
		if(quadVector[i]->op==_STRING)
		{
			string s = "STR";
			s.append(to_string(stringcount));
			stringcount++;
			quadVector[i]->arg2=s;
			cout<<s<<":"<<endl;
			cout<<".string "<<quadVector[i]->arg1<<endl;
		}
	}
}


bool checkStringIsInt(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<'0' || s[i]>'9')
		{
			return false;
		}
	}
	return true;
}

int convertToInt(string s)
{
	int val;
	stringstream(s)>>val;
	return val;
}



void createExternalTable()
{
	Symbol* p = external->lookup("printi");
	updateSymbol(p,createType(_FUNCTION));
	p->symTabPointer=new symbolTable();
	symbolTable *next = p->symTabPointer;
	next->param = 1;
	Symbol *q = next->lookup("$return_value$");
	updateSymbol(q,createType(_VOID));

	
	p = external->lookup("readi");
	updateSymbol(p,createType(_FUNCTION));
	p->symTabPointer=new symbolTable();
	next = p->symTabPointer;
	next->param = 1;
	q = next->lookup("x");
	Type *tp = createType(_POINTER);
	tp->next = createType(_INT);
	updateSymbol(q,tp);
	q = next->lookup("$return_value$");
	updateSymbol(q,createType(_INT));

	p = external->lookup("prints");
	updateSymbol(p,createType(_FUNCTION));
	p->symTabPointer=new symbolTable();
	next = p->symTabPointer;
	next->param = 1;
	q = next->lookup("x");
	tp = createType(_POINTER);
	tp->next = createType(_CHAR);
	updateSymbol(q,tp);
	q = next->lookup("$return_value$");
	updateSymbol(q,createType(_INT));
}