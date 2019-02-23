
#include <iostream>
#include <string>
#include <list>
#include <vector>

#define MAX_SYMBOLS 1000  
#define MAX_QUADS 10000 

using namespace std; 

enum type_enum
{
	_VOID = 0,
	_CHAR,
	_INT,
	_DOUBLE,
	_BOOL,
	_ARRAY,
	_POINTER,
	_FUNCTION
};




 struct Type
{
	type_enum type;
	int width;	
	struct Type *next;
	int count; 
};



 enum opCode
{
	PLUS, 
	MINUS,
	MULT,
	DIVIDE,
	MODULUS,
	LOGICAL_AND,
	LOGICAL_OR,
	LESS_THAN,
	GREATER_THAN,
	LESS_THAN_EQUAL,
	GREATER_THAN_EQUAL,
	EQUAL_TO,
	NOT_EQUAL_TO,
	LEFT_SHIFT,
	RIGHT_SHIFT,
	UMINUS,
	UPLUS,
	UPOINTER,
	UADDRESS,
	UNEGATION,
	UBITNEGATION,
	BIT_AND,
	BIT_XOR,
	BIT_OR,
	COPY,
	ARRAYRIGHT,
	ARRAYLEFT,
	_goto,
	_if,
	PARAM,
	CALL,
	_RETURN,
	inttobool,
	inttodbl,
	chartodbl,
	dbltoint,
	chartoint,
	dbltochar,
	intTochar,
	ENDPROGRAM, 
	FUNCTION_OP
};



 struct Symbol
{
	string tableName;
	string name; 
	Type* type; 
	string init_value; 
	int 	size;
	int 	offset; 
	class symbolTable* symTabPointer; 
};





class Quad
{
	public:
	opCode op; 
	string arg1;
	string arg2;
	string result;

	public:
	Quad(){}
	void print(); 
	void update(string);
};

Type* createType(type_enum); 

 struct Expression
{
	Symbol* loc; 
	Type* type; 
	list<int>* truelist; 
	list<int>* falselist; 
	list<int>* nextlist; 
	int array_oc; 
	int int_val;  
	double double_val;
	string char_val;
	int isPointer;
	
	Expression()
	{
		loc = 0;
		type = createType(_VOID);
		truelist = 0;
		falselist = 0;
		nextlist = 0;
		array_oc = 0;
		isPointer = 0;
	}
};


class symbolTable
{
     public:
	 std::vector<Symbol*> symbols; 
	 int tempcount; 
	 int param; 
	 symbolTable* parent;
	 
	
	symbolTable(); 
	

	
	Symbol*  lookup(string name); 
	
	Symbol* gentemp(); 

	
	void update(); 

	void print();
};


 struct opPointer
{
	opCode op;
};

 struct funcPointer
{
	symbolTable* symTabP;
	funcPointer()
	{
		symTabP=0;
	}
};


 struct arg_list
{
	list<Expression*> *args;
	int number;
	arg_list(){
		args=0;
		number=0;
	}
};

list<Expression*>* makelistArgs(Expression *i);
list<Expression*>* mergeArgs(list<Expression*>* L1, list<Expression*>* L2);


list<int>* makelist(int i); 

list<int>* merge(list<int>* l1,list<int>* l2); 

void backpatch(list<int>* l1, int i); 

void typecheck(Expression* expr1, Expression* expr2);

void conv2bool(Expression *e); 


Expression* relationEvaluate(opCode op,Expression *e1,Expression *e2);


Expression* convert(Expression *t, type_enum targetcode);



string to_string(int x);
string to_string(double x);
string to_string(char x);
string to_string(string x);


void reverse(Type** head_ref);

string printArrayType(Type *t);  
string printPointerType(Type *t);



Quad* createQuad(opCode op,string s,string s2);
Quad* createQuad(opCode op,string s,string s1,string s2);
Quad* createQuad(opCode op,string s);


void emit(opCode,string,string,string); 
void emit(opCode,string,string);
void emit(opCode,string);


void updateSymbol(Symbol* s,Type* t);
void updateSymbolInitVal(Symbol *s,string val); 
Symbol* createSymbol(string s); 




int getTypeSize(type_enum t); 

string getTypeID(type_enum); 

Type* getBaseType(Type *t); 


