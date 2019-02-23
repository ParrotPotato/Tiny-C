/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass5_16CS30023.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex();
void yyerror(char *s);

#line 72 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 8 "ass5_16CS30023.y" /* yacc.c:355  */

  int intval;
  float floatval;
  char *charval;

#line 338 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 355 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1007

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  337

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   142,   143,   144,   148,   149,   153,   154,
     158,   159,   160,   161,   162,   163,   167,   168,   169,   170,
     174,   175,   176,   180,   181,   182,   186,   187,   191,   192,
     196,   197,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   215,   219,   220,   223,   224,   225,   226,
     230,   231,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   251,   252,   256,   257,   258,
     262,   263,   267,   271,   275,   276,   280,   281,   285,   286,
     290,   291,   296,   300,   301,   305,   309,   310,   314,   315,
     316,   320,   324,   325,   329,   333,   334,   335,   339,   340,
     341,   342,   346,   347,   351,   355,   356,   360,   361,   365,
     366,   370,   371,   372,   373,   377,   381,   382,   386,   387,
     391,   392,   396,   397,   398,   399,   400,   401,   405,   406,
     410,   411,   415,   416,   417,   421,   422,   426,   427,   431,
     432,   436,   437,   438,   439,   440,   441,   442,   443,   447,
     448,   452,   453,   457,   458,   459,   463,   464,   468,   469,
     473,   474,   478,   479,   480,   481,   485,   486,   490,   491,
     495,   499,   500,   504,   505,   509,   510,   514,   515,   519,
     520,   524,   525,   526,   527,   528,   532,   533,   534,   538,
     539,   543,   544,   545,   546,   547,   548,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   564,   565,   566,   567
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "ENUM", "RESTRICT", "UNSIGNED",
  "BREAK", "EXTERN", "RETURN", "VOID", "CASE", "FLOAT", "SHORT",
  "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE", "CONST", "GOTO", "SIZEOF",
  "_BOOLEAN", "EAN", "CONTINUE", "IF", "STATIC", "_COMPLEX", "DEFAULT",
  "INLINE", "STRUCT", "_IMAGINARY", "DO", "INT", "SWITCH", "DOUBLE",
  "LONG", "TYPEDEF", "ELSE", "REGISTER", "UNION", "SINGLE_LINE_COMMENT",
  "MULTI_LINE_COMMENT", "DIGIT", "IDENTIFIER_NONDIGIT", "IDENTIFIER",
  "NONZERO_DIGIT", "NONZERO_INTEGER_CONSTANT", "INTEGER_CONSTANT",
  "CONSTANT", "DIGIT_SEQUENCE", "SIGN", "EXPONENT_PART",
  "FRACTIONAL_CONSTANT", "FLOATING_CONSTANT", "ENUMERATION_CONSTANT",
  "ESCAPE_SEQUENCE", "C_CHAR", "C_CHAR_SEQUENCE", "CHARACTER_CONSTANT",
  "S_CHAR", "S_CHAR_SEQUENCE", "STRING_LITERAL", "SQUARE_BRACKET_OPEN",
  "SQUARE_BRACKET_CLOSE", "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE",
  "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE", "DOT", "ACC", "INC", "DEC",
  "AMP", "MUL", "ADD", "SUB", "NEG", "EXCLAIM", "DIV", "MODULO", "SHL",
  "SHR", "BITSHL", "BITSHR", "LTE", "GTE", "EQ", "NEQ", "AND", "OR",
  "QUESTION", "COLON", "SEMICOLON", "DOTS", "ASSIGN", "STAREQ", "DIVEQ",
  "MODEQ", "PLUSEQ", "MINUSEQ", "SHLEQ", "SHREQ", "BINANDEQ", "BINXOREQ",
  "BINOREQ", "COMMA", "HASH", "BITXOR", "BITOR", "THEN", "$accept",
  "primary_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_operator",
  "multiplicative_expression", "shift_expression", "equality_expression",
  "exclusive_OR_expression", "logical_AND_expression",
  "conditional_expression", "assignment_operator", "constant_expression",
  "init_declarator_list_opt", "declaration_specifiers", "init_declarator",
  "type_specifier", "specifier_qualifier_list", "enum_specifier",
  "enumerator", "function_specifier", "declarator",
  "assignment_expression_opt", "pointer", "parameter_type_list",
  "parameter_declaration", "type_name", "designation_opt", "designation",
  "designator", "labeled_statement", "compound_statement", "block_item",
  "expression_statement", "selection_statement", "jump_statement",
  "external_declaration", "function_definition", "declaration_list",
  "declaration_list_opt", "translation_unit", "iteration_statement",
  "selection_statement_base", "expression_opt", "block_item_list",
  "block_item_list_opt", "statement", "designator_list",
  "initializer_list", "initializer", "identifier_list", "parameter_list",
  "type_qualifier_list", "direct_declarator", "type_qualifier_list_opt",
  "pointer_opt", "type_qualifier", "enumerator_list", "identifier_opt",
  "specifier_qualifier_list_opt", "storage_class_specifier",
  "init_declarator_list", "declaration_specifiers_opt", "declaration",
  "expression", "assignment_expression", "logical_OR_expression",
  "inclusive_OR_expression", "AND_expression", "relational_expression",
  "additive_expression", "cast_expression", "unary_expression",
  "postfix_expression", "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365
};
# endif

