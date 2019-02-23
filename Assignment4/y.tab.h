/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    ENUM = 259,
    RESTRICT = 260,
    UNSIGNED = 261,
    BREAK = 262,
    EXTERN = 263,
    RETURN = 264,
    VOID = 265,
    CASE = 266,
    FLOAT = 267,
    SHORT = 268,
    VOLATILE = 269,
    CHAR = 270,
    FOR = 271,
    SIGNED = 272,
    WHILE = 273,
    CONST = 274,
    GOTO = 275,
    SIZEOF = 276,
    _BOOL = 277,
    CONTINUE = 278,
    IF = 279,
    STATIC = 280,
    _COMPLEX = 281,
    DEFAULT = 282,
    INLINE = 283,
    STRUCT = 284,
    _IMAGINARY = 285,
    DO = 286,
    INT = 287,
    SWITCH = 288,
    DOUBLE = 289,
    LONG = 290,
    TYPEDEF = 291,
    ELSE = 292,
    REGISTER = 293,
    UNION = 294,
    SINGLE_LINE_COMMENT = 295,
    MULTI_LINE_COMMENT = 296,
    DIGIT = 297,
    IDENTIFIER_NONDIGIT = 298,
    IDENTIFIER = 299,
    NONZERO_DIGIT = 300,
    NONZERO_INTEGER_CONSTANT = 301,
    INTEGER_CONSTANT = 302,
    CONSTANT = 303,
    DIGIT_SEQUENCE = 304,
    SIGN = 305,
    EXPONENT_PART = 306,
    FRACTIONAL_CONSTANT = 307,
    FLOATING_CONSTANT = 308,
    ENUMERATION_CONSTANT = 309,
    ESCAPE_SEQUENCE = 310,
    C_CHAR = 311,
    C_CHAR_SEQUENCE = 312,
    CHARACTER_CONSTANT = 313,
    S_CHAR = 314,
    S_CHAR_SEQUENCE = 315,
    STRING_LITERAL = 316,
    SQUARE_BRACKET_OPEN = 317,
    SQUARE_BRACKET_CLOSE = 318,
    ROUND_BRACKET_OPEN = 319,
    ROUND_BRACKET_CLOSE = 320,
    CURLY_BRACKET_OPEN = 321,
    CURLY_BRACKET_CLOSE = 322,
    DOT = 323,
    ACC = 324,
    INC = 325,
    DEC = 326,
    AMP = 327,
    MUL = 328,
    ADD = 329,
    SUB = 330,
    NEG = 331,
    EXCLAIM = 332,
    DIV = 333,
    MODULO = 334,
    SHL = 335,
    SHR = 336,
    BITSHL = 337,
    BITSHR = 338,
    LTE = 339,
    GTE = 340,
    EQ = 341,
    NEQ = 342,
    AND = 343,
    OR = 344,
    QUESTION = 345,
    COLON = 346,
    SEMICOLON = 347,
    DOTS = 348,
    ASSIGN = 349,
    STAREQ = 350,
    DIVEQ = 351,
    MODEQ = 352,
    PLUSEQ = 353,
    MINUSEQ = 354,
    SHLEQ = 355,
    SHREQ = 356,
    BINANDEQ = 357,
    BINXOREQ = 358,
    BINOREQ = 359,
    COMMA = 360,
    HASH = 361,
    BITXOR = 362,
    BITOR = 363,
    THEN = 364
  };
#endif
/* Tokens.  */
#define AUTO 258
#define ENUM 259
#define RESTRICT 260
#define UNSIGNED 261
#define BREAK 262
#define EXTERN 263
#define RETURN 264
#define VOID 265
#define CASE 266
#define FLOAT 267
#define SHORT 268
#define VOLATILE 269
#define CHAR 270
#define FOR 271
#define SIGNED 272
#define WHILE 273
#define CONST 274
#define GOTO 275
#define SIZEOF 276
#define _BOOL 277
#define CONTINUE 278
#define IF 279
#define STATIC 280
#define _COMPLEX 281
#define DEFAULT 282
#define INLINE 283
#define STRUCT 284
#define _IMAGINARY 285
#define DO 286
#define INT 287
#define SWITCH 288
#define DOUBLE 289
#define LONG 290
#define TYPEDEF 291
#define ELSE 292
#define REGISTER 293
#define UNION 294
#define SINGLE_LINE_COMMENT 295
#define MULTI_LINE_COMMENT 296
#define DIGIT 297
#define IDENTIFIER_NONDIGIT 298
#define IDENTIFIER 299
#define NONZERO_DIGIT 300
#define NONZERO_INTEGER_CONSTANT 301
#define INTEGER_CONSTANT 302
#define CONSTANT 303
#define DIGIT_SEQUENCE 304
#define SIGN 305
#define EXPONENT_PART 306
#define FRACTIONAL_CONSTANT 307
#define FLOATING_CONSTANT 308
#define ENUMERATION_CONSTANT 309
#define ESCAPE_SEQUENCE 310
#define C_CHAR 311
#define C_CHAR_SEQUENCE 312
#define CHARACTER_CONSTANT 313
#define S_CHAR 314
#define S_CHAR_SEQUENCE 315
#define STRING_LITERAL 316
#define SQUARE_BRACKET_OPEN 317
#define SQUARE_BRACKET_CLOSE 318
#define ROUND_BRACKET_OPEN 319
#define ROUND_BRACKET_CLOSE 320
#define CURLY_BRACKET_OPEN 321
#define CURLY_BRACKET_CLOSE 322
#define DOT 323
#define ACC 324
#define INC 325
#define DEC 326
#define AMP 327
#define MUL 328
#define ADD 329
#define SUB 330
#define NEG 331
#define EXCLAIM 332
#define DIV 333
#define MODULO 334
#define SHL 335
#define SHR 336
#define BITSHL 337
#define BITSHR 338
#define LTE 339
#define GTE 340
#define EQ 341
#define NEQ 342
#define AND 343
#define OR 344
#define QUESTION 345
#define COLON 346
#define SEMICOLON 347
#define DOTS 348
#define ASSIGN 349
#define STAREQ 350
#define DIVEQ 351
#define MODEQ 352
#define PLUSEQ 353
#define MINUSEQ 354
#define SHLEQ 355
#define SHREQ 356
#define BINANDEQ 357
#define BINXOREQ 358
#define BINOREQ 359
#define COMMA 360
#define HASH 361
#define BITXOR 362
#define BITOR 363
#define THEN 364

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "ass4_16CS30023.y" /* yacc.c:1909  */

  int intval;
  float floatval;
  char *charval;

#line 278 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
