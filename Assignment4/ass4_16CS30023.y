%{
#include <stdio.h>
extern int yylex();
void yyerror(char *s);
%}


%union {
  int intval;
  float floatval;
  char *charval;
} 

%token AUTO 							
%token ENUM 							
%token RESTRICT 						
%token UNSIGNED 						
%token BREAK 							
%token EXTERN 							
%token RETURN 							
%token VOID 							
%token CASE 							
%token FLOAT 							
%token SHORT 							
%token VOLATILE 						
%token CHAR 							
%token FOR 							
%token SIGNED 							
%token WHILE 							
%token CONST 							
%token GOTO 							
%token SIZEOF 							
%token _BOOL 							
%token CONTINUE 						
%token IF 								
%token STATIC 							
%token _COMPLEX						
%token DEFAULT 						
%token INLINE 							
%token STRUCT 							
%token _IMAGINARY 						
%token DO 								
%token INT 							
%token SWITCH 							
%token DOUBLE 							
%token LONG 						
%token TYPEDEF 					
%token ELSE 							
%token REGISTER 						
%token UNION 		

%token SINGLE_LINE_COMMENT
%token MULTI_LINE_COMMENT					

%token DIGIT						    
%token IDENTIFIER_NONDIGIT 		    
%token IDENTIFIER 					    

%token NONZERO_DIGIT				    
%token NONZERO_INTEGER_CONSTANT	    
%token <intval>INTEGER_CONSTANT			    
%token CONSTANT                        

%token DIGIT_SEQUENCE				    
%token SIGN 						    
%token EXPONENT_PART				    
%token FRACTIONAL_CONSTANT			    
%token <floatval>FLOATING_CONSTANT               

%token ENUMERATION_CONSTANT            

%token ESCAPE_SEQUENCE				    
%token C_CHAR 						    
%token C_CHAR_SEQUENCE				    
%token <charval>CHARACTER_CONSTANT              

%token S_CHAR  					    
%token S_CHAR_SEQUENCE				    
%token <charval>STRING_LITERAL                  


%token SQUARE_BRACKET_OPEN                         
%token SQUARE_BRACKET_CLOSE                        
%token ROUND_BRACKET_OPEN                         
%token ROUND_BRACKET_CLOSE                        
%token CURLY_BRACKET_OPEN                        
%token CURLY_BRACKET_CLOSE                       
%token DOT                               
%token ACC                                

%token INC                                
%token DEC                               
%token AMP                               
%token MUL                               
%token ADD                               
%token SUB                               
%token NEG                               
%token EXCLAIM                           

%token DIV                               
%token MODULO                            
%token SHL                               
%token SHR                             
%token BITSHL                          
%token BITSHR                          
%token LTE                                
%token GTE                                
%token EQ                                 
%token NEQ                                
%token AND                                
%token OR                                 

%token QUESTION                          
%token COLON                              
%token SEMICOLON                          
%token DOTS                                
%token ASSIGN                            
%token STAREQ                             
%token DIVEQ                             
%token MODEQ                             
%token PLUSEQ                             
%token MINUSEQ                           
%token SHLEQ                             
%token SHREQ                             
%token BINANDEQ                          
%token BINXOREQ                          
%token BINOREQ                            
%token COMMA                              
%token HASH        

%token BITXOR

%token BITOR

%start translation_unit

%right THEN ELSE
%%

primary_expression
	: IDENTIFIER
	| constant
	| STRING_LITERAL
	| ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE
;

argument_expression_list_opt
	:argument_expression_list
	|
	;

argument_expression_list
	:assignment_expression
	|argument_expression_list COMMA assignment_expression
	;

unary_operator
	:AMP
	|MUL
	|ADD
	|SUB
	|NEG
	|EXCLAIM
	;

multiplicative_expression
	:cast_expression
	|multiplicative_expression MUL cast_expression
	|multiplicative_expression DIV cast_expression
	|multiplicative_expression MODULO cast_expression
	;

shift_expression  
	:additive_expression
	|shift_expression SHL additive_expression
	|shift_expression SHR additive_expression
	;

equality_expression 
	:relational_expression
	|equality_expression EQ relational_expression
	|equality_expression NEQ relational_expression
	;

exclusive_OR_expression
	:AND_expression
	|exclusive_OR_expression BITXOR AND_expression
	;

logical_AND_expression
	:inclusive_OR_expression
	|logical_AND_expression AND inclusive_OR_expression
	;

conditional_expression
	:logical_OR_expression
	|logical_OR_expression QUESTION expression COLON conditional_expression
	;

assignment_operator 
	:ASSIGN
	|STAREQ
	|DIVEQ
	|MODEQ
	|PLUSEQ
	|MINUSEQ
	|SHLEQ
	|SHREQ
	|BINANDEQ
	|BINXOREQ
	|BINOREQ
	;

constant_expression
	:conditional_expression
	;

init_declarator_list_opt
	:init_declarator_list
	|;

declaration_specifiers
	:storage_class_specifier declaration_specifiers_opt
	|type_specifier declaration_specifiers_opt
	|type_qualifier declaration_specifiers_opt
	|function_specifier declaration_specifiers_opt
	;

init_declarator
	:declarator
	|declarator ASSIGN initializer
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| _BOOL
	| _COMPLEX
	| _IMAGINARY
	| enum_specifier
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list_opt
	| type_qualifier specifier_qualifier_list_opt
	;

enum_specifier
	:ENUM identifier_opt CURLY_BRACKET_OPEN enumerator_list CURLY_BRACKET_CLOSE
	|ENUM identifier_opt CURLY_BRACKET_OPEN enumerator_list COMMA CURLY_BRACKET_CLOSE
	|ENUM IDENTIFIER
	;

