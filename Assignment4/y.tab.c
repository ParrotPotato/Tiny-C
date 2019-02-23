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
#line 1 "ass4_16CS30023.y" /* yacc.c:339  */

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
#line 8 "ass4_16CS30023.y" /* yacc.c:355  */

  int intval;
  float floatval;
  char *charval;

#line 336 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 353 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1054

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  337

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   364

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
     105,   106,   107,   108,   109
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
  "_BOOL", "CONTINUE", "IF", "STATIC", "_COMPLEX", "DEFAULT", "INLINE",
  "STRUCT", "_IMAGINARY", "DO", "INT", "SWITCH", "DOUBLE", "LONG",
  "TYPEDEF", "ELSE", "REGISTER", "UNION", "SINGLE_LINE_COMMENT",
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364
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
     984,  -218,     6,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,   -55,   984,  -218,   984,  -218,  -218,   948,   984,
     984,  -218,   -39,   -12,    76,   -76,  -218,   236,  -218,   -24,
     -61,  -218,  -218,  -218,  -218,  -218,  -218,  -218,    40,    76,
       4,  -218,  -218,   700,   -55,   984,    21,  -218,  -218,     4,
      46,     4,    11,  -218,   -41,  -218,  -218,   768,  -218,  -218,
    -218,  -218,  -218,  -218,   552,    34,   802,   802,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,   836,    33,    17,    82,     7,
      47,  -218,  -218,  -218,   104,    29,    67,   141,    97,  -218,
     110,    92,  -218,    49,  -218,   328,  -218,    86,   133,   698,
    -218,   836,  -218,     1,   552,  -218,  1019,  -218,    88,  1019,
     -52,  -218,   836,   101,   700,  -218,  -218,    32,   -36,   552,
    -218,  -218,  -218,  -218,   836,   836,   836,   836,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   836,   836,
     836,   836,   836,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,   836,   836,   836,   113,   121,  -218,
    -218,    83,   836,   836,   120,   124,   146,   103,   135,   128,
     623,   138,   130,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
     194,   142,   403,   166,  -218,  -218,   131,  -218,    76,   870,
    -218,  -218,   -25,   170,  -218,   -50,   140,  -218,  -218,  -218,
    -218,   173,  -218,  -218,   734,  -218,  -218,   836,   184,  -218,
    -218,  -218,  -218,  -218,    74,   187,  -218,  -218,  -218,    97,
      97,   141,   141,    67,    29,    47,   -58,     7,    82,    17,
      17,    17,    17,    33,    33,  -218,   -53,   189,   151,  -218,
    -218,  -218,  -218,   165,   168,   478,   836,   171,  -218,   836,
     623,   242,   836,   623,   623,  -218,  -218,  -218,   836,   202,
     206,  -218,  -218,  -218,  -218,   228,   275,   207,    34,  -218,
    -218,  -218,  -218,   700,   207,   836,  -218,  -218,   836,  -218,
     623,   183,   836,   -48,  -218,   -30,  -218,   213,   -27,  -218,
    -218,   219,  -218,  -218,  -218,  -218,  -218,   -35,  -218,  -218,
    -218,  -218,   836,   192,   623,   623,   836,   623,  -218,  -218,
     111,   199,   836,  -218,  -218,   -22,  -218,  -218,   836,   221,
     201,   230,   623,  -218,   623,  -218,  -218
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
    -218,  -218,  -218,  -218,  -218,    30,    80,   150,   153,   156,
    -108,  -218,  -110,  -218,     0,   243,   -40,   -34,  -218,   193,
    -218,   -17,  -218,   258,  -218,    35,   -78,  -217,  -218,   185,
    -218,   259,   122,  -218,  -218,  -218,   288,  -218,  -218,  -218,
    -218,  -218,  -218,  -148,  -218,  -218,  -114,  -218,    39,  -116,
    -218,  -218,  -218,  -218,   -99,  -218,   -28,  -218,  -218,   200,
    -218,  -218,   162,   -33,   -73,   -51,  -218,   176,   179,    58,
      78,   -74,   -18,  -218,  -218
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
     286,   132,   218,   216,   207,   274,    52,   314,    34,  -152,
      58,    65,   104,    41,   253,    41,   112,  -158,    22,    41,
      41,   223,   319,   285,   116,   315,   211,   -45,   317,  -152,
      59,   120,   107,   330,    61,    62,   119,   217,    34,   115,
      32,   225,   217,   217,    48,   275,   120,   217,   130,   131,
     226,   227,   228,   254,   113,   207,   261,   133,   209,   224,
     320,   236,   195,    93,   116,   217,   116,    34,   217,   116,
      51,     3,   212,   217,    62,   212,   119,   105,   119,   116,
       9,   119,   246,   133,   122,    12,   122,   137,   138,   268,
     123,   119,   123,   283,   133,   111,   134,   291,   108,   202,
     109,   135,   136,   245,   141,   249,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   221,   133,   133,   133,
     133,   133,   133,   133,   133,   142,   122,   145,     3,   146,
     279,   282,   123,    53,   313,   219,   296,     9,   271,   299,
     300,   197,    12,   214,   165,   133,   166,   250,   198,   195,
     167,   168,   169,   170,   321,   251,   280,   308,   139,   140,
      51,   151,   152,   122,   329,   252,   311,   309,   327,   123,
     331,   243,   244,   293,   255,   272,   295,    43,   256,   298,
     257,    46,    47,   143,   144,   258,   133,   231,   232,   259,
     323,   324,   262,   326,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   229,   230,   301,   335,   260,
     336,   263,   292,   147,   148,   149,   150,   239,   240,   241,
     242,   264,    93,   267,   265,   273,   217,   310,   277,     1,
       2,     3,     4,   325,     5,   276,     6,   281,     7,     8,
       9,    10,   284,    11,   287,    12,   288,   289,    13,   290,
     297,    14,    15,   294,    16,   302,    17,   133,    18,   303,
      19,    20,   304,   278,    21,   312,   202,   316,     1,     2,
       3,     4,   318,     5,   322,     6,   332,     7,     8,     9,
      10,   328,    11,   333,    12,   334,   238,    13,   237,   235,
      14,    15,  -108,    16,   110,    17,   210,    18,    66,    19,
      20,   306,   222,    21,   266,   106,    45,   307,   234,   215,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     1,     2,     3,     4,   171,     5,   172,     6,   173,
       7,     8,     9,    10,   174,    11,   175,    12,   176,    67,
      13,   177,   178,    14,    15,   179,    16,     0,    17,   180,
      18,   181,    19,    20,     0,     0,    21,     0,   305,     0,
       0,     0,   182,     0,     0,    69,     0,     0,     0,     0,
       0,    70,    71,     0,     0,     0,    72,     0,     0,    73,
       0,     0,    74,     0,   105,  -121,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,     1,     2,     3,     4,
     171,     5,   172,     6,   173,     7,     8,     9,    10,   174,
      11,   175,    12,   176,    67,    13,   177,   178,    14,    15,
     179,    16,     0,    17,   180,    18,   181,    19,    20,     0,
       0,    21,     0,     0,     0,     0,     0,   182,     0,     0,
      69,     0,     0,     0,     0,     0,    70,    71,     0,     0,
       0,    72,     0,     0,    73,     0,     0,    74,     0,   105,
    -120,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,     0,    67,
      13,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     0,     0,     0,
       0,     0,    68,     0,     0,    69,     0,     0,     0,     0,
       0,    70,    71,     0,     0,     0,    72,     0,     0,    73,
       0,     0,    74,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,     2,     3,     4,     0,
       0,     0,     6,     0,     7,     8,     9,    10,     0,    11,
       0,    12,     0,    67,    13,     0,     0,     0,    15,     0,
       0,     0,    17,     0,    18,     0,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    68,     0,     0,    69,
       0,     0,     0,     0,     0,    70,    71,     0,     0,     0,
      72,     0,     0,    73,     0,     0,    74,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
     171,     0,   172,     0,   173,     0,     0,     0,     0,   174,
       0,   175,     0,   176,    67,     0,   177,   178,     0,     0,
     179,     0,     0,     0,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   182,     0,     0,
      69,     0,     0,     0,     0,     0,    70,    71,     0,     0,
       0,    72,     0,     0,    73,     0,     0,    74,     0,   105,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,    67,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     0,     0,     0,
       0,     0,   200,     0,    68,     0,     0,    69,     0,     0,
       0,     0,     0,    70,    71,    67,     0,     0,    72,     0,
       0,    73,     0,   201,    74,     0,    75,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    82,    83,    68,     0,
       0,    69,     0,     0,     0,     0,     0,    70,    71,    67,
       0,     0,    72,     0,     0,    73,     0,     0,    74,     0,
     278,     0,     0,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    68,     0,     0,    69,     0,     0,     0,     0,
       0,    70,    71,    67,     0,     0,    72,     0,     0,    73,
       0,     0,   114,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,    68,     0,     0,    69,
       0,     0,     0,     0,     0,    70,    71,    67,     0,     0,
      72,     0,     0,    73,     0,     0,   129,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
      68,     0,     0,    69,     0,     0,     0,     0,     0,    70,
      71,    67,     0,     0,    72,     0,     0,    73,     0,     0,
      74,     0,     0,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,    83,    68,     0,     0,    69,     0,     0,
       0,     0,     0,    70,    71,     0,     0,     0,    72,     0,
       0,    73,     0,     0,    74,     0,     0,     0,     0,     0,
      76,    77,    78,   269,    80,    81,    82,    83,    44,     0,
       0,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
       0,     0,    21,     2,     3,     4,     0,     0,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,     0,    15,     0,     0,     0,    17,
       0,    18,     0,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    74,    53,   111,    37,    22,    34,   224,   124,   108,
      63,    85,   122,    65,   122,    65,    92,    65,    73,    44,
      44,    49,    55,    23,   172,    25,    67,    66,    28,    29,
      30,    67,    67,    91,    74,    65,   114,    92,    65,    64,
      64,   114,    59,    65,   105,    44,    74,   105,    73,    67,
      44,   129,   105,   105,    66,   105,   129,   105,    76,    77,
     134,   135,   136,   173,   105,   173,   180,    85,    67,   105,
     105,   144,   105,   124,   114,   105,   116,    73,   105,   119,
     108,     5,   116,   105,    44,   119,   114,    66,   116,   129,
      14,   119,   165,   111,    62,    19,    62,    80,    81,   198,
      68,   129,    68,   320,   122,    94,    73,   255,    62,   109,
      64,    78,    79,   164,   107,   166,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    94,   145,   146,   147,
     148,   149,   150,   151,   152,    88,    62,   108,     5,    72,
     214,    67,    68,    94,   292,    44,   260,    14,   199,   263,
     264,    65,    19,    65,    62,   173,    64,    44,    25,   192,
      68,    69,    70,    71,   312,    44,   217,   283,    86,    87,
     198,    74,    75,    62,   322,    92,   290,   285,    67,    68,
     328,   151,   152,   256,    64,   202,   259,    25,    64,   262,
      44,    29,    30,    89,    90,    92,   214,   139,   140,    64,
     314,   315,    64,   317,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   137,   138,   268,   332,    91,
     334,    91,   255,    82,    83,    84,    85,   147,   148,   149,
     150,    37,   283,    67,    92,    65,   105,   288,    65,     3,
       4,     5,     6,   316,     8,   105,    10,    63,    12,    13,
      14,    15,    65,    17,    65,    19,   105,    92,    22,    91,
      18,    25,    26,    92,    28,    63,    30,   285,    32,    63,
      34,    35,    44,    66,    38,    92,   276,    64,     3,     4,
       5,     6,    63,     8,    92,    10,    65,    12,    13,    14,
      15,    92,    17,    92,    19,    65,   146,    22,   145,   143,
      25,    26,    66,    28,    61,    30,   113,    32,    50,    34,
      35,   276,   127,    38,   192,    56,    28,   278,   142,   119,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    -1,    38,    -1,    93,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    64,    -1,    66,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    64,    -1,    66,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,     4,     5,     6,    -1,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
       7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    64,    -1,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    21,    -1,    25,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    54,    21,    -1,    -1,    58,    -1,
      -1,    61,    -1,    65,    64,    -1,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    54,    21,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    54,    21,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    54,    21,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      54,    21,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    58,    -1,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,     0,    -1,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,    -1,    38,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      -1,    -1,    38,     4,     5,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    25,    26,    28,    30,    32,    34,
      35,    38,   124,   126,   128,   130,   146,   147,   150,   166,
     170,   173,    44,   168,    73,   123,   125,   131,   133,   165,
     171,   124,   172,   172,     0,   146,   172,   172,    66,   162,
     164,   166,    92,    94,   124,   148,   149,   173,    44,    64,
     163,   105,    44,   129,   167,   166,   133,    21,    44,    47,
      53,    54,    58,    61,    64,    66,    70,    71,    72,    73,
      74,    75,    76,    77,   111,   114,   115,   116,   117,   118,
     119,   120,   159,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   131,   173,    66,   141,   131,    62,    64,
     125,    94,    67,   105,    64,   182,   126,   127,   136,   166,
     174,   175,    62,    68,   137,   138,   139,   157,   158,    64,
     182,   182,   181,   182,    73,    78,    79,    80,    81,    86,
      87,   107,    88,    89,    90,   108,    72,    82,    83,    84,
      85,    74,    75,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   121,    62,    64,    68,    69,    70,
      71,     7,     9,    11,    16,    18,    20,    23,    24,    27,
      31,    33,    44,   140,   141,   142,   143,   144,   145,   151,
     152,   153,   154,   155,   156,   173,   174,    65,    25,   164,
      44,    65,   124,   134,   135,   160,   161,   120,   122,    67,
     129,   136,   127,   169,    65,   169,    65,   105,   122,    44,
     159,    94,   139,    67,   105,   136,   181,   181,   181,   180,
     180,   179,   179,   178,   177,   119,   174,   118,   117,   116,
     116,   116,   116,   115,   115,   175,   174,   112,   113,   175,
      44,    44,    92,   153,   122,    64,    64,    44,    92,    64,
      91,   156,    64,    91,    37,    92,   142,    67,   164,    73,
     132,   175,   131,    65,    65,   105,   105,    65,    66,   181,
     175,    63,    67,   137,    65,    91,    63,    65,   105,    92,
      91,   153,   173,   174,    92,   174,   156,    18,   174,   156,
     156,   175,    63,    63,    44,    93,   135,   158,   159,   120,
     175,   156,    92,   153,    65,    65,    64,    65,    63,    67,
     105,   153,    92,   156,   156,   174,   156,    67,    92,   153,
      65,   153,    65,    92,    65,   156,   156
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   123,   123,   124,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   128,   128,   128,
     129,   129,   130,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   137,   137,   138,   139,   139,   140,   140,
     140,   141,   142,   142,   143,   144,   144,   144,   145,   145,
     145,   145,   146,   146,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   151,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   156,   156,   156,   156,   157,   157,
     158,   158,   159,   159,   159,   160,   160,   161,   161,   162,
     162,   163,   163,   163,   163,   163,   163,   163,   163,   164,
     164,   165,   165,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   170,   170,   171,   171,   172,   172,
     173,   174,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   179,   179,   179,   179,   179,   180,   180,   180,   181,
     181,   182,   182,   182,   182,   182,   182,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   184,   184,   184,   184
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
      
#line 1862 "y.tab.c" /* yacc.c:1646  */
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
#line 571 "ass4_16CS30023.y" /* yacc.c:1906  */

void yyerror(char *s) {
    printf("%s\n",s);
}
