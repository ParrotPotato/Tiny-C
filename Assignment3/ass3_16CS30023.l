%{

#define SINGLE_LINE_COMMENT             50
#define MULTI_LINE_COMMENT			    51
#define COMMENT                         52

#define AUTO 							53
#define ENUM 							54
#define RESTRICT 						55
#define UNSIGNED 						56
#define BREAK 							57
#define EXTERN 							58
#define RETURN 							59
#define VOID 							60
#define CASE 							61
#define FLOAT 							62
#define SHORT 							63
#define VOLATILE 						64
#define CHAR 							65
#define FOR 							66
#define SIGNED 							67
#define WHILE 							68
#define CONST 							69
#define GOTO 							70
#define SIZEOF 							71
#define _BOOL 							72
#define CONTINUE 						73
#define IF 								74
#define STATIC 							75
#define _COMPLEX						76
#define DEFAULT 						77
#define INLINE 							78
#define STRUCT 							79
#define _IMAGINARY 						80
#define DO 								81
#define INT 							82
#define SWITCH 							83
#define DOUBLE 							84
#define LONG 							85
#define TYPEDEF 						86
#define ELSE 							87
#define REGISTER 						88
#define UNION 							89

#define DIGIT						    90
#define IDENTIFIER_NONDIGIT 		    91
#define IDENTIFIER 					    92

#define NONZERO_DIGIT				    93
#define NONZERO_INTEGER_CONSTANT	    94
#define INTEGER_CONSTANT			    95
#define CONSTANT                        96

#define DIGIT_SEQUENCE				    97
#define SIGN 						    98
#define EXPONENT_PART				    99
#define FRACTIONAL_CONSTANT			    100
#define FLOATING_CONSTANT               101

#define ENUMERATION_CONSTANT            102

#define ESCAPE_SEQUENCE				    103
#define C_CHAR 						    104
#define C_CHAR_SEQUENCE				    105
#define CHARACTER_CONSTANT              106

#define S_CHAR  					    107
#define S_CHAR_SEQUENCE				    108
#define STRING_LITERAL                  109


#define SQUARE_BRACKET_OPEN                       110  
#define SQUARE_BRACKET_CLOSE                      111  
#define ROUND_BRACKET_OPEN                       112  
#define ROUND_BRACKET_CLOSE                      113  
#define CURLY_BRACKET_OPEN                      114  
#define CURLY_BRACKET_CLOSE                     115  
#define DOT                             116  
#define ACC                             117   

#define INC                             118   
#define DEC                             119  
#define AMP                             120  
#define MUL                             121  
#define ADD                             122  
#define SUB                             123  
#define NEG                             124  
#define EXCLAIM                         125  

#define DIV                             126  
#define MODULO                          127  
#define SHL                             128  
#define SHR                             129
#define BITSHL                          130
#define BITSHR                          131
#define LTE                             132   
#define GTE                             133   
#define EQ                              134   
#define NEQ                             135   
#define AND                             136   
#define OR                              137   

#define QUESTION                        138  
#define COLON                           139   
#define SEMICOLON                       140   
#define DOTS                            141    
#define ASSIGN                          142  
#define STAREQ                          143   
#define DIVEQ                           144  
#define MODEQ                           145  
#define PLUSEQ                          146   
#define MINUSEQ                         147  
#define SHLEQ                           148  
#define SHREQ                           149  
#define BINANDEQ                        150  
#define BINXOREQ                        151  
#define BINOREQ                         152   
#define COMMA                           153   
#define HASH                            154   


%}

SINGLE_LINE_COMMENT			            "//"[^("\n")]*
MULTI_LINE_COMMENT			            "/*"[^"*"]*"*"("*"|([^"/*"]*[^"*"]*"*"))*"/"
COMMENT                                 {SINGLE_LINE_COMMENT}|{MULTI_LINE_COMMENT}

AUTO 							        "auto"
ENUM 							        "enum"
RESTRICT 						        "restrict"
UNSIGNED 						        "unsigned"
BREAK 							        "break"
EXTERN 							        "extern"
RETURN 							        "return"
VOID 							        "void"
CASE 							        "case"
FLOAT 							        "float"
SHORT 							        "short"
VOLATILE 						        "volatile"
CHAR 							        "char"
FOR 							        "for"
SIGNED 							        "signed"
WHILE 							        "while"
CONST 							        "const"
GOTO 							        "goto"
SIZEOF 							        "sizeof"
_BOOL 							        "_Bool"
CONTINUE 						        "continue"
IF 								        "if"
STATIC 							        "static"
_COMPLEX						        "_Complex"
DEFAULT 						        "default"
INLINE 							        "inline"
STRUCT 							        "struct"
_IMAGINARY 						        "_Imaginary"
DO 								        "do"
INT 							        "int"
SWITCH 							        "switch"
DOUBLE 							        "double"
LONG 							        "long"
TYPEDEF 						        "typedef"
ELSE 							        "else"
REGISTER 						        "register"
UNION 							        "union"