enumerator
	:IDENTIFIER
	|IDENTIFIER ASSIGN constant_expression
	;

function_specifier
	:INLINE
	;

declarator
	:pointer_opt direct_declarator
	;

assignment_expression_opt
	:assignment_expression
	|
	;

pointer
	:MUL type_qualifier_list_opt
	|MUL type_qualifier_list_opt pointer
	;

parameter_type_list
	:parameter_list
	|parameter_list COMMA DOTS
	;

parameter_declaration
	:declaration_specifiers declarator
	|declaration_specifiers
	;


type_name
	:specifier_qualifier_list
	;

designation_opt  
	:designation
	|
	;

designation
	:designator_list ASSIGN
	;

designator
	:SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE
	|DOT IDENTIFIER
	;

labeled_statement
	:IDENTIFIER COLON statement
	|CASE constant_expression COLON statement
	|DEFAULT COLON statement
	;

compound_statement
	:CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE
	;

block_item
	:declaration
	|statement
	;

expression_statement
	:expression_opt SEMICOLON
	;

selection_statement
	:selection_statement_base 
	|selection_statement_base ELSE statement
	|SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement
	;

jump_statement  
	:GOTO IDENTIFIER SEMICOLON
	|CONTINUE SEMICOLON
	|BREAK SEMICOLON
	|RETURN expression_opt SEMICOLON
	;

external_declaration 
	:function_definition
	|declaration
	;

function_definition
	:declaration_specifiers declarator declaration_list_opt compound_statement
	;

declaration_list
	:declaration
	|declaration_list declaration
	;

declaration_list_opt
	:declaration_list
	|
	;

translation_unit
	:external_declaration
	|translation_unit external_declaration
	;

iteration_statement
	:WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement
	|DO statement WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON
	|FOR ROUND_BRACKET_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement
	|FOR ROUND_BRACKET_OPEN declaration expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement
	;

selection_statement_base
	:IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement
	;

expression_opt
	:expression
	|
	;

block_item_list
	:block_item
	|block_item_list block_item
	;

block_item_list_opt
	:block_item_list
	|
	;

statement
	:labeled_statement
	|compound_statement
	|expression_statement
	|selection_statement
	|iteration_statement
	|jump_statement
	;

designator_list
	:designator
	|designator_list designator
	;

initializer_list
	:designation_opt initializer
	|initializer_list COMMA designation_opt initializer
	;

initializer
	:assignment_expression
	|CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE
	|CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE
	;

identifier_list
	:IDENTIFIER
	|identifier_list COMMA IDENTIFIER
	;

parameter_list
	:parameter_declaration
	|parameter_list COMMA parameter_declaration
	;

type_qualifier_list
	:type_qualifier
	|type_qualifier_list type_qualifier
	;

direct_declarator
	:IDENTIFIER
	|ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE
	|direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt assignment_expression_opt SQUARE_BRACKET_CLOSE
	| direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE
	| direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt MUL SQUARE_BRACKET_CLOSE
	| direct_declarator ROUND_BRACKET_OPEN parameter_type_list ROUND_BRACKET_CLOSE
	| direct_declarator ROUND_BRACKET_OPEN identifier_list ROUND_BRACKET_CLOSE
	| direct_declarator ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE
	;

type_qualifier_list_opt
	:type_qualifier_list
	|
	;

pointer_opt 
	:pointer
	|
	;

type_qualifier
	:CONST
	|RESTRICT
	|VOLATILE
	;

enumerator_list
	:enumerator
	|enumerator_list COMMA enumerator
	;

identifier_opt
	:IDENTIFIER
	|
	;

specifier_qualifier_list_opt
	:specifier_qualifier_list
	|
	;

storage_class_specifier
	: EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

init_declarator_list
	:init_declarator
	|init_declarator_list COMMA init_declarator
	;

declaration_specifiers_opt
	:declaration_specifiers
	|
	;

declaration
	:declaration_specifiers init_declarator_list_opt SEMICOLON
	;

expression
	:assignment_expression
	|expression COMMA assignment_expression
	;

assignment_expression
	:conditional_expression
	|unary_expression assignment_operator assignment_expression
	;

logical_OR_expression
	:logical_AND_expression
	|logical_OR_expression OR logical_AND_expression
	;

inclusive_OR_expression
	:exclusive_OR_expression
	|inclusive_OR_expression BITOR exclusive_OR_expression
	;

AND_expression
	:equality_expression
	|AND_expression AMP equality_expression
	;

relational_expression
	:shift_expression
	|relational_expression BITSHL shift_expression
	|relational_expression BITSHR shift_expression
	|relational_expression LTE shift_expression
	|relational_expression GTE shift_expression
	;

additive_expression
	:multiplicative_expression
	|additive_expression ADD multiplicative_expression
	|additive_expression SUB multiplicative_expression
	;

cast_expression
	:unary_expression
	|ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression
	;

unary_expression
	:postfix_expression
	|INC unary_expression
	|DEC unary_expression
	|unary_operator cast_expression
	|SIZEOF unary_expression
	|SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE
	;

postfix_expression
	:primary_expression
	|postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE
	|postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE
	|postfix_expression DOT IDENTIFIER
	|postfix_expression ACC IDENTIFIER
	|postfix_expression INC
	|postfix_expression DEC
	|ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE
	|ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE
	;

constant
	:INTEGER_CONSTANT
	|FLOATING_CONSTANT
	|ENUMERATION_CONSTANT
	|CHARACTER_CONSTANT
	;


%%
void yyerror(char *s) {
    printf("%s\n",s);
}
