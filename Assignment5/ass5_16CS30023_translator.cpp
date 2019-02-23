#include "ass5_16CS30023_translator.h"
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

//function related function definations 

Type* createType(type_enum tcode)
{
	Type *t = new Type;
	t->type = tcode;
	t->width=getTypeSize(tcode);
	t->count = 1;
	t->next = NULL;
	return t;
}

Type* getBaseType(Type *t)
{
	Type *head = t;
	while(head->next!=NULL)
		head = head->next;
	return createType(head->type);
}


int getTypeSize(type_enum t)
{
    
     if(t == _CHAR){
        return 1;
    }
    else if(t == _POINTER){
        return 4;
    }
    else if(t == _DOUBLE){
        return 8;
    }
    else if(t == _INT){
        return 4;
    }
    return 0;
}



string getTypeID(type_enum t)
{
    if(t == 0){
        return "void";
    }
    else if(t == 1){
        return "char";
    }
    else if(t == 2){
        return "int";
    }
    else if(t == 3){
        return "double";
    }
    else if(t == 4){
        return "bool";
    }
    else if(t == 5){
        return "array";
    }
    else if(t == 6){
        return "pointer";
    }
    else if(t == 7){
        return "function";
    }
}



// function for symbole handeling 


void updateSymbolInitVal(Symbol *s,string val)
{
	s->init_value=val;
}


void updateSymbol(Symbol* symp,Type* t)
{
	
	symp->type = createType(t->type);
	Type *symType = symp->type;
	Type *temp = t;
	symType->width = temp->width;
	symType->type = temp->type;
	temp = temp->next;
	while(temp!=NULL)
	{
		symType->next = createType(temp->type);
		symType=symType->next;
		symType->width = temp->width;
		temp=temp->next;
	}	
}

symbolTable::symbolTable()
{
	symbols.clear();
	tempcount=0;
	parent = NULL;
	param = 0;
}


void symbolTable::update()
{
	int offset = 0;
	for(int i=0;i<symbols.size();i++)
	{
		if(symbols[i]->name[0]=='_' && symbols[i]->name[1]=='t' && symbols[i]->name[2]=='m' && symbols[i]->name[3]=='p' && symbols[i]->type->type ==_ARRAY)
		{
			symbols[i]->type = createType(_INT);
		}

		int width = symbols[i]->type->width;
		symbols[i]->size = width;
		symbols[i]->offset = offset;
		offset+=width;
		if(symbols[i]->symTabPointer!=NULL)
		{
			symbols[i]->symTabPointer->update(); 
		}
	}
}

Symbol* createSymbol(string s) // other argument passed as default parameteres 
{
	Symbol* smb = new Symbol;
	smb->tableName = "0";
	smb->name = string(s);
	smb->init_value = "NULL";
	smb->offset = 0;
	smb->size = 0;
	smb->symTabPointer=0;
	smb->type = createType(_VOID);
	return smb; 
}




Symbol* symbolTable::gentemp(){
	char temp[10];
	sprintf(temp,"_tmp%03d",tempcount);
	tempcount++;
	Symbol* ptr=lookup(temp);
	return ptr;
}

Symbol* symbolTable::lookup(string s){
	int i=0;
	int j=0;
	Symbol* temp_symbol;
	for(i=0;i<symbols.size();i++)
		if(symbols[i]->name.compare(s)==0)
				return symbols[i];
	
	for(j=0;j<global->symbols.size();j++)
		if(global->symbols[j]->name.compare(s)==0)
				return global->symbols[j];
	
	if(i<MAX_SYMBOLS){
		temp_symbol=createSymbol(s);
		symbols.push_back(temp_symbol);	
		return symbols[i]; 
	}
	cerr<<"Too many symbols"<<endl;
	return 0;
}

void symbolTable::print()
{
	for(int i=0;i<symbols.size();i++)
	{
		cout << std::setw(15) << symbols[i]->name; 
		if(symbols[i]->type->type==_ARRAY) {
			
			
			cout<<std::setw(30)<<printArrayType(symbols[i]->type);
			
		}
		else if(symbols[i]->type->type==_POINTER)
		{
			cout<<std::setw(30)<<printPointerType(symbols[i]->type);	}
		else{
			cout << std::setw(30) << getTypeID(symbols[i]->type->type);		cout << std::setw(10) << symbols[i]->init_value;
		cout << std::setw(10) << symbols[i]->size;
		cout << std::setw(10) << symbols[i]->offset;
        }
		if(symbols[i]->symTabPointer!=NULL){
			cout << std::setw(20)<<"function-ST"<<endl;
		}
		else 
		{
			cout << std::setw(20)<<"NULL"<<endl;
		}
	}
}