DIGIT						            [0-9]
IDENTIFIER_NONDIGIT 		            [a-zA-Z]|"_"
IDENTIFIER 					            {IDENTIFIER_NONDIGIT}({IDENTIFIER_NONDIGIT}|{DIGIT})*

NONZERO_DIGIT				            [1-9]
NONZERO_INTEGER_CONSTANT	            {NONZERO_DIGIT}({NONZERO_DIGIT}|{DIGIT})*
INTEGER_CONSTANT			            {NONZERO_INTEGER_CONSTANT}|"0"
CONSTANT                                {INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ENUMERATION_CONSTANT}|{CHARACTER_CONSTANT}

DIGIT_SEQUENCE				            [0-9]{DIGIT}*
SIGN 						            "+"|"-"
EXPONENT_PART				            ("e"{SIGN}?{DIGIT_SEQUENCE})|("E"{SIGN}?{DIGIT_SEQUENCE})
FRACTIONAL_CONSTANT			            ({DIGIT_SEQUENCE}?"."{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}".")
FLOATING_CONSTANT                       ({FRACTIONAL_CONSTANT}{EXPONENT_PART}?)|({DIGIT_SEQUENCE}{EXPONENT_PART})

ENUMERATION_CONSTANT                    {IDENTIFIER}

ESCAPE_SEQUENCE				            "\'"|"\""|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"
C_CHAR 						            {ESCAPE_SEQUENCE}|[^("\'"|"\\"|"\n")]
C_CHAR_SEQUENCE				            {C_CHAR}+
CHARACTER_CONSTANT                      "\'"{C_CHAR_SEQUENCE}"\'"

S_CHAR  					            {ESCAPE_SEQUENCE}|[^("\""|"\\"|"\n")]
S_CHAR_SEQUENCE				            {S_CHAR}+
STRING_LITERAL                          "\""{S_CHAR_SEQUENCE}?"\""


SQUARE_BRACKET_OPEN                               "["   
SQUARE_BRACKET_CLOSE                              "]"   
CURLY_BRACKET_OPEN                              "{"   
CURLY_BRACKET_CLOSE                             "}"   
ROUND_BRACKET_OPEN                               "("   
ROUND_BRACKET_CLOSE                              ")"   
DOT                                     "."   
ACC                                     "->"   
DOTS                                    "..."   

INC                                     "++"   
DEC                                     "--"   
SHL                                     "<<"   
SHR                                     ">>"   
LTE                                     "<="   
GTE                                     ">="   
EQ                                      "=="   
DIVEQ                                   "/="   
MODEQ                                   "%="   
PLUSEQ                                  "+="   
MINUSEQ                                 "-="   
NEQ                                     "!="   
AND                                     "&&"   
OR                                      "||"   
STAREQ                                  "*="   
SHLEQ                                   "<<="   
SHREQ                                   ">>="   
BINANDEQ                                "&="   
BINXOREQ                                "^="   
BINOREQ                                 "|="   
AMP                                     "&"   
MUL                                     "*"   
ADD                                     "+"   
SUB                                     "-"   
NEG                                     "~"   
EXCLAIM                                 "!"   

DIV                                     "/"   
MODULO                                  "%"   
ASSIGN                                  "="   
BITSHL                                  "<"   
BITSHR                                  ">"   

QUESTION                                "?"   
COLON                                   ":"   
SEMICOLON                               ";"   
COMMA                                   ","   
HASH                                    "#"

WHILE_SPACE                             "\n"|" "|"\t"


%%
{SINGLE_LINE_COMMENT}                   {return SINGLE_LINE_COMMENT; }
{MULTI_LINE_COMMENT}                    {return MULTI_LINE_COMMENT; }

