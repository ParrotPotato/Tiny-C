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
    _BOOLEAN = 277,
    EAN = 278,
    CONTINUE = 279,
    IF = 280,
    STATIC = 281,
    _COMPLEX = 282,
    DEFAULT = 283,
    INLINE = 284,
    STRUCT = 285,
    _IMAGINARY = 286,
    DO = 287,
    INT = 288,
    SWITCH = 289,
    DOUBLE = 290,
    LONG = 291,
    TYPEDEF = 292,
    ELSE = 293,
    REGISTER = 294,
    UNION = 295,
    SINGLE_LINE_COMMENT = 296,
    MULTI_LINE_COMMENT = 297,
    DIGIT = 298,
    IDENTIFIER_NONDIGIT = 299,
    IDENTIFIER = 300,
    NONZERO_DIGIT = 301,
    NONZERO_INTEGER_CONSTANT = 302,
    INTEGER_CONSTANT = 303,
    CONSTANT = 304,
    DIGIT_SEQUENCE = 305,
    SIGN = 306,
    EXPONENT_PART = 307,
    FRACTIONAL_CONSTANT = 308,
    FLOATING_CONSTANT = 309,
    ENUMERATION_CONSTANT = 310,
    ESCAPE_SEQUENCE = 311,
    C_CHAR = 312,
    C_CHAR_SEQUENCE = 313,
    CHARACTER_CONSTANT = 314,
    S_CHAR = 315,
    S_CHAR_SEQUENCE = 316,
    STRING_LITERAL = 317,
    SQUARE_BRACKET_OPEN = 318,
    SQUARE_BRACKET_CLOSE = 319,
    ROUND_BRACKET_OPEN = 320,
    ROUND_BRACKET_CLOSE = 321,
    CURLY_BRACKET_OPEN = 322,
    CURLY_BRACKET_CLOSE = 323,
    DOT = 324,
    ACC = 325,
    INC = 326,
    DEC = 327,
    AMP = 328,
    MUL = 329,
    ADD = 330,
    SUB = 331,
    NEG = 332,
    EXCLAIM = 333,
    DIV = 334,
    MODULO = 335,
    SHL = 336,
    SHR = 337,
    BITSHL = 338,
    BITSHR = 339,
    LTE = 340,
    GTE = 341,
    EQ = 342,
    NEQ = 343,
    AND = 344,
    OR = 345,
    QUESTION = 346,
    COLON = 347,
    SEMICOLON = 348,
    DOTS = 349,
    ASSIGN = 350,
    STAREQ = 351,
    DIVEQ = 352,
    MODEQ = 353,
    PLUSEQ = 354,
    MINUSEQ = 355,
    SHLEQ = 356,
    SHREQ = 357,
    BINANDEQ = 358,
    BINXOREQ = 359,
    BINOREQ = 360,
    COMMA = 361,
    HASH = 362,
    BITXOR = 363,
    BITOR = 364,
    THEN = 365
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
#define _BOOLEAN 277
#define EAN 278
#define CONTINUE 279
#define IF 280
#define STATIC 281
#define _COMPLEX 282
#define DEFAULT 283
#define INLINE 284
#define STRUCT 285
#define _IMAGINARY 286
#define DO 287
#define INT 288
#define SWITCH 289
#define DOUBLE 290
#define LONG 291
#define TYPEDEF 292
#define ELSE 293
#define REGISTER 294
#define UNION 295
#define SINGLE_LINE_COMMENT 296
#define MULTI_LINE_COMMENT 297
#define DIGIT 298
#define IDENTIFIER_NONDIGIT 299
#define IDENTIFIER 300
#define NONZERO_DIGIT 301
#define NONZERO_INTEGER_CONSTANT 302
#define INTEGER_CONSTANT 303
#define CONSTANT 304
#define DIGIT_SEQUENCE 305
#define SIGN 306
#define EXPONENT_PART 307
#define FRACTIONAL_CONSTANT 308
#define FLOATING_CONSTANT 309
#define ENUMERATION_CONSTANT 310
#define ESCAPE_SEQUENCE 311
#define C_CHAR 312
#define C_CHAR_SEQUENCE 313
#define CHARACTER_CONSTANT 314
#define S_CHAR 315
#define S_CHAR_SEQUENCE 316
#define STRING_LITERAL 317
#define SQUARE_BRACKET_OPEN 318
#define SQUARE_BRACKET_CLOSE 319
#define ROUND_BRACKET_OPEN 320
#define ROUND_BRACKET_CLOSE 321
#define CURLY_BRACKET_OPEN 322
#define CURLY_BRACKET_CLOSE 323
#define DOT 324
#define ACC 325
#define INC 326
#define DEC 327
#define AMP 328
#define MUL 329
#define ADD 330
#define SUB 331
#define NEG 332
#define EXCLAIM 333
#define DIV 334
#define MODULO 335
#define SHL 336
#define SHR 337
#define BITSHL 338
#define BITSHR 339
#define LTE 340
#define GTE 341
#define EQ 342
#define NEQ 343
#define AND 344
#define OR 345
#define QUESTION 346
#define COLON 347
#define SEMICOLON 348
#define DOTS 349
#define ASSIGN 350
#define STAREQ 351
#define DIVEQ 352
#define MODEQ 353
#define PLUSEQ 354
#define MINUSEQ 355
#define SHLEQ 356
#define SHREQ 357
#define BINANDEQ 358
#define BINXOREQ 359
#define BINOREQ 360
#define COMMA 361
#define HASH 362
#define BITXOR 363
#define BITOR 364
#define THEN 365

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "ass5_16CS30023.y" /* yacc.c:1909  */

  int intval;
  float floatval;
  char *charval;

#line 280 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