string printPointerType(Type *t)
{
	Type* head = t;
	string s;
	if(head->type==_POINTER)
	{
		s="pointer(";
		s.append(printPointerType(head->next));
		s.append(")");
	}
	else
	{
		s=getTypeID(head->type);
	}
	return s;

}



string printArrayType(Type *t)
{
	Type* head = t;
	string s;
	if(head->type==_ARRAY)
	{
		s="array(";
		s.append(to_string(head->count));
		s.append(", ");
		s.append(printArrayType(head->next));
		s.append(")");
	}
	else
	{
		s=getTypeID(head->type);
	}
	return s;

}


void Quad::print()
{

		if (op ==  PLUS)
		{
			cout<<result<<" = "<<arg1<<" + "<<arg2<<endl;
			
		}
		
        else if (op ==  MINUS)
		{
			cout<<result<<" = "<<arg1<<" - "<<arg2<<endl;
		}
        else if (op ==  MULT)
		{
			cout<<result<<" = "<<arg1<<" * "<<arg2<<endl;
		}
		else if (op ==  DIVIDE){
			cout<<result<<" = "<<arg1<<" / "<<arg2<<endl;
		}
		else if (op ==  MODULUS){
			cout<<result<<" = "<<arg1<<" % "<<arg2<<endl;
		}
		else if (op ==  LOGICAL_AND){
			cout<<result<<" = "<<arg1<<" && "<<arg2<<endl;
		}
		else if (op ==  LOGICAL_OR){
			cout<<result<<" = "<<arg1<<" || "<<arg2<<endl;
		}
		else if (op ==  LESS_THAN){
			cout<<"if "<<arg1<<"<"<<arg2<<" goto "<<result<<endl;
		}
		else if (op ==  GREATER_THAN){
			cout<<"if "<<arg1<<">"<<arg2<<" goto "<<result<<endl;
		}
		else if (op ==  LESS_THAN_EQUAL){
			cout<<"if "<<arg1<<"<="<<arg2<<" goto "<<result<<endl;
		}
		else if (op ==  GREATER_THAN_EQUAL){
			cout<<"if "<<arg1<<">="<<arg2<<" goto "<<result<<endl;
		}
		else if (op ==  EQUAL_TO){
			cout<<"if "<<arg1<<"=="<<arg2<<" goto "<<result<<endl;
		}
		else if (op ==  NOT_EQUAL_TO){
			cout<<"if "<<arg1<<"!="<<arg2<<" goto "<<result<<endl;
		}
		else if (op ==  LEFT_SHIFT){
			cout<<result<<" = "<<arg1<<"<<"<<arg2<<endl;
		}
		else if (op ==  RIGHT_SHIFT){
			cout<<result<<" = "<<arg1<<">>"<<arg2<<endl;
		}
		else if (op ==  UMINUS){
			cout<<result<<" = "<<"-"<<arg1<<endl;
			
		}
		else if (op ==  UPLUS){
			cout<<result<<" = "<<"+"<<arg1<<endl;
			
		}
		else if (op ==  UPOINTER){
			cout<<result<<" = "<<"*"<<arg1<<endl;
			
		}
		else if (op ==  UADDRESS){
			cout<<result<<" = "<<"&"<<arg1<<endl;
			
		}
		else if (op ==  UNEGATION){
			cout<<result<<" = "<<"!"<<arg1<<endl;
			
		}
		else if (op ==  UBITNEGATION){
			cout<<result<<" = "<<"~"<<arg1<<endl;
			
		}
		else if (op ==  BIT_AND){
			cout<<result<<" = "<<arg1<<" & "<<arg2<<endl;
			
		}
		else if (op ==  BIT_XOR){
			cout<<result<<" = "<<arg1<<" ^ "<<arg2<<endl;
			
		}
		else if (op ==  BIT_OR){
			cout<<result<<" = "<<arg1<<" | "<<arg2<<endl;
			
		}
		else if (op ==  COPY){
			cout<<result<<" = "<<arg1<<endl;
			
		}
		else if (op ==  ARRAYRIGHT){
			cout<<result<<" = "<<arg1<<"["<<arg2<<"]"<<endl;
			;
		}
		else if (op ==  ARRAYLEFT){
			cout<<result<<"["<<arg1<<"]"<<" = "<<arg2<<endl;
			
		}
		else if (op ==  _goto){
			cout<<"goto "<<result<<endl;
			
		}
		else if (op ==  _if){
			cout<<"if ("<<arg1<<")"<<" goto "<<result<<endl;
			
		}
		else if (op ==  PARAM){
			cout<<"param "<<result<<endl;
			
		}
		else if (op ==  CALL){
			cout<<result<<" = "<<"call "<<arg1<<", "<<arg2<<endl;
			
		}
		else if (op ==  _RETURN){
			if(result.compare("NULL")==0)
			{
				cout<<"return"<<endl;
			}
			else
				cout<<"return "<<result<<endl;
			
		}
		else if (op ==  inttobool){
			cout<<result<<" = "<<"inttobool("<<arg1<<")"<<endl;
			
		}
		else if (op ==  inttodbl){
			cout<<result<<" = "<<"inttodbl("<<arg1<<")"<<endl;
			
		}
		else if (op ==  chartodbl){
			cout<<result<<" = "<<"chartodbl("<<arg1<<")"<<endl;
			
		}
		else if (op ==  dbltoint){
			cout<<result<<" = "<<"dbltoint("<<arg1<<")"<<endl;
			
		}
		else if (op ==  chartoint){
			cout<<result<<" = "<<"chartoint("<<arg1<<")"<<endl;
			
		}
		else if (op ==  dbltochar){
			cout<<result<<" = "<<"dbltochar("<<arg1<<")"<<endl;
			
		}
		else if (op ==  intTochar){
			cout<<result<<" = "<<"inttochar("<<arg1<<")"<<endl;
			
		}
		else if (op ==  ENDPROGRAM){
			cout<<"END of PROGRAM"<<endl;
			
		}
		else if (op ==  FUNCTION_OP){
			cout<<" FUNCTION "<<result<<":"<<endl;
		}
}