{AUTO}			                        { return AUTO; }
{ENUM}			                        { return ENUM; }
{RESTRICT}		                        { return RESTRICT; } 
{UNSIGNED}		                        { return UNSIGNED; }
{BREAK}			                        { return BREAK; }
{EXTERN}			                    { return EXTERN; }
{RETURN}			                    { return RETURN; }
{VOID}			                        { return VOID; }
{CASE}			                        { return CASE; }
{FLOAT}			                        { return FLOAT; }
{SHORT}			                        { return SHORT; }
{VOLATILE}		                        { return VOLATILE; }
{CHAR}		  	                        { return CHAR; }
{FOR}			                        { return FOR; }
{SIGNED}		                        { return SIGNED; }
{WHILE}			                        { return WHILE; }
{CONST}			                        { return CONST; }
{GOTO}			                        { return GOTO; }
{SIZEOF}			                    { return SIZEOF; }
{_BOOL}			                        { return _BOOL; }
{CONTINUE}		                        { return CONTINUE; }
{IF}				                    { return IF; }
{STATIC}			                    { return STATIC; }
{_COMPLEX}		                        { return _COMPLEX; }
{DEFAULT}                               { return DEFAULT; }
{INLINE}		                        { return INLINE; }
{STRUCT}		                        { return STRUCT; }
{_IMAGINARY}		                    { return _IMAGINARY; }
{DO}			                        { return DO; }
{INT}			                        { return INT; }
{SWITCH}		                        { return SWITCH; }
{DOUBLE}		                        { return DOUBLE; }
{LONG}			                        { return LONG; }
{TYPEDEF}			                    { return TYPEDEF; }
{ELSE}			                        { return ELSE; }
{REGISTER}		                        { return REGISTER; }
{UNION}                                 { return UNION; }

{IDENTIFIER}	                        { return IDENTIFIER; }
{INTEGER_CONSTANT}	                    { return INTEGER_CONSTANT; }
{FLOATING_CONSTANT}	                    { return FLOATING_CONSTANT; }
{CHARACTER_CONSTANT}                    { return CHARACTER_CONSTANT; }
{STRING_LITERAL}                        { return STRING_LITERAL; }

{SQUARE_BRACKET_OPEN}                             { return SQUARE_BRACKET_OPEN; }
{SQUARE_BRACKET_CLOSE}                            { return SQUARE_BRACKET_CLOSE; }
{ROUND_BRACKET_OPEN}                             { return ROUND_BRACKET_OPEN; }
{ROUND_BRACKET_CLOSE}                            { return ROUND_BRACKET_CLOSE; }
{CURLY_BRACKET_OPEN}                            { return CURLY_BRACKET_OPEN; }
{CURLY_BRACKET_CLOSE}                           { return CURLY_BRACKET_CLOSE; }
{DOT}                                   { return DOT; }
{ACC}                                   { return ACC; }

{INC}                                   { return INC; }
{DEC}                                   { return DEC; }
{AMP}                                   { return AMP; }
{MUL}                                   { return MUL; }
{ADD}                                   { return ADD; }
{SUB}                                   { return SUB; }
{NEG}                                   { return NEG; }
{EXCLAIM}                               { return EXCLAIM; }

{DIV}                                   { return DIV; }
{MODULO}                                { return MODULO; }
{SHL}                                   { return SHL; }
{SHR}                                   { return SHR; }
{BITSHL}                                { return BITSHL; }
{BITSHR}                                { return BITSHR; }
{LTE}                                   { return LTE; }
{GTE}                                   { return GTE; }
{EQ}                                    { return EQ; }
{NEQ}                                   { return NEQ; }
{AND}                                   { return AND; }
{OR}                                    { return OR; }

{QUESTION}                              { return QUESTION; }
{COLON}                                 { return COLON; }
{SEMICOLON}                             { return SEMICOLON; }
{DOTS}                                  { return DOTS; }
{ASSIGN}                                { return ASSIGN; }
{STAREQ}                                { return STAREQ; }
{DIVEQ}                                 { return DIVEQ; }
{MODEQ}                                 { return MODEQ; }
{PLUSEQ}                                { return PLUSEQ; }
{MINUSEQ}                               { return MINUSEQ; }
{SHLEQ}                                 { return SHLEQ; }
{SHREQ}                                 { return SHREQ; }
{BINANDEQ}                              { return BINANDEQ; }
{BINXOREQ}                              { return BINXOREQ; }
{BINOREQ}                               { return BINOREQ; }
{COMMA}                                 { return COMMA; }
{HASH}                                  { return HASH; }
{WHILE_SPACE}                           { }
%%