#define YYPACT_NINF -218

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-218)))

#define YYTABLE_NINF -159

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     968,  -218,   -30,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,    -6,   968,  -218,   968,  -218,  -218,   931,   968,
     968,  -218,   -47,   -16,    91,   -66,  -218,   242,  -218,   -26,
     -61,  -218,  -218,  -218,  -218,  -218,  -218,  -218,    -5,    91,
      -4,  -218,  -218,   712,    -6,   968,    11,  -218,  -218,    -4,
      72,    -4,    48,  -218,   -52,  -218,  -218,   133,  -218,  -218,
    -218,  -218,  -218,  -218,   562,    45,   782,   782,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,   817,    32,    16,    51,    37,
      62,  -218,  -218,  -218,    67,    56,    98,   129,    87,  -218,
     224,   156,  -218,    80,  -218,   335,  -218,   113,    76,   710,
    -218,   817,  -218,   -13,   562,  -218,   659,  -218,   116,   659,
     -53,  -218,   817,   139,   712,  -218,  -218,    31,   -42,   562,
    -218,  -218,  -218,  -218,   817,   817,   817,   817,   817,   817,
     817,   817,   817,   817,   817,   817,   817,   817,   817,   817,
     817,   817,   817,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,   817,   817,   817,   148,   149,  -218,
    -218,   104,   817,   817,   134,   137,   171,   130,   159,   138,
     634,   164,   146,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
     193,   147,   411,   173,  -218,  -218,   136,  -218,    91,   852,
    -218,  -218,   -27,   178,  -218,   -49,   143,  -218,  -218,  -218,
    -218,   185,  -218,  -218,   747,  -218,  -218,   817,   175,  -218,
    -218,  -218,  -218,  -218,    73,   187,  -218,  -218,  -218,    87,
      87,   129,   129,    98,    56,    62,   -56,    37,    51,    16,
      16,    16,    16,    32,    32,  -218,   -54,   192,   154,  -218,
    -218,  -218,  -218,   169,   174,   487,   817,   170,  -218,   817,
     634,   247,   817,   634,   634,  -218,  -218,  -218,   817,   206,
     208,  -218,  -218,  -218,  -218,   229,   279,   212,    45,  -218,
    -218,  -218,  -218,   712,   212,   817,  -218,  -218,   817,  -218,
     634,   195,   817,   -31,  -218,   -29,  -218,   215,   -23,  -218,
    -218,   222,  -218,  -218,  -218,  -218,  -218,   -37,  -218,  -218,
    -218,  -218,   817,   197,   634,   634,   817,   634,  -218,  -218,
      84,   202,   817,  -218,  -218,   -22,  -218,  -218,   817,   231,
     207,   233,   634,  -218,   634,  -218,  -218
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   164,   159,   154,    60,   162,    52,    57,    54,   155,
      53,    59,   153,    61,   163,    62,    72,    63,    55,    58,
      56,   165,   152,   169,    64,   169,   109,   102,     0,   169,
     169,   103,    69,     0,   150,     0,   166,    50,   151,     0,
      44,   168,    47,    49,     1,   110,    48,    46,     0,   149,
      76,   139,   170,     0,   152,   107,     0,   105,   141,   152,
      73,   152,    70,   156,     0,   140,    77,     0,     2,   206,
     207,   208,   209,     4,     0,    84,     0,     0,    10,    11,
      12,    13,    14,    15,   197,     0,   186,   181,   179,   177,
     175,   173,    51,   132,    30,    28,    26,    23,    20,    16,
     189,   191,     3,    50,   106,   117,   104,     0,   150,     0,
     167,     0,    67,     0,     0,   195,   161,    82,     0,   161,
       0,   171,     0,     0,     0,    83,   128,     0,     0,     0,
     192,   193,   194,   189,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     0,     0,     7,     0,     0,   202,
     203,     0,   117,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     2,   122,   123,   118,   124,   125,   127,   126,
      95,     0,   117,     0,    93,    92,   116,   142,   150,    75,
     135,   148,    81,     0,   137,     0,    78,    43,    71,    68,
     157,     0,   160,    65,     0,    66,     5,     0,     0,    87,
     130,    85,   129,   133,    84,     0,    17,    18,    19,    21,
      22,    24,    25,    27,    29,   176,     0,   178,   180,   182,
     183,   184,   185,   187,   188,   174,     0,     0,     6,     8,
     200,   201,   100,     0,     0,   117,     0,     0,    99,     0,
     117,     0,     0,   117,   117,    94,   119,    91,     0,    11,
       0,    74,    80,   146,   147,     0,     0,   196,    84,   190,
     172,    86,   134,     0,     0,     0,   198,   199,     0,   101,
     117,     0,   117,     0,    98,     0,    90,     0,     0,    88,
      96,     0,   145,   143,   136,    79,   138,     0,   131,    31,
       9,    89,   117,     0,   117,   117,     0,   117,   144,   204,
      84,     0,   117,   111,   115,     0,    97,   205,   117,     0,
       0,     0,   117,   112,   117,   114,   113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,  -218,  -218,  -218,    17,    86,   157,   162,   161,
    -108,  -218,  -110,  -218,     0,   241,   -40,   -34,  -218,   198,
    -218,   -17,  -218,   263,  -218,    40,   -81,  -217,  -218,   190,
    -218,   274,   140,  -218,  -218,  -218,   303,  -218,  -218,  -218,
    -218,  -218,  -218,  -148,  -218,  -218,  -114,  -218,    55,  -116,
    -218,  -218,  -218,  -218,   -99,  -218,   -28,  -218,  -218,   216,
    -218,  -218,   131,   -33,   -73,   -51,  -218,   194,   217,    33,
      53,   -74,   -18,  -218,  -218
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    84,   247,   248,    85,    86,    87,    88,    89,    90,
      91,   164,   208,    35,    54,    36,    23,   117,    24,    63,
      25,   103,   270,    38,   203,   204,   118,   124,   125,   126,
     183,   184,   185,   186,   187,   188,    26,    27,    55,    56,
      28,   189,   190,   191,   192,   193,   194,   127,   128,    92,
     205,   206,    49,    60,    50,    39,    29,    64,    33,   213,
      30,    40,    42,    31,   196,   121,    94,    95,    96,    97,
      98,    99,   100,   101,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   120,    93,   207,    57,    37,    51,   283,   220,   199,
     286,   132,   218,   216,   207,    32,   112,   274,  -152,    58,
    -158,    65,   104,    41,   253,    41,   223,    52,    22,    41,
      41,   319,    62,   211,   116,   314,   285,   315,  -152,    59,
      62,   120,   107,   317,   330,    61,   119,    34,   225,   115,
     217,    48,   217,   217,   113,   209,   120,   275,   130,   131,
     226,   227,   228,   254,   224,   207,   261,   133,    34,   320,
      34,   236,   195,    93,   116,   217,   116,   217,   105,   116,
      51,     3,   212,   217,   217,   212,   119,   -45,   119,   116,
       9,   119,   246,   133,   122,    12,     3,   137,   138,   268,
     123,   119,   198,   283,   133,     9,   134,   291,   122,   202,
      12,   135,   136,   245,   123,   249,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   221,   133,   133,   133,
     133,   133,   133,   133,   133,   108,   122,   109,   139,   140,
     279,   282,   123,   111,   313,   141,   296,   122,   271,   299,
     300,   142,   327,   123,    67,   133,    43,   143,   144,   195,
      46,    47,   151,   152,   321,   145,   280,   308,   243,   244,
      51,   146,   231,   232,   329,    53,   311,   309,    68,   197,
     331,    69,   214,   293,   219,   272,   295,    70,    71,   298,
     229,   230,    72,   250,   251,    73,   133,   252,   114,   255,
     323,   324,   256,   326,    76,    77,    78,    79,    80,    81,
      82,    83,   147,   148,   149,   150,   257,   301,   335,   165,
     336,   166,   292,   258,   259,   167,   168,   169,   170,   262,
     260,   264,    93,   239,   240,   241,   242,   310,   263,   281,
     265,   267,   217,   325,   273,     1,     2,     3,     4,   276,
       5,   277,     6,   284,     7,     8,     9,    10,   287,    11,
     288,    12,   289,   294,    13,   297,   290,   133,    14,    15,
     302,    16,   303,    17,   304,    18,   202,    19,    20,   278,
     316,    21,     1,     2,     3,     4,   318,     5,   312,     6,
     322,     7,     8,     9,    10,   328,    11,   332,    12,   334,
     333,    13,   110,   238,   235,    14,    15,   237,    16,  -108,
      17,   210,    18,    66,    19,    20,   306,   222,    21,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     106,    45,   266,   307,     0,   215,   234,    53,     1,     2,
       3,     4,   171,     5,   172,     6,   173,     7,     8,     9,
      10,   174,    11,   175,    12,   176,    67,    13,   233,   177,
     178,    14,    15,   179,    16,     0,    17,   180,    18,   181,
      19,    20,     0,   305,    21,     0,     0,     0,     0,     0,
     182,     0,     0,    69,     0,     0,     0,     0,     0,    70,
      71,     0,     0,     0,    72,     0,     0,    73,     0,     0,
      74,     0,   105,  -121,     0,     0,    76,    77,    78,    79,
      80,    81,    82,    83,     1,     2,     3,     4,   171,     5,
     172,     6,   173,     7,     8,     9,    10,   174,    11,   175,
      12,   176,    67,    13,     0,   177,   178,    14,    15,   179,
      16,     0,    17,   180,    18,   181,    19,    20,     0,     0,
      21,     0,     0,     0,     0,     0,   182,     0,     0,    69,
       0,     0,     0,     0,     0,    70,    71,     0,     0,     0,
      72,     0,     0,    73,     0,     0,    74,     0,   105,  -120,
       0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
       1,     2,     3,     4,     0,     5,     0,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,     0,    67,    13,
       0,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     0,     0,     0,
       0,     0,    68,     0,     0,    69,     0,     0,     0,     0,
       0,    70,    71,     0,     0,     0,    72,     0,     0,    73,
       0,     0,    74,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,     2,     3,     4,     0,
       0,     0,     6,     0,     7,     8,     9,    10,     0,    11,
       0,    12,     0,    67,    13,     0,     0,     0,     0,    15,
       0,     0,     0,    17,     0,    18,     0,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    68,     0,     0,
      69,     0,     0,     0,     0,     0,    70,    71,     0,     0,
       0,    72,     0,     0,    73,     0,     0,    74,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,   171,     0,   172,     0,   173,     0,     0,     0,     0,
     174,     0,   175,     0,   176,    67,     0,     0,   177,   178,
       0,     0,   179,     2,     3,     4,   180,     0,   181,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,   182,
       0,    13,    69,     0,     0,     0,    15,     0,    70,    71,
      17,     0,    18,    72,    19,    20,    73,     0,     0,    74,
       0,   105,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,    83,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     7,     8,     9,    10,     0,    11,     0,    12,
       0,     0,    13,    67,     0,     0,    14,    15,     0,    16,
       0,    17,     0,    18,     0,    19,    20,     0,     0,    21,
       0,     0,     0,     0,     0,   200,     0,    68,     0,     0,
      69,     0,     0,     0,     0,     0,    70,    71,    67,     0,
       0,    72,     0,     0,    73,     0,   201,    74,     0,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,    68,     0,     0,    69,     0,     0,     0,     0,
       0,    70,    71,    67,     0,     0,    72,     0,     0,    73,
       0,     0,    74,     0,   278,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,     0,    68,     0,     0,
      69,     0,     0,     0,     0,     0,    70,    71,    67,     0,
       0,    72,     0,     0,    73,     0,     0,   129,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,    68,     0,     0,    69,     0,     0,     0,     0,
       0,    70,    71,    67,     0,     0,    72,     0,     0,    73,
       0,     0,    74,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,     0,    68,     0,     0,
      69,     0,     0,     0,     0,     0,    70,    71,     0,     0,
       0,    72,     0,     0,    73,     0,     0,    74,     0,     0,
       0,     0,     0,    76,    77,    78,   269,    80,    81,    82,
      83,    44,     0,     0,     1,     2,     3,     4,     0,     5,
       0,     6,     0,     7,     8,     9,    10,     0,    11,     0,
      12,     0,     0,    13,     0,     0,     0,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,     0,     0,
      21,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,     0,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,     0,     0,    21
};