void Quad::update(string label)
{
	result = label;
}




Quad* createQuad(opCode op,string s,string s1,string s2){
	Quad *p = new Quad;
	p->op= op;
	p->result=s;
	p->arg1 = s1;
	p->arg2 = s2;
	return p;
}

Quad* createQuad(opCode op,string s)
{
	Quad *p=new Quad;
	p->op= op;
	p->result=s;
	p->arg1 = "NULL";
	p->arg2 = "NULL";
	return p;
}

Quad* createQuad(opCode op,string s,string s2){
	Quad *p = new Quad;
	p->op= op;
	p->result=s;
	p->arg1 = s2;
	p->arg2 = "NULL";
	return p;
}

void emit(opCode op,string res)
{
	Quad *new_quad = createQuad(op,res);
	quadVector.push_back(new_quad);
	quadPointer++;
}

void emit(opCode op,string res,string s1,string s2)
{
	Quad *new_quad = createQuad(op,res,s1,s2);
	quadVector.push_back((new_quad));
	quadPointer++;
}


void emit(opCode op,string res,string s1)
{
	Quad *new_quad = createQuad(op,res,s1);
	quadVector.push_back(new_quad);
	quadPointer++;
}





list<int>* makelist(int i){
	list<int>* ptr = new list<int>(1,i);
	return ptr;
}



void backpatch(list<int>* L, int target)
{
	if(L!=NULL)//If L ==NUll then no action will take place
	for(list<int>::iterator it = (*L).begin();it != (*L).end(); ++it){
		int index = *it;
		string res = to_string(target);
		quadVector[index]->update(res);
	}
}

list<int>* merge(list<int>* L1, list<int>* L2)
{
	list<int>* L;
	
	if(L2!=NULL && L1!=NULL)
	{
		L = L1;
		(*L).merge(*L2);

	}
	else
	{
		if(L1==NULL && L2!=NULL)
		{
			L = L2;
		}
		else if(L1!=NULL && L2==NULL)
		{
			L = L1;
		}
		else
		{
			L = NULL;
		}
	}	
	return L;
}

list<Expression*>* makelistArgs(Expression *i){
	list<Expression*>* ptr = new list<Expression*>(1,i);
	return ptr;
}

list<Expression*>* mergeArgs(list<Expression*>* L1, list<Expression*>* L2)
{
	list<Expression*>* L;
	
	if(L2==NULL || L1==NULL)
	{
		
        if(L1==NULL && L2!=NULL)
		{
			L = L2;
		}
		else if(L1!=NULL && L2==NULL)
		{
			L = L1;
		}
		else
		{
			L = NULL;
		}

	}
	else
	{
		L = L1;
		(*L).merge(*L2);
	}	
	return L;
}