static const yytype_int16 yycheck[] =
{
       0,    74,    53,   111,    37,    22,    34,   224,   124,   108,
      64,    85,   122,    66,   122,    45,    68,    66,    45,    45,
      67,    49,    55,    23,   172,    25,    68,    93,    28,    29,
      30,    68,    45,   114,    74,    66,    92,    66,    65,    65,
      45,   114,    59,    66,    66,   106,    74,    74,   129,    67,
     106,    67,   106,   106,   106,    68,   129,   106,    76,    77,
     134,   135,   136,   173,   106,   173,   180,    85,    74,   106,
      74,   144,   105,   124,   114,   106,   116,   106,    67,   119,
     108,     5,   116,   106,   106,   119,   114,    93,   116,   129,
      14,   119,   165,   111,    63,    19,     5,    81,    82,   198,
      69,   129,    26,   320,   122,    14,    74,   255,    63,   109,
      19,    79,    80,   164,    69,   166,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    95,   145,   146,   147,
     148,   149,   150,   151,   152,    63,    63,    65,    87,    88,
     214,    68,    69,    95,   292,   108,   260,    63,   199,   263,
     264,    89,    68,    69,    21,   173,    25,    90,    91,   192,
      29,    30,    75,    76,   312,   109,   217,   283,   151,   152,
     198,    73,   139,   140,   322,    95,   290,   285,    45,    66,
     328,    48,    66,   256,    45,   202,   259,    54,    55,   262,
     137,   138,    59,    45,    45,    62,   214,    93,    65,    65,
     314,   315,    65,   317,    71,    72,    73,    74,    75,    76,
      77,    78,    83,    84,    85,    86,    45,   268,   332,    63,
     334,    65,   255,    93,    65,    69,    70,    71,    72,    65,
      92,    38,   283,   147,   148,   149,   150,   288,    92,    64,
      93,    68,   106,   316,    66,     3,     4,     5,     6,   106,
       8,    66,    10,    66,    12,    13,    14,    15,    66,    17,
     106,    19,    93,    93,    22,    18,    92,   285,    26,    27,
      64,    29,    64,    31,    45,    33,   276,    35,    36,    67,
      65,    39,     3,     4,     5,     6,    64,     8,    93,    10,
      93,    12,    13,    14,    15,    93,    17,    66,    19,    66,
      93,    22,    61,   146,   143,    26,    27,   145,    29,    67,
      31,   113,    33,    50,    35,    36,   276,   127,    39,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      56,    28,   192,   278,    -1,   119,   142,    95,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   141,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    94,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
      65,    -1,    67,    68,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,     4,     5,     6,    -1,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,     7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,     4,     5,     6,    32,    -1,    34,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    45,
      -1,    22,    48,    -1,    -1,    -1,    27,    -1,    54,    55,
      31,    -1,    33,    59,    35,    36,    62,    -1,    -1,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    21,    -1,    -1,    26,    27,    -1,    29,
      -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    45,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    21,    -1,
      -1,    59,    -1,    -1,    62,    -1,    66,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    21,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    45,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    21,    -1,
      -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    21,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    45,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,     0,    -1,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    -1,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,
      39,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    29,    -1,    31,
      -1,    33,    -1,    35,    36,    -1,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    26,    27,    29,    31,    33,    35,
      36,    39,   125,   127,   129,   131,   147,   148,   151,   167,
     171,   174,    45,   169,    74,   124,   126,   132,   134,   166,
     172,   125,   173,   173,     0,   147,   173,   173,    67,   163,
     165,   167,    93,    95,   125,   149,   150,   174,    45,    65,
     164,   106,    45,   130,   168,   167,   134,    21,    45,    48,
      54,    55,    59,    62,    65,    67,    71,    72,    73,    74,
      75,    76,    77,    78,   112,   115,   116,   117,   118,   119,
     120,   121,   160,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   132,   174,    67,   142,   132,    63,    65,
     126,    95,    68,   106,    65,   183,   127,   128,   137,   167,
     175,   176,    63,    69,   138,   139,   140,   158,   159,    65,
     183,   183,   182,   183,    74,    79,    80,    81,    82,    87,
      88,   108,    89,    90,    91,   109,    73,    83,    84,    85,
      86,    75,    76,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   122,    63,    65,    69,    70,    71,
      72,     7,     9,    11,    16,    18,    20,    24,    25,    28,
      32,    34,    45,   141,   142,   143,   144,   145,   146,   152,
     153,   154,   155,   156,   157,   174,   175,    66,    26,   165,
      45,    66,   125,   135,   136,   161,   162,   121,   123,    68,
     130,   137,   128,   170,    66,   170,    66,   106,   123,    45,
     160,    95,   140,    68,   106,   137,   182,   182,   182,   181,
     181,   180,   180,   179,   178,   120,   175,   119,   118,   117,
     117,   117,   117,   116,   116,   176,   175,   113,   114,   176,
      45,    45,    93,   154,   123,    65,    65,    45,    93,    65,
      92,   157,    65,    92,    38,    93,   143,    68,   165,    74,
     133,   176,   132,    66,    66,   106,   106,    66,    67,   182,
     176,    64,    68,   138,    66,    92,    64,    66,   106,    93,
      92,   154,   174,   175,    93,   175,   157,    18,   175,   157,
     157,   176,    64,    64,    45,    94,   136,   159,   160,   121,
     176,   157,    93,   154,    66,    66,    65,    66,    64,    68,
     106,   154,    93,   157,   157,   175,   157,    68,    93,   154,
      66,   154,    66,    93,    66,   157,   157
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   124,   124,   125,   125,   125,   125,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   131,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   138,   138,   139,   140,   140,   141,   141,
     141,   142,   143,   143,   144,   145,   145,   145,   146,   146,
     146,   146,   147,   147,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   152,   152,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   157,   157,   157,   157,   158,   158,
     159,   159,   160,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   164,   164,   164,   164,   164,   164,   165,
     165,   166,   166,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   179,
     179,   180,   180,   180,   180,   180,   181,   181,   181,   182,
     182,   183,   183,   183,   183,   183,   183,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   185,   185,   185
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     2,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     5,     6,     2,
       1,     3,     1,     2,     1,     0,     2,     3,     1,     3,
       2,     1,     1,     1,     0,     2,     3,     2,     3,     4,
       3,     3,     1,     1,     2,     1,     3,     5,     3,     2,
       2,     3,     1,     1,     4,     1,     2,     1,     0,     1,
       2,     5,     7,     9,     8,     5,     1,     0,     1,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     1,     3,     4,     1,     3,     1,     3,     1,
       2,     1,     3,     5,     6,     5,     4,     4,     3,     1,
       0,     1,     0,     1,     1,     1,     1,     3,     1,     0,
       1,     0,     1,     1,     1,     1,     1,     3,     1,     0,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       4,     1,     2,     2,     2,     2,     4,     1,     4,     4,
       3,     3,     2,     2,     6,     7,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 1855 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 571 "ass5_16CS30023.y" /* yacc.c:1906  */

void yyerror(char *s) {
    printf("%s\n",s);
}