//functions for checking the type of the exp pointers
//and typecast them accordingly 
void typecheck(Expression* expr1, Expression* expr2){

	if(expr1->loc->type->type!=_BOOL && expr2->loc->type->type!=_BOOL)
	{
		if(expr1->loc->type->type != expr2->loc->type->type){
			if(expr1->loc->type->type > expr2->loc->type->type){
				Expression *temp = new Expression;
				temp = convert(expr2,expr1->loc->type->type);			
				expr2->truelist = 0;
				expr2->falselist = 0;
			}
			else{
				Expression *temp = new Expression;
				temp = convert(expr1,expr2->loc->type->type);					
				expr1->truelist = 0;
				expr1->falselist = 0;			
			}
		}
	}
	else
	{
		if(expr2->loc->type->type==_BOOL)
		{
            expr2->type = createType(_INT);
			backpatch(expr2->truelist,quadPointer);
			backpatch(expr2->falselist,quadPointer);
			updateSymbol(expr2->loc,createType(_INT));
			
			typecheck(expr1,expr2);
		}
		if(expr1->loc->type->type==_BOOL)
		{
            expr1->type = createType(_INT);
			backpatch(expr1->truelist,quadPointer);
			backpatch(expr1->falselist,quadPointer);
			updateSymbol(expr1->loc,createType(_INT));
			
			typecheck(expr1,expr2);
		}
		

	}
}


Expression* convert(Expression *t, type_enum targetcode)
{
	Type *tp = createType(targetcode);
	Expression* temp = new Expression;
	temp->loc = symTab->gentemp();
	temp->type = tp;	
	updateSymbol(temp->loc,tp);

	if(t->type->type == _INT && targetcode == _DOUBLE){
		t->loc = temp->loc;
		t->type = temp->type;
		emit(inttodbl,temp->loc->name,t->loc->name);
		return temp;
	}
	
	if(t->loc->type->type == _CHAR && targetcode == _DOUBLE){
		t->loc = temp->loc;
		emit(chartodbl,temp->loc->name,t->loc->name);
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _DOUBLE && targetcode == _INT){
		t->loc = temp->loc;
		t->type = temp->type;
		emit(dbltoint,temp->loc->name,t->loc->name);
		return temp;
	}
	if(t->loc->type->type == _CHAR && targetcode == _INT){
		emit(chartoint,temp->loc->name,t->loc->name);
		t->loc = temp->loc;
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _DOUBLE && targetcode == _CHAR){
		t->loc = temp->loc;
		emit(dbltochar,temp->loc->name,t->loc->name);
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _INT && targetcode == _CHAR){
		t->loc = temp->loc;
		emit(intTochar,temp->loc->name,t->loc->name);
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _BOOL && targetcode == _INT){
		backpatch(t->truelist,quadPointer);
		backpatch(t->falselist,quadPointer);
		cout<<"Exe"<<endl;
		t->type = temp->type;
		updateSymbol(t->loc,temp->type);
		return temp;
	}
	return 0;
}

void conv2bool(Expression *e)
{
	if(((e->loc)->type)->type!=_BOOL){
		e->truelist = makelist(quadPointer);//the truelist
		e->falselist = makelist(quadPointer+1);//the falselist
		emit(_if,"---",(e->loc)->name,"0");
		emit(_goto,"---");
	}
}

Expression* relationEvaluate(opCode op,Expression *e1,Expression *e2)
{
	list<int>* L2 = new list<int>(1,quadPointer+1);
	list<int>* L1 = new list<int>(1,quadPointer);
	emit(op,"---",e1->loc->name,e2->loc->name);
	emit(_goto,"---");
	Expression *e = new Expression;
	backpatch(L1,quadPointer);
	e->type = createType(_BOOL);
	e->loc = symTab->gentemp();
	updateSymbol(e->loc,e->type);
	emit(COPY,e->loc->name,"1");
	e->truelist = makelist(quadPointer);
	emit(_goto,"---");
	backpatch(L2,quadPointer);
	emit(COPY,e->loc->name,"0");
	e->falselist = makelist(quadPointer);
	emit(_goto,"---");
	return e;
}

string to_string(int x)
{
	char str[15];
	sprintf(str, "%d", x);
	string s(str);
	return s;
}
string to_string(double x)
{
	char str[15];
	sprintf(str, "%lf", x);
	string s(str);
	return s;
}
string to_string(char x)
{
	char str[5];
	sprintf(str, "%c", x);
	string s(str);
	return s;
}
string to_string(string x)
{
	return x;
}


void reverse(Type** head_ref)
{
    struct Type* prev   = NULL;
    struct Type* next;
    struct Type* current = *head_ref;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
}


