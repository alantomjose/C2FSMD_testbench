/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STOR_CONSTANT = 258,
     IDENTIFIER = 259,
     CONSTANT = 260,
     FLOAT_CONSTANT = 261,
     STRING_LITERAL = 262,
     SIZEOF = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     TYPE_NAME = 285,
     TYPEDEF = 286,
     EXTERN = 287,
     STATIC = 288,
     AUTO = 289,
     REGISTER = 290,
     CHAR = 291,
     SHORT = 292,
     INT = 293,
     LONG = 294,
     SIGNED = 295,
     UNSIGNED = 296,
     FLOAT = 297,
     DOUBLE = 298,
     CONST = 299,
     VOLATILE = 300,
     VOID = 301,
     STRUCT = 302,
     UNION = 303,
     ENUM = 304,
     ELLIPSIS = 305,
     CASE = 306,
     DEFAULT = 307,
     IF = 308,
     ELSE = 309,
     SWITCH = 310,
     WHILE = 311,
     DO = 312,
     FOR = 313,
     GOTO = 314,
     CONTINUE = 315,
     BREAK = 316,
     RETURN = 317,
     MAIN = 318,
     UPOS = 327,
     UNEG = 328
   };
#endif
/* Tokens.  */
#define STOR_CONSTANT 258
#define IDENTIFIER 259
#define CONSTANT 260
#define FLOAT_CONSTANT 261
#define STRING_LITERAL 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPE_NAME 285
#define TYPEDEF 286
#define EXTERN 287
#define STATIC 288
#define AUTO 289
#define REGISTER 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define SIGNED 295
#define UNSIGNED 296
#define FLOAT 297
#define DOUBLE 298
#define CONST 299
#define VOLATILE 300
#define VOID 301
#define STRUCT 302
#define UNION 303
#define ENUM 304
#define ELLIPSIS 305
#define CASE 306
#define DEFAULT 307
#define IF 308
#define ELSE 309
#define SWITCH 310
#define WHILE 311
#define DO 312
#define FOR 313
#define GOTO 314
#define CONTINUE 315
#define BREAK 316
#define RETURN 317
#define MAIN 318
#define UPOS 327
#define UNEG 328




/* Copy the first part of user declarations.  */
#line 11 "c2fsmd.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

//#define DOTTY

/*
#ifdef DOTTY

	printf("Inside coditional compilation part\n");

#endif
*/

int *errP;
int yylex (void);
void yyerror(char const *s);
symtab *current_table;
int size,size1,size2;
int temp_int;
int state_count=1;
int state_rcnt=MAXSTATES-1;
char comments[MAXSTATES][50];
int prev_state=0,i=0,print_count;
int vartype,x;
//int lineno;
char *data;
char *temps;
char *printer;
NC *tee;
FSMD *c2f;
symtab *current_table;
TRANSITION_ST *transts;
p_lisT *tmp,*tmp1;
NODE_ST *st;
DATA_TRANS *transdata;
DT_LIST *dtlst;
LIST *lst1,*rtrn,*rtrn1;
int input_count=0;
int output_count=0;

loopi *l1,*l2;
int loop_count=0;

#ifdef DOTTY
char *colors[]={"black","magenta","chocolate","darkgreen","dodgerblue","firebrick","darkviolet"};
char *shapes[]={"record","box"};

char **string_clusters;
int **loops;

int if_count=0;
int ifel_count=0;
int loopl_count=0;
#endif

#define YYDEBUG 1


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 73 "c2fsmd.y"
{
char *str;
int integer;
float real;
prnsS prns;
typelS typel;
unopS unop;
ptrcntS ptrcnt;
dclrnS dclrn;
expresoS exprso;
exprsnS exprsn;
dtlsS dtls;
nclsS ncls;
epxrsstsS exprsSTS;
p_lisT p_l;
}
/* Line 193 of yacc.c.  */
#line 305 "c2fsmd.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 318 "c2fsmd.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNRULES -- Number of states.  */
#define YYNSTATES  353

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,     2,     2,    87,    80,     2,
      74,    75,    81,    82,    79,    83,    78,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    95,
      88,    94,    89,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    96,    91,    97,    84,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    26,    30,    35,    39,    43,    46,    49,    51,    55,
      57,    60,    63,    66,    69,    74,    76,    78,    80,    82,
      84,    86,    88,    93,    95,    99,   103,   107,   109,   113,
     117,   119,   123,   127,   129,   133,   137,   141,   145,   147,
     151,   155,   157,   161,   163,   167,   169,   173,   175,   179,
     181,   185,   187,   193,   195,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   221,   223,   227,   229,
     232,   236,   238,   241,   243,   246,   248,   251,   253,   257,
     259,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   293,   295,   297,   303,
     308,   311,   313,   315,   317,   320,   324,   327,   329,   332,
     334,   336,   340,   342,   345,   349,   354,   360,   363,   365,
     369,   371,   375,   377,   379,   382,   384,   386,   390,   395,
     399,   404,   409,   413,   415,   418,   421,   425,   427,   430,
     432,   436,   438,   442,   445,   448,   450,   452,   456,   458,
     461,   463,   465,   468,   472,   475,   479,   483,   488,   491,
     495,   499,   504,   506,   510,   515,   517,   521,   523,   525,
     527,   529,   531,   533,   537,   542,   546,   549,   553,   557,
     562,   564,   567,   569,   572,   574,   577,   583,   591,   597,
     603,   611,   618,   626,   630,   633,   636,   639,   643,   645,
     648,   650,   652,   657,   661,   665
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     160,     0,    -1,     5,    -1,     6,    -1,     3,    -1,     4,
      -1,    99,    -1,     7,    -1,    74,   119,    75,    -1,   100,
      -1,   101,    76,   119,    77,    -1,   101,    74,    75,    -1,
     101,    74,   102,    75,    -1,   101,    78,     4,    -1,   101,
       9,     4,    -1,   101,    10,    -1,   101,    11,    -1,   117,
      -1,   102,    79,   117,    -1,   101,    -1,    10,   103,    -1,
      11,   103,    -1,   104,   105,    -1,     8,   103,    -1,     8,
      74,   146,    75,    -1,    80,    -1,    81,    -1,    82,    -1,
      83,    -1,    84,    -1,    85,    -1,   103,    -1,    74,   146,
      75,   105,    -1,   105,    -1,   106,    81,   105,    -1,   106,
      86,   105,    -1,   106,    87,   105,    -1,   106,    -1,   107,
      82,   106,    -1,   107,    83,   106,    -1,   107,    -1,   108,
      12,   107,    -1,   108,    13,   107,    -1,   108,    -1,   109,
      88,   108,    -1,   109,    89,   108,    -1,   109,    14,   108,
      -1,   109,    15,   108,    -1,   109,    -1,   110,    16,   109,
      -1,   110,    17,   109,    -1,   110,    -1,   111,    80,   110,
      -1,   111,    -1,   112,    90,   111,    -1,   112,    -1,   113,
      91,   112,    -1,   113,    -1,   114,    18,   113,    -1,   114,
      -1,   115,    19,   114,    -1,   115,    -1,   115,    92,   119,
      93,   116,    -1,   116,    -1,   103,   118,   117,    -1,    94,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,   117,    -1,   119,    79,   117,    -1,   116,    -1,   122,
      95,    -1,   122,   123,    95,    -1,   125,    -1,   125,   122,
      -1,   126,    -1,   126,   122,    -1,   137,    -1,   137,   122,
      -1,   124,    -1,   123,    79,   124,    -1,   138,    -1,   138,
      94,   149,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    35,    -1,    46,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    42,    -1,    43,    -1,    40,    -1,    41,
      -1,   127,    -1,   134,    -1,    30,    -1,   128,     4,    96,
     129,    97,    -1,   128,    96,   129,    97,    -1,   128,     4,
      -1,    47,    -1,    48,    -1,   130,    -1,   129,   130,    -1,
     131,   132,    95,    -1,   126,   131,    -1,   126,    -1,   137,
     131,    -1,   137,    -1,   133,    -1,   132,    79,   133,    -1,
     138,    -1,    93,   120,    -1,   138,    93,   120,    -1,    49,
      96,   135,    97,    -1,    49,     4,    96,   135,    97,    -1,
      49,     4,    -1,   136,    -1,   135,    79,   136,    -1,     4,
      -1,     4,    94,   120,    -1,    44,    -1,    45,    -1,   140,
     139,    -1,   139,    -1,     4,    -1,    74,   138,    75,    -1,
     139,    76,   120,    77,    -1,   139,    76,    77,    -1,   139,
      74,   142,    75,    -1,   139,    74,   145,    75,    -1,   139,
      74,    75,    -1,    81,    -1,    81,   141,    -1,    81,   140,
      -1,    81,   141,   140,    -1,   137,    -1,   141,   137,    -1,
     143,    -1,   143,    79,    50,    -1,   144,    -1,   143,    79,
     144,    -1,   122,   138,    -1,   122,   147,    -1,   122,    -1,
       4,    -1,   145,    79,     4,    -1,   131,    -1,   131,   147,
      -1,   140,    -1,   148,    -1,   140,   148,    -1,    74,   147,
      75,    -1,    76,    77,    -1,    76,   120,    77,    -1,   148,
      76,    77,    -1,   148,    76,   120,    77,    -1,    74,    75,
      -1,    74,   142,    75,    -1,   148,    74,    75,    -1,   148,
      74,   142,    75,    -1,   117,    -1,    96,   150,    97,    -1,
      96,   150,    79,    97,    -1,   149,    -1,   150,    79,   149,
      -1,   152,    -1,   153,    -1,   156,    -1,   157,    -1,   158,
      -1,   159,    -1,     4,    93,   151,    -1,    51,   120,    93,
     151,    -1,    52,    93,   151,    -1,    96,    97,    -1,    96,
     155,    97,    -1,    96,   154,    97,    -1,    96,   154,   155,
      97,    -1,   121,    -1,   154,   121,    -1,   151,    -1,   155,
     151,    -1,    95,    -1,   119,    95,    -1,    53,    74,   119,
      75,   151,    -1,    53,    74,   119,    75,   151,    54,   151,
      -1,    55,    74,   119,    75,   151,    -1,    56,    74,   119,
      75,   151,    -1,    57,   151,    56,    74,   119,    75,    95,
      -1,    58,    74,   156,   156,    75,   151,    -1,    58,    74,
     156,   156,   119,    75,   151,    -1,    59,     4,    95,    -1,
      60,    95,    -1,    61,    95,    -1,    62,    95,    -1,    62,
     119,    95,    -1,   161,    -1,   160,   161,    -1,   162,    -1,
     121,    -1,   122,   138,   154,   153,    -1,   122,   138,   153,
      -1,   138,   154,   153,    -1,   138,   153,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   164,   165,   169,   175,   183,   189,   203,
     208,   227,   238,   253,   254,   255,   268,   284,   289,   302,
     307,   321,   334,   357,   360,   366,   367,   368,   369,   370,
     371,   375,   380,   393,   398,   407,   416,   428,   434,   443,
     455,   460,   469,   481,   486,   495,   504,   513,   525,   530,
     539,   551,   556,   568,   573,   585,   591,   603,   609,   621,
     627,   639,   645,   654,   663,   683,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   697,   702,   720,   729,
     734,   758,   759,   760,   763,   766,   767,   771,   774,   789,
     794,   805,   806,   807,   808,   809,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   828,   829,
     830,   834,   835,   839,   840,   844,   848,   849,   850,   851,
     855,   856,   860,   861,   862,   866,   867,   868,   872,   873,
     877,   878,   882,   883,   887,   900,   908,   914,   915,   931,
     951,   969,   970,   974,   975,   976,   977,   981,   982,   987,
     988,   992,   995,  1008,  1015,  1018,  1023,  1024,  1028,  1029,
    1033,  1034,  1035,  1039,  1040,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1051,  1056,  1060,  1084,  1088,  1105,  1106,  1109,
    1126,  1129,  1132,  1136,  1137,  1138,  1142,  1145,  1148,  1151,
    1161,  1164,  1174,  1177,  1187,  1194,  1207,  1230,  1303,  1307,
    1355,  1405,  1489,  1589,  1590,  1591,  1608,  1609,  1620,  1630,
    1638,  1639,  1643,  1644,  1645,  1646
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STOR_CONSTANT", "IDENTIFIER",
  "CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "MAIN", "\"<\"",
  "\">\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"", "\"%\"", "\"!\"", "UPOS",
  "UNEG", "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'",
  "':'", "'='", "';'", "'{'", "'}'", "$accept", "cnst",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    40,    41,    91,    93,    46,    44,
      38,    42,    43,    45,   126,    33,    47,    37,    60,    62,
      94,   124,    63,    58,    61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,    99,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   103,
     103,   103,   103,   103,   103,   104,   104,   104,   104,   104,
     104,   105,   105,   106,   106,   106,   106,   107,   107,   107,
     108,   108,   108,   109,   109,   109,   109,   109,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   119,   119,   120,   121,
     121,   122,   122,   122,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   125,   125,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     127,   128,   128,   129,   129,   130,   131,   131,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   144,   145,   145,   146,   146,
     147,   147,   147,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   149,   149,   150,   150,   151,   151,   151,
     151,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     154,   154,   155,   155,   156,   156,   157,   157,   157,   158,
     158,   158,   158,   159,   159,   159,   159,   159,   160,   160,
     161,   161,   162,   162,   162,   162
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     1,     2,     1,     2,     1,     2,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     3,     2,     1,     2,     1,
       1,     3,     1,     2,     3,     4,     5,     2,     1,     3,
       1,     3,     1,     1,     2,     1,     1,     3,     4,     3,
       4,     4,     3,     1,     2,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     2,     1,     1,     3,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     5,     7,     5,     5,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   136,   107,    91,    92,    93,    94,    95,    97,    98,
      99,   100,   103,   104,   101,   102,   132,   133,    96,   111,
     112,     0,     0,   143,   211,     0,    81,    83,   105,     0,
     106,    85,     0,   135,     0,     0,   208,   210,   127,     0,
       0,   147,   145,   144,    79,     0,    87,    89,    82,    84,
     110,     0,    86,     0,   190,     0,   215,     0,     0,     0,
     134,     1,   209,     0,   130,     0,   128,   137,   148,   146,
       0,    80,     0,   213,     0,     0,   117,     0,   113,     0,
     119,     4,     5,     2,     3,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    27,    28,    29,    30,   194,   186,     6,
       9,    19,    31,     0,    33,    37,    40,    43,    48,    51,
      53,    55,    57,    59,    61,    63,    76,     0,   192,   177,
     178,     0,     0,   179,   180,   181,   182,    89,   191,   214,
     156,   142,   155,     0,   149,   151,     0,     5,   139,    31,
      78,     0,     0,     0,     0,   125,    88,     0,   172,    90,
     212,     0,   116,   109,   114,     0,     0,   120,   122,   118,
       0,     0,    23,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,   204,   205,   206,     0,     0,   158,
       0,     0,    15,    16,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    65,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   188,     0,   187,   193,     0,     0,   153,   160,   154,
     161,   140,     0,   141,     0,   138,   126,   131,   129,   175,
       0,   108,   123,     0,   115,     0,   183,     0,     0,   185,
       0,     0,     0,     0,     0,   203,   207,     8,     0,   160,
     159,     0,    14,    11,     0,    17,     0,    13,    64,    34,
      35,    36,    38,    39,    41,    42,    46,    47,    44,    45,
      49,    50,    52,    54,    56,    58,    60,     0,    77,   189,
     168,     0,     0,   164,     0,   162,     0,     0,   150,   152,
     157,     0,   173,   121,   124,    24,   184,     0,     0,     0,
       0,     0,    32,    12,     0,    10,     0,   169,   163,   165,
     170,     0,   166,     0,   174,   176,   196,   198,   199,     0,
       0,     0,    18,    62,   171,   167,     0,     0,   201,     0,
     197,   200,   202
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   109,   110,   111,   274,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     208,   127,   151,    54,    55,    45,    46,    26,    27,    28,
      29,    77,    78,    79,   166,   167,    30,    65,    66,    31,
      32,    33,    34,    43,   301,   144,   145,   146,   190,   302,
     240,   159,   250,   128,   129,   130,    57,   132,   133,   134,
     135,   136,    35,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -217
static const yytype_int16 yypact[] =
{
     955,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,     1,     2,   -20,  -217,    14,  1207,  1207,  -217,     9,
    -217,  1207,  1069,    37,    12,   883,  -217,  -217,   -73,    29,
     -24,  -217,  -217,   -20,  -217,   -49,  -217,  1042,  -217,  -217,
     -34,  1130,  -217,   297,  -217,    14,  -217,  1069,   976,   643,
      37,  -217,  -217,    29,    27,   -29,  -217,  -217,  -217,  -217,
       2,  -217,   398,  -217,  1069,  1130,  1130,  1001,  -217,    43,
    1130,  -217,    -8,  -217,  -217,  -217,   315,   808,   808,   820,
      11,    69,    72,    81,   583,    84,   181,    99,   107,   600,
     701,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,   182,   340,   820,  -217,    67,   128,   194,    41,    63,
     140,   147,   142,   222,    30,  -217,  -217,    -2,  -217,  -217,
    -217,   380,   440,  -217,  -217,  -217,  -217,   154,  -217,  -217,
    -217,  -217,    44,   174,   173,  -217,    35,  -217,  -217,  -217,
    -217,   176,   -27,   820,    29,  -217,  -217,   398,  -217,  -217,
    -217,  1022,  -217,  -217,  -217,   820,    55,  -217,   161,  -217,
     583,   701,  -217,   820,  -217,  -217,   169,   583,   820,   820,
     820,   199,   618,   171,  -217,  -217,  -217,    62,    70,    66,
     192,   266,  -217,  -217,   683,   820,   267,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,   820,  -217,
     820,   820,   820,   820,   820,   820,   820,   820,   820,   820,
     820,   820,   820,   820,   820,   820,   820,   820,   820,   820,
    -217,  -217,   500,  -217,  -217,   903,   766,  -217,    61,  -217,
     143,  -217,  1181,  -217,   268,  -217,  -217,  -217,  -217,  -217,
     -22,  -217,  -217,    43,  -217,   820,  -217,   198,   583,  -217,
      77,   108,   109,   200,   618,  -217,  -217,  -217,  1109,   160,
    -217,   820,  -217,  -217,   121,  -217,   162,  -217,  -217,  -217,
    -217,  -217,    67,    67,   128,   128,   194,   194,   194,   194,
      41,    41,    63,   140,   147,   142,   222,    -6,  -217,  -217,
    -217,   202,   203,  -217,   204,   143,  1161,   784,  -217,  -217,
    -217,   535,  -217,  -217,  -217,  -217,  -217,   583,   583,   583,
     820,   796,  -217,  -217,   820,  -217,   820,  -217,  -217,  -217,
    -217,   205,  -217,   206,  -217,  -217,   221,  -217,  -217,   122,
     583,   124,  -217,  -217,  -217,  -217,   583,   184,  -217,   583,
    -217,  -217,  -217
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,  -217,  -217,  -217,   -50,  -217,  -112,    31,     8,
      10,    25,    59,    60,    64,    65,    58,  -217,   -57,   -13,
    -217,   -89,   -46,     7,     0,  -217,   217,  -217,   138,  -217,
    -217,   213,   -69,   -59,  -217,    40,  -217,   227,   156,    51,
     -10,   -30,    -9,  -217,   -55,  -217,    52,  -217,   125,  -122,
    -216,  -129,  -217,   -54,  -217,    -3,    19,   166,  -163,  -217,
    -217,  -217,  -217,   277,  -217
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      25,   209,   150,   143,    60,    38,     1,    24,   164,   149,
     187,   188,    40,    50,    42,    47,     1,   162,     1,   264,
     239,   169,   305,    63,    16,    17,    48,    49,   249,    56,
      70,    52,   150,    64,    69,    25,   172,   174,   175,   149,
     181,   189,    24,   176,    73,   137,    71,     1,     1,   227,
     154,    67,   154,   305,   139,   217,   218,   311,   142,   158,
     137,    23,    75,   149,   138,     1,    74,   270,   155,   168,
     246,   160,   131,   229,    41,   312,    22,   229,   234,   221,
     222,   138,   188,    23,   188,   170,    22,   326,    22,   260,
     261,   262,   164,   230,    68,    23,   150,    39,   279,   280,
     281,   321,    80,   149,   177,    51,   276,   247,   150,    44,
     243,    58,   189,    59,   244,   149,   256,    22,   235,   252,
     236,   153,   228,   259,    23,    23,    80,    80,    80,   219,
     220,    80,   237,   238,   253,   235,   165,   236,   138,   297,
     268,   229,   236,   178,   158,   267,   179,    23,   210,   229,
     254,    80,   317,   211,   212,   180,   229,   266,   182,   322,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   234,   150,
     269,   275,   335,   318,   319,   183,   149,   229,   229,    76,
     304,   191,   192,   193,   184,   278,   323,   347,   150,   349,
     324,   229,   185,   229,   316,   149,   215,   216,    60,   314,
     213,   214,    80,    76,    76,    76,   298,   306,    76,   307,
     223,   149,    80,   284,   285,    40,   238,   286,   287,   288,
     289,   339,   341,   225,   268,   142,   236,   224,    76,   325,
     226,   229,   142,   168,   282,   283,   290,   291,    72,   241,
     150,   331,   242,   245,   255,   263,   194,   149,   195,   269,
     196,   333,   258,   336,   337,   338,   265,   271,   142,   343,
     272,   277,   310,   315,   320,   346,   149,   327,   328,   351,
     344,   329,   292,   345,   293,   296,   348,   156,   161,   294,
     152,   295,   350,   313,   309,   352,   257,   232,   158,    76,
      81,    82,    83,    84,    85,    86,   142,    87,    88,    76,
     248,   342,    62,     0,     0,     0,     0,     0,    81,   147,
      83,    84,    85,    86,     0,    87,    88,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    89,    90,
      91,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,   100,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,    81,    82,    83,    84,    85,    86,   171,
      87,    88,   107,    53,   108,   101,   102,   103,   104,   105,
     106,    81,   147,    83,    84,    85,    86,     0,    87,    88,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    89,    90,    91,   207,    92,    93,    94,    95,    96,
      97,    98,    99,    81,    82,    83,    84,    85,    86,     0,
      87,    88,     0,     0,   100,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,     0,     0,     0,     0,
       0,     0,   100,     0,     0,   107,    53,   231,   101,   102,
     103,   104,   105,   106,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,   157,    92,    93,    94,    95,    96,
      97,    98,    99,    81,    82,    83,    84,    85,    86,     0,
      87,    88,     0,     0,   100,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,    53,   233,    81,   147,
      83,    84,    85,    86,     0,    87,    88,     0,     0,     0,
       0,    89,    90,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,    81,    82,    83,    84,
      85,    86,     0,    87,    88,   107,    53,   299,     0,     0,
       0,     0,     0,    81,   147,    83,    84,    85,    86,   100,
      87,    88,     0,     0,     0,   101,   102,   103,   104,   105,
     106,    81,   147,    83,    84,    85,    86,     0,    87,    88,
       0,   157,   334,     0,    89,    90,    91,     0,    92,    93,
      94,    95,    96,    97,    98,    99,    81,   147,    83,    84,
      85,    86,     0,    87,    88,     0,     0,   100,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,     0,   100,     0,     0,     0,   107,    53,
     101,   102,   103,   104,   105,   106,    81,   147,    83,    84,
      85,    86,   100,    87,    88,   186,     0,     0,   101,   102,
     103,   104,   105,   106,    81,   147,    83,    84,    85,    86,
       0,    87,    88,   107,     0,     0,     0,   100,     0,     0,
     148,     0,     0,   101,   102,   103,   104,   105,   106,     0,
       0,     2,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,   100,   273,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    81,
     147,    83,    84,    85,    86,   100,    87,    88,     0,     0,
       0,   101,   102,   103,   104,   105,   106,    81,   147,    83,
      84,    85,    86,     0,    87,    88,     0,     0,     0,    81,
     147,    83,    84,    85,    86,     0,    87,    88,     0,     0,
       0,    81,   147,    83,    84,    85,    86,     0,    87,    88,
       0,     0,     0,    81,   147,    83,    84,    85,    86,     0,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,   303,     0,     0,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,     0,   100,     0,
       0,   332,     0,     0,   101,   102,   103,   104,   105,   106,
     100,   340,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,   173,    61,     0,     0,     0,     1,   101,   102,
     103,   104,   105,   106,   100,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,     0,     1,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,     0,     1,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   235,   300,   236,
     140,     0,     0,     0,    23,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,    22,
       0,     2,     0,     0,     0,     0,    23,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   141,     2,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,   163,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,     0,    53,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       2,     0,     0,     0,     0,    53,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,   268,   300,   236,     0,     0,     0,     0,
      23,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   308,     0,     0,     0,     0,   330,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,   113,    59,    58,    34,     4,     4,     0,    77,    59,
      99,   100,    22,     4,    23,    25,     4,    76,     4,   182,
     142,    80,   238,    96,    44,    45,    26,    27,   157,    32,
      79,    31,    89,     4,    43,    35,    86,    87,    88,    89,
      94,   100,    35,    89,    47,    55,    95,     4,     4,    19,
      79,    75,    79,   269,    57,    14,    15,    79,    58,    72,
      70,    81,    96,   113,    57,     4,    47,   189,    97,    79,
      97,    74,    53,    79,    23,    97,    74,    79,   132,    16,
      17,    74,   171,    81,   173,    93,    74,    93,    74,   178,
     179,   180,   161,    95,    43,    81,   153,    96,   210,   211,
     212,   264,    51,   153,    93,    96,   195,   153,   165,    95,
      75,    74,   171,    76,    79,   165,   170,    74,    74,   165,
      76,    94,    92,   177,    81,    81,    75,    76,    77,    88,
      89,    80,   142,   142,    79,    74,    93,    76,   131,   228,
      74,    79,    76,    74,   157,    75,    74,    81,    81,    79,
      95,   100,    75,    86,    87,    74,    79,    95,    74,   271,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   232,   236,
     189,   194,   311,    75,    75,     4,   236,    79,    79,    51,
     236,     9,    10,    11,    95,   208,    75,    75,   255,    75,
      79,    79,    95,    79,   258,   255,    12,    13,   238,   255,
      82,    83,   161,    75,    76,    77,   229,    74,    80,    76,
      80,   271,   171,   215,   216,   235,   235,   217,   218,   219,
     220,   320,   321,    91,    74,   235,    76,    90,   100,    77,
      18,    79,   242,   253,   213,   214,   221,   222,    94,    75,
     307,   306,    79,    77,    93,    56,    74,   307,    76,   268,
      78,   307,    93,   317,   318,   319,    95,    75,   268,   326,
       4,     4,     4,    75,    74,    54,   326,    75,    75,    95,
      75,    77,   223,    77,   224,   227,   340,    70,    75,   225,
      63,   226,   346,   253,   242,   349,   171,   131,   311,   161,
       3,     4,     5,     6,     7,     8,   306,    10,    11,   171,
     154,   324,    35,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,     3,     4,     5,     6,     7,     8,    74,
      10,    11,    95,    96,    97,    80,    81,    82,    83,    84,
      85,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    94,    55,    56,    57,    58,    59,
      60,    61,    62,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    95,    96,    97,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    96,    55,    56,    57,    58,    59,
      60,    61,    62,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    74,
      10,    11,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    96,    97,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    95,    96,
      80,    81,    82,    83,    84,    85,     3,     4,     5,     6,
       7,     8,    74,    10,    11,    95,    -1,    -1,    80,    81,
      82,    83,    84,    85,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    95,    -1,    -1,    -1,    74,    -1,    -1,
      77,    -1,    -1,    80,    81,    82,    83,    84,    85,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,     3,
       4,     5,     6,     7,     8,    74,    10,    11,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      74,    75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    74,     0,    -1,    -1,    -1,     4,    80,    81,
      82,    83,    84,    85,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    74,    -1,     4,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
       4,    -1,    -1,    -1,    81,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    74,
      -1,    30,    -1,    -1,    -1,    -1,    81,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    75,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    97,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      30,    -1,    -1,    -1,    -1,    96,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    75,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    74,    81,   121,   122,   125,   126,   127,   128,
     134,   137,   138,   139,   140,   160,   161,   162,     4,    96,
     138,   137,   140,   141,    95,   123,   124,   138,   122,   122,
       4,    96,   122,    96,   121,   122,   153,   154,    74,    76,
     139,     0,   161,    96,     4,   135,   136,    75,   137,   140,
      79,    95,    94,   153,   154,    96,   126,   129,   130,   131,
     137,     3,     4,     5,     6,     7,     8,    10,    11,    51,
      52,    53,    55,    56,    57,    58,    59,    60,    61,    62,
      74,    80,    81,    82,    83,    84,    85,    95,    97,    99,
     100,   101,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   119,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   138,   121,   153,
       4,    75,   122,   142,   143,   144,   145,     4,    77,   103,
     116,   120,   135,    94,    79,    97,   124,    96,   117,   149,
     153,   129,   131,    97,   130,    93,   132,   133,   138,   131,
      93,    74,   103,    74,   103,   103,   120,    93,    74,    74,
      74,   151,    74,     4,    95,    95,    95,   119,   119,   131,
     146,     9,    10,    11,    74,    76,    78,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    94,   118,   105,
      81,    86,    87,    82,    83,    12,    13,    14,    15,    88,
      89,    16,    17,    80,    90,    91,    18,    19,    92,    79,
      95,    97,   155,    97,   151,    74,    76,   138,   140,   147,
     148,    75,    79,    75,    79,    77,    97,   120,   136,   149,
     150,    97,   120,    79,    95,    93,   151,   146,    93,   151,
     119,   119,   119,    56,   156,    95,    95,    75,    74,   140,
     147,    75,     4,    75,   102,   117,   119,     4,   117,   105,
     105,   105,   106,   106,   107,   107,   108,   108,   108,   108,
     109,   109,   110,   111,   112,   113,   114,   119,   117,    97,
      75,   142,   147,    77,   120,   148,    74,    76,    50,   144,
       4,    79,    97,   133,   120,    75,   151,    75,    75,    75,
      74,   156,   105,    75,    79,    77,    93,    75,    75,    77,
      75,   142,    77,   120,    97,   149,   151,   151,   151,   119,
      75,   119,   117,   116,    75,    77,    54,    75,   151,    75,
     151,    95,   151
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 163 "c2fsmd.y"
    {	sprintf((yyval.typel).str,"%s",(yyvsp[(1) - (1)].str));(yyval.typel).vart=Int;	;}
    break;

  case 3:
#line 164 "c2fsmd.y"
    {	sprintf((yyval.typel).str,"%s",(yyvsp[(1) - (1)].str));(yyval.typel).vart=Float;	;}
    break;

  case 4:
#line 165 "c2fsmd.y"
    {	strcpy((yyval.typel).str,(yyvsp[(1) - (1)].str));(yyval.typel).vart=Stor;	;}
    break;

  case 5:
#line 169 "c2fsmd.y"
    { 		printf("** Parser : identifier found in expression  %s\n",(yyvsp[(1) - (1)].str));
								//$$.str=$1;
								(yyval.exprso).NCell=create_term((yyvsp[(1) - (1)].str));
								(yyval.exprso).DTr=NULL;
								(yyval.exprso).inc=0;
							;}
    break;

  case 6:
#line 175 "c2fsmd.y"
    { 	//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"%s",$1.str);
								(yyval.exprso).NCell=create_NC();
								(yyval.exprso).NCell->type='C';
								(yyval.exprso).NCell->inc=fvalue((yyvsp[(1) - (1)].typel).str,(yyvsp[(1) - (1)].typel).vart);
								(yyval.exprso).DTr=NULL;
								(yyval.exprso).inc=0;
							;}
    break;

  case 7:
#line 183 "c2fsmd.y"
    { 	//$$.str=$1;
								(yyval.exprso).NCell=NULL;
								/*varying*/
								(yyval.exprso).DTr=NULL;
								(yyval.exprso).inc=0;
							;}
    break;

  case 8:
#line 189 "c2fsmd.y"
    { 	//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"(%s)",$2.str);
								(yyval.exprso).NCell=(yyvsp[(2) - (3)].exprsn).NCell;
								if((yyvsp[(2) - (3)].exprsn).DTL==NULL) (yyval.exprso).DTr=NULL;
								else {
								while((yyvsp[(2) - (3)].exprsn).DTL->next!=NULL)
									(yyvsp[(2) - (3)].exprsn).DTL=(yyvsp[(2) - (3)].exprsn).DTL->next;
								(yyval.exprso).DTr=(yyvsp[(2) - (3)].exprsn).DTL->trans;
								}
								(yyval.exprso).inc=(yyvsp[(2) - (3)].exprsn).inc;
							;}
    break;

  case 9:
#line 203 "c2fsmd.y"
    { 		//$$.str=$1.str;
									(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
									(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
									(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
								;}
    break;

  case 10:
#line 208 "c2fsmd.y"
    {
									//$$.str=(char*)malloc(40*sizeof(char));
									//sprintf($$.str,"%s[%s]",$1.str,$3.str);
									(yyval.exprso).NCell=(yyvsp[(1) - (4)].exprso).NCell;
								if((yyvsp[(1) - (4)].exprso).NCell->link->type!='A'){
									(yyvsp[(1) - (4)].exprso).NCell->link->type='A';
									(yyvsp[(1) - (4)].exprso).NCell->link->link=(yyvsp[(3) - (4)].exprsn).NCell;
									}
								else {
									(yyvsp[(1) - (4)].exprso).NCell=(yyvsp[(1) - (4)].exprso).NCell->link->link;
									while((yyvsp[(1) - (4)].exprso).NCell->list!=NULL)
									   (yyvsp[(1) - (4)].exprso).NCell=(yyvsp[(1) - (4)].exprso).NCell->list;
									(yyvsp[(1) - (4)].exprso).NCell->list=(yyvsp[(3) - (4)].exprsn).NCell;
									}
									if((yyvsp[(3) - (4)].exprsn).DTL!=NULL)
									(yyval.exprso).DTr=(yyvsp[(3) - (4)].exprsn).DTL->trans;
									else (yyval.exprso).DTr=NULL;
									(yyval.exprso).inc=0;
								;}
    break;

  case 11:
#line 227 "c2fsmd.y"
    {
								//$$.str=$1.str;
								//strcat($$.str,"()");
								if((yyvsp[(1) - (3)].exprso).NCell->type != 'U'){
								printf("Error please check in line number : %s\n",line_count(0));
								printf("Possible function name and a declared variable match \n");
								exit(1); 
								}
								// printf("Ok as of now\n");exit(1);
								(yyvsp[(1) - (3)].exprso).NCell->type = 'f';
							;}
    break;

  case 12:
#line 239 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s(%s)",$1.str,$3.str);
								if((yyvsp[(1) - (4)].exprso).NCell->type != 'U'){
								printf("Error please check in line number : %s\n",line_count(0));
								printf("Possible function name and a declared variable match \n");
								exit(1); 
								}
								// printf("Ok as of now\n");exit(1);
								(yyvsp[(1) - (4)].exprso).NCell->type = 'f';
								(yyval.exprso).NCell=(yyvsp[(1) - (4)].exprso).NCell;
								(yyvsp[(1) - (4)].exprso).NCell->link=(yyvsp[(3) - (4)].exprsn).NCell;
								(yyval.exprso).DTr=NULL;
							;}
    break;

  case 15:
#line 255 "c2fsmd.y"
    { 		//$$.str=(char*)malloc(40*sizeof(char));
									//sprintf($$.str,"%s++",$1.str);
									tee=create_NC();
									tee->type='S';
									tee->inc=ADD;
									tee->link=copy_NC((yyvsp[(1) - (2)].exprso).NCell);
									tee->link->list=create_NC();
									tee->link->list->type='C';
									tee->link->list->inc=1;
									(yyval.exprso).DTr=create_DT((yyvsp[(1) - (2)].exprso).NCell,tee);
									(yyval.exprso).NCell=(yyvsp[(1) - (2)].exprso).NCell;
									(yyval.exprso).inc=1+(yyvsp[(1) - (2)].exprso).inc;
								;}
    break;

  case 16:
#line 268 "c2fsmd.y"
    { 		//$$.str=$1.str;
									//strcat($$.str,"--");
									tee=create_NC();
									tee->type='S';
									tee->inc=SUB;
									tee->link=copy_NC((yyvsp[(1) - (2)].exprso).NCell);
									tee->link->list=create_NC();
									tee->link->list->type='C';
									tee->link->list->inc=1;
									(yyval.exprso).DTr=create_DT((yyvsp[(1) - (2)].exprso).NCell,tee);
									(yyval.exprso).NCell=(yyvsp[(1) - (2)].exprso).NCell;
									(yyval.exprso).inc=1+(yyvsp[(1) - (2)].exprso).inc;
								;}
    break;

  case 17:
#line 284 "c2fsmd.y"
    { 	//$$.str=$1.str; 
									(yyval.exprsn).NCell=(yyvsp[(1) - (1)].exprsn).NCell;
									(yyval.exprsn).DTL=(yyvsp[(1) - (1)].exprsn).DTL;
									(yyval.exprsn).inc=(yyvsp[(1) - (1)].exprsn).inc;
								;}
    break;

  case 18:
#line 290 "c2fsmd.y"
    {
									//$$.str=(char*)malloc(40*sizeof(char));
									//sprintf($$.str,"%s,%s",$1.str,$3.str);
									(yyval.exprsn).NCell=(yyvsp[(1) - (3)].exprsn).NCell;
									while((yyvsp[(1) - (3)].exprsn).NCell->list!=NULL)
										(yyvsp[(1) - (3)].exprsn).NCell=(yyvsp[(1) - (3)].exprsn).NCell->list;
									(yyvsp[(1) - (3)].exprsn).NCell->list=(yyvsp[(3) - (3)].exprsn).NCell;
									(yyval.exprsn).DTL = (yyvsp[(1) - (3)].exprsn).DTL; // to be changed if necessary :)
								;}
    break;

  case 19:
#line 302 "c2fsmd.y"
    {		//$$.str=$1.str;
									//$$.NCell=$1.NCell;
									(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
									(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
								;}
    break;

  case 20:
#line 307 "c2fsmd.y"
    {
									//$$.str=(char*)malloc(40*sizeof(char));
									//sprintf($$.str,"++%s",$2.str);
									(yyval.exprso).NCell=create_NC();
									(yyval.exprso).NCell->type='S';
									(yyval.exprso).NCell->inc=ADD;
									(yyval.exprso).NCell->link=(yyvsp[(2) - (2)].exprso).NCell;
									(yyval.exprso).NCell->link->list=create_NC();
									(yyval.exprso).NCell->link->list->type='C';
									(yyval.exprso).NCell->link->list->inc=1;
									tee=copy_NC((yyval.exprso).NCell);
									(yyval.exprso).DTr=create_DT((yyvsp[(2) - (2)].exprso).NCell,tee);
									(yyval.exprso).inc=(yyvsp[(2) - (2)].exprso).inc+10;
								;}
    break;

  case 21:
#line 321 "c2fsmd.y"
    {		//$$.str=(char*)malloc(40*sizeof(char));
									//sprintf($$.str,"--%s",$2.str);
									(yyval.exprso).NCell=create_NC();
									(yyval.exprso).NCell->type='S';
									(yyval.exprso).NCell->inc=SUB;
									(yyval.exprso).NCell->link=(yyvsp[(2) - (2)].exprso).NCell;
									(yyval.exprso).NCell->link->list=create_NC();
									(yyval.exprso).NCell->link->list->type='C';
									(yyval.exprso).NCell->link->list->inc=1;
									tee=copy_NC((yyval.exprso).NCell);
									(yyval.exprso).DTr=create_DT((yyvsp[(2) - (2)].exprso).NCell,tee);
									(yyval.exprso).inc=(yyvsp[(2) - (2)].exprso).inc+10;
								;}
    break;

  case 22:
#line 335 "c2fsmd.y"
    {	//$$.str=(char*)malloc(40*sizeof(char));
									//sprintf($$.str,"%s%s",$1.str,$2.str);
									(yyval.exprso).NCell=create_NC();
									if((yyvsp[(1) - (2)].unop).op==ADD) {
									(yyval.exprso).NCell->inc=(yyvsp[(2) - (2)].exprso).NCell->inc;
									(yyval.exprso).NCell->type='S';}
									else if((yyvsp[(1) - (2)].unop).op==SUB) {
									(yyval.exprso).NCell->inc=-(yyvsp[(2) - (2)].exprso).NCell->inc;
									(yyval.exprso).NCell->type='S';}
									else if((yyvsp[(1) - (2)].unop).op==NEG){
									(yyval.exprso).NCell->inc=NEG;
									(yyval.exprso).NCell->type='O';}
									else if((yyvsp[(1) - (2)].unop).op==NOT){
									(yyval.exprso).NCell->inc=NOT;
									(yyval.exprso).NCell->type='O';}
									else {
									(yyval.exprso).NCell->type='T';
									(yyval.exprso).NCell->inc=IDK;}
									(yyval.exprso).NCell->link=(yyvsp[(2) - (2)].exprso).NCell;
									(yyval.exprso).DTr=NULL;
									(yyval.exprso).inc=(yyvsp[(2) - (2)].exprso).inc;
								;}
    break;

  case 23:
#line 357 "c2fsmd.y"
    {	(yyval.exprso).NCell=NULL;
							(yyval.exprso).DTr=NULL;
								(yyval.exprso).inc=0; ;}
    break;

  case 24:
#line 360 "c2fsmd.y"
    {	(yyval.exprso).NCell=NULL;
							(yyval.exprso).DTr=NULL;
							(yyval.exprso).inc=0; ;}
    break;

  case 25:
#line 366 "c2fsmd.y"
    {strcpy((yyval.unop).str,"&");(yyval.unop).op=0;/*did not keep any operation for this*/;}
    break;

  case 26:
#line 367 "c2fsmd.y"
    {strcpy((yyval.unop).str,"*");(yyval.unop).op=MUL;;}
    break;

  case 27:
#line 368 "c2fsmd.y"
    {strcpy((yyval.unop).str,"+");(yyval.unop).op=ADD;;}
    break;

  case 28:
#line 369 "c2fsmd.y"
    {strcpy((yyval.unop).str,"-");(yyval.unop).op=SUB;;}
    break;

  case 29:
#line 370 "c2fsmd.y"
    {strcpy((yyval.unop).str,"~");(yyval.unop).op=NEG;;}
    break;

  case 30:
#line 371 "c2fsmd.y"
    {strcpy((yyval.unop).str,"!");(yyval.unop).op=NOT;;}
    break;

  case 31:
#line 375 "c2fsmd.y"
    {		//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 32:
#line 381 "c2fsmd.y"
    {	//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"(int)%s",$4.str);
								/* no declarations for type_name and considering */
								/* present cases as integer itself */
								(yyval.exprso).NCell=(yyvsp[(4) - (4)].exprso).NCell;
								/* change data type? */
								(yyval.exprso).DTr=(yyvsp[(4) - (4)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(4) - (4)].exprso).inc;
							;}
    break;

  case 33:
#line 393 "c2fsmd.y"
    {		//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 34:
#line 398 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s*%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,MUL);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 35:
#line 407 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s/%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,DIV);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 36:
#line 416 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s%%%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,REM);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 37:
#line 428 "c2fsmd.y"
    {
								//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 38:
#line 434 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s+%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,ADD);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 39:
#line 443 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s-%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,SUB);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 40:
#line 455 "c2fsmd.y"
    {		//$$.str=$1.str;
								//$$.NCell=$1.NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 41:
#line 460 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s<<%s",$1.str,$3.str);
								(yyval.exprso).NCell=NULL;
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 42:
#line 469 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s>>%s",$1.str,$3.str);
								(yyval.exprso).NCell=NULL;
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 43:
#line 481 "c2fsmd.y"
    {		//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 44:
#line 486 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s<%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,LTR);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 45:
#line 495 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s>%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,GTR);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 46:
#line 504 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s<=%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,LER);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 47:
#line 513 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s>=%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,GER);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 48:
#line 525 "c2fsmd.y"
    {		//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 49:
#line 530 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s==%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,EQR);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 50:
#line 539 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s!=%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,NER);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 51:
#line 551 "c2fsmd.y"
    {		//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 52:
#line 556 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s&%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,AND);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 53:
#line 568 "c2fsmd.y"
    {		//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 54:
#line 573 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s^%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,XOR);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 55:
#line 585 "c2fsmd.y"
    {
								//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 56:
#line 591 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								// sprintf($$.str,"%s|%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,ORP);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 57:
#line 603 "c2fsmd.y"
    {
								//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 58:
#line 609 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s&&%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,ANDOP);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 59:
#line 621 "c2fsmd.y"
    {
								//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 60:
#line 627 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s||%s",$1.str,$3.str);
								(yyval.exprso).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprso).NCell,OROP);
								if((yyvsp[(1) - (3)].exprso).DTr==NULL)
								(yyval.exprso).DTr=(yyvsp[(3) - (3)].exprso).DTr;
								else (yyval.exprso).DTr=(yyvsp[(1) - (3)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (3)].exprso).inc+(yyvsp[(3) - (3)].exprso).inc;
							;}
    break;

  case 61:
#line 639 "c2fsmd.y"
    {
								//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 62:
#line 645 "c2fsmd.y"
    {
								// $$.str=$1.str;
								/* states need to b added here itself */
								/* so total data construction need to be changed */
								/* $$.inc=$1.inc+$3.inc; check once */
							;}
    break;

  case 63:
#line 654 "c2fsmd.y"
    {
								//$$.str=$1.str;
								(yyval.exprsn).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								if((yyvsp[(1) - (1)].exprso).DTr!=NULL){
								(yyval.exprsn).DTL=(DT_LIST *)malloc(sizeof(DT_LIST));
								(yyval.exprsn).DTL->trans=(yyvsp[(1) - (1)].exprso).DTr;}
								else (yyval.exprsn).DTL=NULL;
								(yyval.exprsn).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 64:
#line 663 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"%s%s%s",$1.str,$2.str,$3.str);
									tee=copy_NC((yyvsp[(1) - (3)].exprso).NCell);
								if((yyvsp[(2) - (3)].unop).op!=EQU) {
								(yyval.exprsn).NCell=link_NC((yyvsp[(1) - (3)].exprso).NCell,(yyvsp[(3) - (3)].exprsn).NCell,(yyvsp[(2) - (3)].unop).op);
								}
								else {(yyval.exprsn).NCell=(yyvsp[(3) - (3)].exprsn).NCell;}
								(yyval.exprsn).DTL=(DT_LIST *)malloc(sizeof(DT_LIST));
								(yyval.exprsn).DTL->trans=create_DT(tee,(yyval.exprsn).NCell);
								free(tee);
								if((yyvsp[(3) - (3)].exprsn).DTL!=NULL) {
									// $$.DTL->next=(DT_LIST *)malloc(sizeof(DT_LIST));
									(yyval.exprsn).DTL->next=(yyvsp[(3) - (3)].exprsn).DTL;
								}
								(yyval.exprsn).inc=(yyvsp[(3) - (3)].exprsn).inc;
							;}
    break;

  case 65:
#line 683 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"=");(yyval.unop).op=EQU;;}
    break;

  case 66:
#line 684 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"*=");(yyval.unop).op=MUL;;}
    break;

  case 67:
#line 685 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"/=");(yyval.unop).op=DIV;;}
    break;

  case 68:
#line 686 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"%=");(yyval.unop).op=REM;;}
    break;

  case 69:
#line 687 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"+=");(yyval.unop).op=ADD;;}
    break;

  case 70:
#line 688 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"-=");(yyval.unop).op=SUB;;}
    break;

  case 71:
#line 689 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"<<=");(yyval.unop).op=ELF;;}
    break;

  case 72:
#line 690 "c2fsmd.y"
    {	strcpy((yyval.unop).str,">>=");(yyval.unop).op=ERF;;}
    break;

  case 73:
#line 691 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"&=");(yyval.unop).op=AND;;}
    break;

  case 74:
#line 692 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"^=");(yyval.unop).op=XOR;;}
    break;

  case 75:
#line 693 "c2fsmd.y"
    {	strcpy((yyval.unop).str,"|=");(yyval.unop).op=ORP;;}
    break;

  case 76:
#line 697 "c2fsmd.y"
    {	//$$.str=$1.str;
								(yyval.exprsn).NCell=(yyvsp[(1) - (1)].exprsn).NCell;
								(yyval.exprsn).DTL=(yyvsp[(1) - (1)].exprsn).DTL;
								(yyval.exprsn).inc=(yyvsp[(1) - (1)].exprsn).inc;
							;}
    break;

  case 77:
#line 702 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s,%s",$1.str,$3.str);
								(yyval.exprsn).DTL=(yyvsp[(1) - (3)].exprsn).DTL;
								if((yyvsp[(1) - (3)].exprsn).DTL!=NULL){
								while((yyvsp[(1) - (3)].exprsn).DTL->next!=NULL)
									(yyvsp[(1) - (3)].exprsn).DTL=(yyvsp[(1) - (3)].exprsn).DTL->next;
								if((yyvsp[(3) - (3)].exprsn).DTL!=NULL){
								(yyvsp[(1) - (3)].exprsn).DTL->next=(DT_LIST *)malloc(sizeof(DT_LIST));
								(yyvsp[(1) - (3)].exprsn).DTL->next=(yyvsp[(3) - (3)].exprsn).DTL;
								}}
								else if((yyvsp[(3) - (3)].exprsn).DTL!=NULL) (yyval.exprsn).DTL=(yyvsp[(3) - (3)].exprsn).DTL;
								(yyval.exprsn).NCell=(yyvsp[(3) - (3)].exprsn).NCell;
								(yyval.exprsn).inc=2*(yyvsp[(1) - (3)].exprsn).inc+(yyvsp[(3) - (3)].exprsn).inc;
							;}
    break;

  case 78:
#line 720 "c2fsmd.y"
    {
								//$$.str=$1.str;
								(yyval.exprso).NCell=(yyvsp[(1) - (1)].exprso).NCell;
								(yyval.exprso).DTr=(yyvsp[(1) - (1)].exprso).DTr;
								(yyval.exprso).inc=(yyvsp[(1) - (1)].exprso).inc;
							;}
    break;

  case 79:
#line 729 "c2fsmd.y"
    {
								//$$.str=$1.str;
								strcat((yyval.dclrn).str,";");
								(yyval.dclrn).prev=-1;(yyval.dclrn).next=-1;
							;}
    break;

  case 80:
#line 734 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(40*sizeof(char));
								//sprintf($$.str,"%s %s;",$1.str,$2.str);
							if((yyvsp[(2) - (3)].dtls).DTL!=NULL){
								sprintf(c2f->states[state_count].state_id,"%s%d",temps,1000+state_count);
								c2f->numstates++;
								c2f->states[state_count].node_type=NORMAL;
								INfsmd(&c2f->states[prev_state],state_count,NULL,(yyvsp[(2) - (3)].dtls).DTL);
								(yyval.dclrn).prev=prev_state;
								(yyval.dclrn).next=state_count;
								prev_state=state_count;
								state_count++;
								}
							else{
								(yyval.dclrn).prev=-1;
								(yyval.dclrn).next=-1;
								}
								// printf("** Parser : declarations:= %s\n",$$.str);
								if((yyvsp[(2) - (3)].dtls).DTL==NULL) printf("no declarations listed\n");
								else printf("declarations\n");
							;}
    break;

  case 81:
#line 758 "c2fsmd.y"
    {	(yyval.typel).vart=0;strcpy((yyval.typel).str,"\0"); ;}
    break;

  case 82:
#line 759 "c2fsmd.y"
    {	(yyval.typel).vart=0;strcpy((yyval.typel).str,"\0"); ;}
    break;

  case 83:
#line 760 "c2fsmd.y"
    {	vartype=(yyval.typel).vart=(yyvsp[(1) - (1)].typel).vart;
								strcpy((yyval.typel).str,(yyvsp[(1) - (1)].typel).str);
							;}
    break;

  case 84:
#line 763 "c2fsmd.y"
    {(yyval.typel).vart=(yyvsp[(1) - (2)].typel).vart;
								sprintf((yyval.typel).str,"%s %s",(yyvsp[(1) - (2)].typel).str,(yyvsp[(2) - (2)].typel).str);
							;}
    break;

  case 85:
#line 766 "c2fsmd.y"
    {	(yyval.typel).vart=0;strcpy((yyval.typel).str,"\0"); ;}
    break;

  case 86:
#line 767 "c2fsmd.y"
    {	(yyval.typel).vart=0;strcpy((yyval.typel).str,"\0"); ;}
    break;

  case 87:
#line 771 "c2fsmd.y"
    {		//$$.str=$1.str;
								(yyval.dtls).DTL=(yyvsp[(1) - (1)].dtls).DTL;
							;}
    break;

  case 88:
#line 774 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"%s,%s",$1.str,$3.str);
								printf("~~~~~~~~~~~~~~ list : %s %s %s\n",(yyvsp[(1) - (3)].dtls).str,(yyvsp[(3) - (3)].dtls).str,(yyval.dtls).str);
							
								if((yyvsp[(1) - (3)].dtls).DTL==NULL) (yyval.dtls).DTL=(yyvsp[(3) - (3)].dtls).DTL;
								else {
									(yyval.dtls).DTL=(yyvsp[(1) - (3)].dtls).DTL;
									while((yyvsp[(1) - (3)].dtls).DTL->next!=NULL) (yyvsp[(1) - (3)].dtls).DTL=(yyvsp[(1) - (3)].dtls).DTL->next;
									(yyvsp[(1) - (3)].dtls).DTL->next=(yyvsp[(3) - (3)].dtls).DTL;
								}
							;}
    break;

  case 89:
#line 789 "c2fsmd.y"
    {		(yyval.dtls).DTL=searchinsert((yyvsp[(1) - (1)].ncls).idnt,(yyvsp[(1) - (1)].ncls).lst,NULL,vartype);
						if((yyval.dtls).DTL==NULL) printf("** Parser : No data intialization in id: %s\n",(yyvsp[(1) - (1)].ncls).idnt);
						//$$.str=$1.str;
						printf("******* Parser : cool inserted %s\n", (yyvsp[(1) - (1)].ncls).idnt);
					;}
    break;

  case 90:
#line 794 "c2fsmd.y"
    {
						(yyval.dtls).DTL=searchinsert((yyvsp[(1) - (3)].ncls).idnt,(yyvsp[(1) - (3)].ncls).lst,(yyvsp[(3) - (3)].ncls).lst,vartype);
						if((yyval.dtls).DTL==NULL) printf("** Parser : No data declaration in id: %s\n",(yyvsp[(1) - (3)].ncls).idnt);
						else printf("** Parser : data declared as id: %s\n",(yyvsp[(1) - (3)].ncls).idnt);
						//$$.str=(char*)malloc(40*sizeof(char));
						//sprintf($$.str,"%s=%s",$1.str,$3.str);
						printf("******* Parser : cool inserted %s\n", (yyvsp[(1) - (3)].ncls).idnt);
					;}
    break;

  case 96:
#line 813 "c2fsmd.y"
    { (yyval.typel).vart = 0;strcpy((yyval.typel).str,"void");;}
    break;

  case 97:
#line 814 "c2fsmd.y"
    { (yyval.typel).vart = Char;strcpy((yyval.typel).str,"char");;}
    break;

  case 98:
#line 815 "c2fsmd.y"
    { (yyval.typel).vart = Int;strcpy((yyval.typel).str,"short");;}
    break;

  case 99:
#line 816 "c2fsmd.y"
    { (yyval.typel).vart = Int;strcpy((yyval.typel).str,"int");;}
    break;

  case 100:
#line 817 "c2fsmd.y"
    { (yyval.typel).vart = Int;strcpy((yyval.typel).str,"long");;}
    break;

  case 101:
#line 818 "c2fsmd.y"
    { (yyval.typel).vart = Float;strcpy((yyval.typel).str,"float");;}
    break;

  case 102:
#line 819 "c2fsmd.y"
    { (yyval.typel).vart = Float;strcpy((yyval.typel).str,"float");;}
    break;

  case 103:
#line 820 "c2fsmd.y"
    { (yyval.typel).vart = 0;strcpy((yyval.typel).str,"signed");;}
    break;

  case 104:
#line 821 "c2fsmd.y"
    { (yyval.typel).vart = 0;strcpy((yyval.typel).str,"unsigned");;}
    break;

  case 105:
#line 822 "c2fsmd.y"
    { (yyval.typel).vart = 0;strcpy((yyval.typel).str,"\0");;}
    break;

  case 106:
#line 823 "c2fsmd.y"
    { (yyval.typel).vart = 0;strcpy((yyval.typel).str,"\0");;}
    break;

  case 107:
#line 824 "c2fsmd.y"
    { (yyval.typel).vart = 0;strcpy((yyval.typel).str,"\0");;}
    break;

  case 134:
#line 887 "c2fsmd.y"
    {
								(yyval.ncls).idnt=(yyvsp[(2) - (2)].ncls).idnt;
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"%s%s",$1.str,$2.str);
								LIST *temp;
								temp=(yyval.ncls).lst;
								while((yyvsp[(1) - (2)].ptrcnt).cnt>1){
								temp=create_list();
								temp=temp->next;
								(yyvsp[(1) - (2)].ptrcnt).cnt--;
								}
								temp=(yyvsp[(2) - (2)].ncls).lst;
							;}
    break;

  case 135:
#line 900 "c2fsmd.y"
    {		(yyval.ncls).idnt=(yyvsp[(1) - (1)].ncls).idnt;
								//$$.str=(char*)malloc(100*sizeof(char));
								//strcpy($$.str,$1.str);
								(yyval.ncls).lst=(yyvsp[(1) - (1)].ncls).lst;
							;}
    break;

  case 136:
#line 908 "c2fsmd.y"
    {		printf("** Parser : identifier found %s\n",(yyvsp[(1) - (1)].str));
								(yyval.ncls).idnt=(yyvsp[(1) - (1)].str);
								//$$.str=(char*)malloc(100*sizeof(char));
								//strcpy($$.str,$$.idnt);
								(yyval.ncls).lst=NULL;
							;}
    break;

  case 137:
#line 914 "c2fsmd.y"
    {	/*$$.str=NULL;*/(yyval.ncls).lst=NULL; ;}
    break;

  case 138:
#line 915 "c2fsmd.y"
    {
								(yyval.ncls).idnt=(yyvsp[(1) - (4)].ncls).idnt;
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"%s[%s]",$1.str,$3.str);
							if((yyvsp[(1) - (4)].ncls).lst==NULL){
								(yyval.ncls).lst=create_list();
								(yyval.ncls).lst->exprs=(yyvsp[(3) - (4)].exprso).NCell;
								}
							else{
								(yyval.ncls).lst=(yyvsp[(1) - (4)].ncls).lst;
								while((yyvsp[(1) - (4)].ncls).lst->next!=NULL)
									(yyvsp[(1) - (4)].ncls).lst=(yyvsp[(1) - (4)].ncls).lst->next;
								(yyvsp[(1) - (4)].ncls).lst->next=create_list(); 
								(yyvsp[(1) - (4)].ncls).lst->next->exprs=(yyvsp[(3) - (4)].exprso).NCell;
								}
								;}
    break;

  case 139:
#line 931 "c2fsmd.y"
    {
								(yyval.ncls).idnt=(yyvsp[(1) - (3)].ncls).idnt;
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"%s[]",$1.str);
								(yyval.ncls).lst=(yyvsp[(1) - (3)].ncls).lst;
						if((yyval.ncls).lst==NULL) {
								(yyval.ncls).lst=create_list();
								(yyval.ncls).lst->exprs=create_NC();
								(yyval.ncls).lst->exprs->type='C';
								(yyval.ncls).lst->exprs->inc=10;	/* default array size in a dimension */
							}
						else{
								while((yyvsp[(1) - (3)].ncls).lst->next!=NULL)
									(yyvsp[(1) - (3)].ncls).lst=(yyvsp[(1) - (3)].ncls).lst->next;
								(yyvsp[(1) - (3)].ncls).lst->next=create_list();
								(yyvsp[(1) - (3)].ncls).lst->next->exprs=create_NC();
								(yyvsp[(1) - (3)].ncls).lst->next->exprs->type='C';
								(yyvsp[(1) - (3)].ncls).lst->next->exprs->inc=10;	/* default array size in a dimension */
							}
						;}
    break;

  case 140:
#line 951 "c2fsmd.y"
    {
											//$$.str=$1.str;
											(yyval.ncls).lst=NULL;
											tmp=&(yyvsp[(3) - (4)].p_l);
											while(tmp!=NULL){
											// dtlst=searchinsert(tmp->idnt,NULL,NULL,tmp->vart);
											input_count++;
											tmp->index=indexoftable(tmp->idnt);
											tmp=tmp->next;
											}
											tmp=&(yyvsp[(3) - (4)].p_l);
											printf("**function inputs : \n");
											while(tmp!=NULL) {
												printf("%s %d\n",tmp->idnt,tmp->index); 
												tmp=tmp->next;
											}
											tmp1=copy_lisT(&(yyvsp[(3) - (4)].p_l));
										;}
    break;

  case 141:
#line 969 "c2fsmd.y"
    {	/*$$.str=$1.str;*/(yyval.ncls).lst=NULL;printf("22 plese check exit in 945 line n comment it\n"); exit(1);	;}
    break;

  case 142:
#line 970 "c2fsmd.y"
    {	/*$$.str=$1.str;*/(yyval.ncls).lst=NULL;/*printf("33\n");exit(1); */;}
    break;

  case 143:
#line 974 "c2fsmd.y"
    {strcpy((yyval.ptrcnt).str,"*");(yyval.ptrcnt).cnt=1;;}
    break;

  case 144:
#line 975 "c2fsmd.y"
    { strcpy((yyval.ptrcnt).str,"\0");(yyval.ptrcnt).cnt=0; ;}
    break;

  case 145:
#line 976 "c2fsmd.y"
    {sprintf((yyval.ptrcnt).str,"*%s",(yyvsp[(2) - (2)].ptrcnt).str);(yyval.ptrcnt).cnt++;;}
    break;

  case 146:
#line 977 "c2fsmd.y"
    { strcpy((yyval.ptrcnt).str,"\0");(yyval.ptrcnt).cnt=0; ;}
    break;

  case 149:
#line 987 "c2fsmd.y"
    {(yyval.p_l)=(yyvsp[(1) - (1)].p_l);;}
    break;

  case 150:
#line 988 "c2fsmd.y"
    {(yyval.p_l)=(yyvsp[(1) - (3)].p_l);;}
    break;

  case 151:
#line 992 "c2fsmd.y"
    { 	(yyval.p_l)=(yyvsp[(1) - (1)].p_l); 
								// printf("check point : \n%s\t%s\n",$1.idnt,$$.idnt);
							;}
    break;

  case 152:
#line 996 "c2fsmd.y"
    {	 (yyval.p_l)=(yyvsp[(1) - (3)].p_l); 
								// printf("**********************************************\n");
								// printf("%s\t%s\n",$1.idnt,$3.idnt);
								tmp=&(yyval.p_l);
								if(tmp->next!=NULL)
									while(tmp->next==NULL)
										tmp=tmp->next;
								tmp->next=&(yyvsp[(3) - (3)].p_l);
							;}
    break;

  case 153:
#line 1008 "c2fsmd.y"
    {
										(yyval.p_l).idnt=(yyvsp[(2) - (2)].ncls).idnt;
										(yyval.p_l).vart=(yyvsp[(1) - (2)].typel).vart;
										(yyval.p_l).index=-5;
										(yyval.p_l).next=NULL;
							dtlst=searchinsert((yyvsp[(2) - (2)].ncls).idnt,(yyvsp[(2) - (2)].ncls).lst,NULL,(yyvsp[(1) - (2)].typel).vart);
									;}
    break;

  case 154:
#line 1015 "c2fsmd.y"
    {(yyval.p_l).idnt=NULL;(yyval.p_l).vart=0; (yyval.p_l).index=-5;(yyval.p_l).next=NULL;
										printf("hello line no : 1002 (parameter_declaration : )\n");exit(1);
											;}
    break;

  case 155:
#line 1018 "c2fsmd.y"
    {(yyval.p_l).idnt=NULL;(yyval.p_l).vart=0; (yyval.p_l).index=-5;(yyval.p_l).next=NULL;
											;}
    break;

  case 172:
#line 1051 "c2fsmd.y"
    {	(yyval.ncls).lst=create_list();
								// $$.str=(char*)malloc(100*sizeof(char));
								//strcpy($$.str,$1.str);
								(yyval.ncls).lst->exprs=(yyvsp[(1) - (1)].exprsn).NCell;
							;}
    break;

  case 173:
#line 1056 "c2fsmd.y"
    { 		(yyval.ncls).lst=(yyvsp[(2) - (3)].ncls).lst;
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"{%s}",$2.str);
							;}
    break;

  case 174:
#line 1060 "c2fsmd.y"
    {
								(yyval.ncls).lst=(yyvsp[(2) - (4)].ncls).lst;
								if((yyvsp[(2) - (4)].ncls).lst==NULL) {
									(yyval.ncls).lst=create_list();
									(yyval.ncls).lst->next=create_list();
								}
							else{
								temp_int=1;
								while((yyvsp[(2) - (4)].ncls).lst->next!=NULL) {
									(yyvsp[(2) - (4)].ncls).lst=(yyvsp[(2) - (4)].ncls).lst->next;
									temp_int++;
									}
								while(temp_int>0){
									(yyvsp[(2) - (4)].ncls).lst->next=create_list();
									(yyvsp[(2) - (4)].ncls).lst=(yyvsp[(2) - (4)].ncls).lst->next;
									temp_int--;
								}
								}
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"{%s,}",$2.str);
							;}
    break;

  case 175:
#line 1084 "c2fsmd.y"
    {	//$$.str=(char*)malloc(100*sizeof(char));
								//strcpy($$.str,$1.str);
								(yyval.ncls).lst=(yyvsp[(1) - (1)].ncls).lst;
							;}
    break;

  case 176:
#line 1088 "c2fsmd.y"
    {
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"%s,%s",$1.str,$3.str);
								if((yyvsp[(1) - (3)].ncls).lst==NULL) {
									(yyval.ncls).lst=create_list();
									(yyval.ncls).lst->next=create_list();
								}
								else{
								(yyval.ncls).lst=(yyvsp[(1) - (3)].ncls).lst;
								while((yyvsp[(1) - (3)].ncls).lst->next!=NULL)
									(yyvsp[(1) - (3)].ncls).lst=(yyvsp[(1) - (3)].ncls).lst->next;
								(yyvsp[(1) - (3)].ncls).lst->next=(yyvsp[(3) - (3)].ncls).lst;
								}
							;}
    break;

  case 177:
#line 1105 "c2fsmd.y"
    {	(yyval.prns).prev=-1;(yyval.prns).next=-1;	;}
    break;

  case 178:
#line 1106 "c2fsmd.y"
    {	(yyval.prns).prev=(yyvsp[(1) - (1)].prns).prev;
								(yyval.prns).next=(yyvsp[(1) - (1)].prns).next;
							;}
    break;

  case 179:
#line 1109 "c2fsmd.y"
    {	
							if((yyvsp[(1) - (1)].exprsSTS).NCell!=NULL || (yyvsp[(1) - (1)].exprsSTS).DTL!=NULL){
								sprintf(c2f->states[state_count].state_id,"%s%d",temps,1000+state_count);
								c2f->states[state_count].node_type=NORMAL;
								c2f->numstates++;
								printf("** Parser : expression :: %s\n",string_DTr((yyvsp[(1) - (1)].exprsSTS).DTL->trans));
								INfsmd(&c2f->states[prev_state],state_count,NULL,(yyvsp[(1) - (1)].exprsSTS).DTL);
								(yyval.prns).prev=prev_state;
								(yyval.prns).next=state_count;
								prev_state=state_count;
								state_count++;
							}
							else{
								(yyval.prns).prev=-1;
								(yyval.prns).next=state_count;
								}
							;}
    break;

  case 180:
#line 1126 "c2fsmd.y"
    {	(yyval.prns).prev=(yyvsp[(1) - (1)].prns).prev;
								(yyval.prns).next=(yyvsp[(1) - (1)].prns).next;
							;}
    break;

  case 181:
#line 1129 "c2fsmd.y"
    {	(yyval.prns).prev=(yyvsp[(1) - (1)].prns).prev;
								(yyval.prns).next=(yyvsp[(1) - (1)].prns).next;
							;}
    break;

  case 182:
#line 1132 "c2fsmd.y"
    {	(yyval.prns).prev=(yyvsp[(1) - (1)].prns).prev;(yyval.prns).next=(yyvsp[(1) - (1)].prns).next;	;}
    break;

  case 186:
#line 1142 "c2fsmd.y"
    {	(yyval.prns).prev=-1;
								(yyval.prns).next=-1;
							;}
    break;

  case 187:
#line 1145 "c2fsmd.y"
    {	(yyval.prns).prev=(yyvsp[(2) - (3)].prns).prev;
								(yyval.prns).next=(yyvsp[(2) - (3)].prns).next;
							;}
    break;

  case 188:
#line 1148 "c2fsmd.y"
    {	(yyval.prns).prev=(yyvsp[(2) - (3)].prns).prev;
								(yyval.prns).next=(yyvsp[(2) - (3)].prns).next;
							;}
    break;

  case 189:
#line 1151 "c2fsmd.y"
    {
								if((yyvsp[(2) - (4)].prns).prev==-1) (yyval.prns).prev=(yyvsp[(3) - (4)].prns).prev;
								else (yyval.prns).prev=(yyvsp[(2) - (4)].prns).prev;
								
								if((yyvsp[(3) - (4)].prns).prev==-1) (yyval.prns).next=(yyvsp[(2) - (4)].prns).next;
								else (yyval.prns).next=(yyvsp[(3) - (4)].prns).next;
							;}
    break;

  case 190:
#line 1161 "c2fsmd.y"
    {	(yyval.prns).prev=(yyvsp[(1) - (1)].dclrn).prev;
								(yyval.prns).next=(yyvsp[(1) - (1)].dclrn).next;
							;}
    break;

  case 191:
#line 1164 "c2fsmd.y"
    {
								if((yyvsp[(1) - (2)].prns).prev==-1) (yyval.prns).prev=(yyvsp[(2) - (2)].dclrn).prev;
								else (yyval.prns).prev=(yyvsp[(1) - (2)].prns).prev;
								
								if((yyvsp[(2) - (2)].dclrn).prev==-1) (yyval.prns).next=(yyvsp[(1) - (2)].prns).next;
								else (yyval.prns).next=(yyvsp[(2) - (2)].dclrn).next;
							;}
    break;

  case 192:
#line 1174 "c2fsmd.y"
    {	(yyval.prns).prev=(yyvsp[(1) - (1)].prns).prev;
								(yyval.prns).next=(yyvsp[(1) - (1)].prns).next;
							;}
    break;

  case 193:
#line 1177 "c2fsmd.y"
    {	
								if((yyvsp[(1) - (2)].prns).prev==-1) (yyval.prns).prev=(yyvsp[(2) - (2)].prns).prev;
								else (yyval.prns).prev=(yyvsp[(1) - (2)].prns).prev;
								
								if((yyvsp[(2) - (2)].prns).prev==-1) (yyval.prns).next=(yyvsp[(1) - (2)].prns).next;
								else (yyval.prns).next=(yyvsp[(2) - (2)].prns).next;
							;}
    break;

  case 194:
#line 1187 "c2fsmd.y"
    { 			//$$.str=(char*)malloc(20*sizeof(char));
								//strcpy($$.str,";");
								(yyval.exprsSTS).DTL=NULL;
								(yyval.exprsSTS).prev=-1;
								(yyval.exprsSTS).next=state_count;
								(yyval.exprsSTS).NCell=NULL;
							;}
    break;

  case 195:
#line 1194 "c2fsmd.y"
    {			
								//$$.str=(char*)malloc(100*sizeof(char));
								//sprintf($$.str,"%s;",$1.str);
								(yyval.exprsSTS).prev=-1;
								(yyval.exprsSTS).next=state_count;
// print_NC($1.NCell);
// printf("string: %s\n",string_NC($1.NCell));
								(yyval.exprsSTS).NCell=(yyvsp[(1) - (2)].exprsn).NCell;
								(yyval.exprsSTS).DTL=(yyvsp[(1) - (2)].exprsn).DTL;
							;}
    break;

  case 196:
#line 1207 "c2fsmd.y"
    {
								if((yyvsp[(5) - (5)].prns).prev!=-1){
								// printf("in IF : %s & %s\n",string_NC($3.NCell),string_NC(NNC($3.NCell)));
								split((yyvsp[(5) - (5)].prns).prev,state_rcnt);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(5) - (5)].prns).prev,(yyvsp[(3) - (5)].exprsn).NCell,NULL);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(5) - (5)].prns).next,NNC((yyvsp[(3) - (5)].exprsn).NCell),NULL);
								(yyval.prns).prev=state_rcnt;
								(yyval.prns).next=(yyvsp[(5) - (5)].prns).next;
								state_rcnt--;
								
								#ifdef DOTTY
								l2->start=state_rcnt+1;
								l2->start1=(yyvsp[(5) - (5)].prns).prev;	// this stable
								l2->end=(yyvsp[(5) - (5)].prns).next;
								l2->type=IFL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count++;
								#endif
								
								}
								else { (yyval.prns).prev=(yyvsp[(5) - (5)].prns).prev;(yyval.prns).next=(yyvsp[(5) - (5)].prns).next; }
							;}
    break;

  case 197:
#line 1230 "c2fsmd.y"
    {
								if((yyvsp[(5) - (7)].prns).prev!=-1){
								split((yyvsp[(5) - (7)].prns).prev,state_rcnt);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(5) - (7)].prns).prev,(yyvsp[(3) - (7)].exprsn).NCell,NULL);
								state_rcnt--;
								if((yyvsp[(7) - (7)].prns).prev!=-1){
// printf("in IF ELSE : %s & %s\n",string_NC($3.NCell),string_NC(NNC($3.NCell)));
					 			// if($7.prev!=$5.next){ printf("error in if-else\n"); exit(1); }
								split((yyvsp[(7) - (7)].prns).prev,(yyvsp[(7) - (7)].prns).next); //state_rcnt); check this line
								INfsmd(&c2f->states[state_rcnt+1],(yyvsp[(7) - (7)].prns).prev,NNC((yyvsp[(3) - (7)].exprsn).NCell),NULL);
//								INfsmd(&c2f->states[state_rcnt],$7.next,NULL,NULL);
//								state_rcnt--;
								(yyval.prns).prev=state_rcnt+1;//2;
								(yyval.prns).next=(yyvsp[(7) - (7)].prns).next;
								
								#ifdef DOTTY
								l2->start=state_rcnt+1;
								l2->start1=(yyvsp[(5) - (7)].prns).prev;	// this stable
								l2->end=(yyvsp[(7) - (7)].prns).next;
								l2->type=IFEL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								l2->start=state_rcnt+1;
								l2->start1=(yyvsp[(7) - (7)].prns).prev;	// this stable
								l2->end=(yyvsp[(7) - (7)].prns).next;
								l2->type=IFEL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif
								
								}
								else {
								INfsmd(&c2f->states[state_rcnt+1],(yyvsp[(5) - (7)].prns).next,NNC((yyvsp[(3) - (7)].exprsn).NCell),NULL);
								(yyval.prns).prev=state_rcnt+1;
								(yyval.prns).next=(yyvsp[(5) - (7)].prns).next;
								
								#ifdef DOTTY
								l2->start=state_rcnt+1;
								l2->start1=(yyvsp[(5) - (7)].prns).prev;	// this stable
								l2->end=(yyvsp[(5) - (7)].prns).next;
								l2->type=IFL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count++;
								#endif
								
								}
								}
								else{
								if((yyvsp[(7) - (7)].prns).prev!=-1){
								split((yyvsp[(7) - (7)].prns).prev,state_rcnt);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(7) - (7)].prns).prev,NNC((yyvsp[(3) - (7)].exprsn).NCell),NULL);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(7) - (7)].prns).next,(yyvsp[(3) - (7)].exprsn).NCell,NULL);
								state_rcnt--;
								(yyval.prns).prev=state_rcnt;
								
								
								#ifdef DOTTY
								l2->start=state_rcnt+1;
								l2->start1=(yyvsp[(7) - (7)].prns).prev;	// this stable
								l2->end=(yyvsp[(7) - (7)].prns).next;
								l2->type=IFL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif
								
								}
								else (yyval.prns).prev=(yyvsp[(7) - (7)].prns).prev;
								(yyval.prns).next=(yyvsp[(7) - (7)].prns).next;
								}
							;}
    break;

  case 198:
#line 1303 "c2fsmd.y"
    {	(yyval.prns).prev=-1;(yyval.prns).next=-1;	;}
    break;

  case 199:
#line 1307 "c2fsmd.y"
    {
								if((yyvsp[(5) - (5)].prns).prev!=-1){
								split((yyvsp[(5) - (5)].prns).prev,state_rcnt-1);
								split((yyvsp[(5) - (5)].prns).next,state_rcnt);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(5) - (5)].prns).prev,(yyvsp[(3) - (5)].exprsn).NCell,NULL);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(5) - (5)].prns).next,NNC((yyvsp[(3) - (5)].exprsn).NCell),NULL);
								INfsmd(&c2f->states[state_rcnt-1],state_rcnt,NULL,NULL);
								(yyval.prns).prev=state_rcnt-1;
								(yyval.prns).next=(yyvsp[(5) - (5)].prns).next;
								state_rcnt-=2;
								
								#ifdef DOTTY
								l2->start=state_rcnt+1;
								l2->start1=state_rcnt+2;
								l2->end=(yyvsp[(5) - (5)].prns).next;
								l2->type=WHILEL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif
								
								}
								else {
									if((yyvsp[(3) - (5)].exprsn).NCell!=NULL){
								intialize_state(state_count);
								INfsmd(&c2f->states[prev_state],state_count,NULL,NULL);
								intialize_state(state_count+1);
								INfsmd(&c2f->states[state_count],state_count+1,(yyvsp[(3) - (5)].exprsn).NCell,NULL);
								intialize_state(state_count+2);
								INfsmd(&c2f->states[state_count+1],state_count,NULL,NULL);
								INfsmd(&c2f->states[state_count],state_count+2,NNC((yyvsp[(3) - (5)].exprsn).NCell), NULL);
								(yyval.prns).prev=prev_state;
								(yyval.prns).next=state_count+2;
								prev_state=state_count+2;
								state_count+=3;

								#ifdef DOTTY
								l2->start=prev_state;// loop begin
								l2->start1=state_count-3;// loop start
								l2->end=state_count-1;	// loop end & not a stable pointer chances of changing
								l2->type=WHILEL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif

								}}
							;}
    break;

  case 200:
#line 1355 "c2fsmd.y"
    {
								if((yyvsp[(2) - (7)].prns).prev!=-1){
								split((yyvsp[(2) - (7)].prns).prev,state_rcnt-1);
								split((yyvsp[(2) - (7)].prns).next,state_rcnt);
// print_NC($5.NCell);
// printf("%s\n",string_NC($5.NCell));
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(2) - (7)].prns).prev,(yyvsp[(5) - (7)].exprsn).NCell,NULL);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(2) - (7)].prns).next,NNC((yyvsp[(5) - (7)].exprsn).NCell),NULL);
								INfsmd(&c2f->states[state_rcnt-1],state_rcnt,NULL,NULL);
								(yyval.prns).prev=state_rcnt-1;
								(yyval.prns).next=(yyvsp[(2) - (7)].prns).next;
								state_rcnt-=2;
								
								#ifdef DOTTY
								l2->start=state_rcnt+1;
								l2->start1=state_rcnt+2;
								l2->end=(yyvsp[(2) - (7)].prns).next;
								l2->type=WHILEL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif
								
								}
								else {
									if((yyvsp[(5) - (7)].exprsn).NCell!=NULL){
								intialize_state(state_count);
								INfsmd(&c2f->states[prev_state],state_count,NULL,NULL);
								intialize_state(state_count+1);
								INfsmd(&c2f->states[state_count],state_count+1,(yyvsp[(5) - (7)].exprsn).NCell,NULL);
								intialize_state(state_count+2);
								INfsmd(&c2f->states[state_count+1],state_count,NULL,NULL);
								INfsmd(&c2f->states[state_count],state_count+2,NNC((yyvsp[(5) - (7)].exprsn).NCell), NULL);
								(yyval.prns).prev=prev_state;
								(yyval.prns).next=state_count+2;
								prev_state=state_count+2;
								state_count+=3;

								#ifdef DOTTY
								l2->start=prev_state;// loop begin
								l2->start1=state_count-3;// loop start
								l2->end=state_count-1;	// loop end & not a stable pointer chances of changing
								l2->type=WHILEL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif

								}}
							;}
    break;

  case 201:
#line 1405 "c2fsmd.y"
    {
								if((yyvsp[(6) - (6)].prns).prev!=-1){
								split((yyvsp[(6) - (6)].prns).prev,state_rcnt-1);
//								addexpr($3.DTL,state_rcnt);
											// loop_begin
//								strcpy(comments[state_rcnt-1],$3.str);
//								strcat(comments[state_rcnt-1],$4.str);
								split((yyvsp[(6) - (6)].prns).next,state_rcnt-2);
								sprintf(c2f->states[state_rcnt].state_id,"%s%d",temps,1000+state_rcnt);
								c2f->states[state_rcnt].node_type=NORMAL;
								c2f->states[state_rcnt].numtrans=0;
								INfsmd(&c2f->states[state_rcnt-1],state_rcnt,NULL,(yyvsp[(3) - (6)].exprsSTS).DTL);
								INfsmd(&c2f->states[state_rcnt-2],state_rcnt,NULL,NULL);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(6) - (6)].prns).prev,(yyvsp[(4) - (6)].exprsSTS).NCell,NULL);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(6) - (6)].prns).next,NNC((yyvsp[(4) - (6)].exprsSTS).NCell),NULL);
											// loop_end
sprintf(comments[state_rcnt-1],"/* ");
dtlst=(yyvsp[(3) - (6)].exprsSTS).DTL;
while(dtlst!=NULL){
strcat(comments[state_rcnt-1],string_DTr(dtlst->trans));
strcat(comments[state_rcnt-1],",");
dtlst=dtlst->next;
}
strcat(comments[state_rcnt-1],"; ");
string_NC((yyvsp[(4) - (6)].exprsSTS).NCell,printer);
strcat(comments[state_rcnt-1],printer);
strcat(comments[state_rcnt-1],"; */");
							//	sprintf(comments[state_rcnt-1],"/* %s %s */",$3.str,$4.str);
								strcat(c2f->states[state_rcnt-1].state_id,"LB");
								strcpy(comments[state_rcnt],"2");
								(yyval.prns).prev=state_rcnt-1;
								(yyval.prns).next=(yyvsp[(6) - (6)].prns).next;
								state_rcnt-=3;
								
								#ifdef DOTTY
								l2->start=state_rcnt+2;// loop begin
								l2->start1=state_rcnt+3;// loop start
								l2->end=(yyvsp[(6) - (6)].prns).next;	// loop end & not a stable pointer chances of changing
								l2->type=FORL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif
								
								}
								else {
									if((yyvsp[(4) - (6)].exprsSTS).NCell!=NULL){
								intialize_state(state_count);
								INfsmd(&c2f->states[prev_state],state_count,NULL,(yyvsp[(3) - (6)].exprsSTS).DTL);
								intialize_state(state_count+1);
								INfsmd(&c2f->states[state_count],state_count+1,(yyvsp[(4) - (6)].exprsSTS).NCell,NULL);
								intialize_state(state_count+2);
								INfsmd(&c2f->states[state_count+1],state_count,NULL,NULL);
								INfsmd(&c2f->states[state_count],state_count+2,NNC((yyvsp[(4) - (6)].exprsSTS).NCell), NULL);
sprintf(comments[prev_state],"/* ");
dtlst=(yyvsp[(3) - (6)].exprsSTS).DTL;
while(dtlst!=NULL){
strcat(comments[prev_state],string_DTr(dtlst->trans));
strcat(comments[prev_state],",");
dtlst=dtlst->next;
}
strcat(comments[prev_state],"; ");
string_NC((yyvsp[(4) - (6)].exprsSTS).NCell,printer);
strcat(comments[prev_state],printer);
strcat(comments[prev_state],"; */");
strcpy(comments[state_count],"2");
								strcat(c2f->states[prev_state].state_id,"LB");
								(yyval.prns).prev=prev_state;
								(yyval.prns).next=state_count+2;
								prev_state=state_count+2;
								state_count+=3;

								#ifdef DOTTY
								l2->start=(yyval.prns).prev;// loop begin
								l2->start1=state_count-3;// loop start
								l2->end=state_count-1;	// loop end & not a stable pointer chances of changing
								l2->type=FORL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif

								}}
							;}
    break;

  case 202:
#line 1489 "c2fsmd.y"
    {
								if((yyvsp[(7) - (7)].prns).prev!=-1){
								split((yyvsp[(7) - (7)].prns).prev,state_rcnt-1);
											// loop_begin
								split((yyvsp[(7) - (7)].prns).next,state_rcnt-2);
								sprintf(c2f->states[state_rcnt].state_id,"%s%d",temps,1000+state_rcnt);
								c2f->states[state_rcnt].node_type=NORMAL;
								c2f->states[state_rcnt].numtrans=0;
								INfsmd(&c2f->states[state_rcnt-1],state_rcnt,NULL,(yyvsp[(3) - (7)].exprsSTS).DTL);
								INfsmd(&c2f->states[state_rcnt-2],state_rcnt,NULL,(yyvsp[(5) - (7)].exprsn).DTL);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(7) - (7)].prns).prev,(yyvsp[(4) - (7)].exprsSTS).NCell,NULL);
								INfsmd(&c2f->states[state_rcnt],(yyvsp[(7) - (7)].prns).next,NNC((yyvsp[(4) - (7)].exprsSTS).NCell),NULL);
											// loop_end

sprintf(comments[state_rcnt-1],"/* ");
dtlst=(yyvsp[(3) - (7)].exprsSTS).DTL;
while(dtlst!=NULL){
strcat(comments[state_rcnt-1],string_DTr(dtlst->trans));
strcat(comments[state_rcnt-1],",");
dtlst=dtlst->next;
}
strcat(comments[state_rcnt-1],"; ");
string_NC((yyvsp[(4) - (7)].exprsSTS).NCell,printer);
strcat(comments[state_rcnt-1],printer);
strcat(comments[state_rcnt-1],"; ");
dtlst=(yyvsp[(5) - (7)].exprsn).DTL;
while(dtlst!=NULL){
strcat(comments[state_rcnt-1],string_DTr(dtlst->trans));
strcat(comments[state_rcnt-1],",");
dtlst=dtlst->next;
}
strcat(comments[state_rcnt-1]," */");
								// sprintf(comments[state_rcnt-1],"/* %s %s %s */",$3.str,$4.str,$5.str);
								strcat(c2f->states[state_rcnt-1].state_id,"LB");
								strcpy(comments[state_rcnt],"2");
								(yyval.prns).prev=state_rcnt-1;
								(yyval.prns).next=(yyvsp[(7) - (7)].prns).next;
								state_rcnt-=3;
								
								#ifdef DOTTY
								l2->start=state_rcnt+2;
								l2->start1=state_rcnt+3;
								l2->end=(yyvsp[(7) - (7)].prns).next;
								l2->type=FORL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif

								
								}
								else {
									if((yyvsp[(4) - (7)].exprsSTS).NCell!=NULL){
								intialize_state(state_count);
								INfsmd(&c2f->states[prev_state],state_count,NULL,(yyvsp[(3) - (7)].exprsSTS).DTL);
								intialize_state(state_count+1);
								INfsmd(&c2f->states[state_count],state_count+1,(yyvsp[(4) - (7)].exprsSTS).NCell,NULL);
								intialize_state(state_count+2);
								INfsmd(&c2f->states[state_count+1],state_count,NULL,(yyvsp[(5) - (7)].exprsn).DTL);
								INfsmd(&c2f->states[state_count],state_count+2,NNC((yyvsp[(4) - (7)].exprsSTS).NCell), NULL);
sprintf(comments[prev_state],"/* ");
dtlst=(yyvsp[(3) - (7)].exprsSTS).DTL;
while(dtlst!=NULL){
strcat(comments[prev_state],string_DTr(dtlst->trans));
strcat(comments[prev_state],",");
dtlst=dtlst->next;
}
strcat(comments[prev_state],"; ");
string_NC((yyvsp[(4) - (7)].exprsSTS).NCell,printer);
strcat(comments[prev_state],printer);
dtlst=(yyvsp[(5) - (7)].exprsn).DTL;
while(dtlst!=NULL){
strcat(comments[state_rcnt-1],string_DTr(dtlst->trans));
strcat(comments[state_rcnt-1],",");
dtlst=dtlst->next;
}
strcat(comments[prev_state],"; */");
strcpy(comments[state_count],"2");
								strcat(c2f->states[prev_state].state_id,"LB");
								(yyval.prns).prev=prev_state;
								(yyval.prns).next=state_count+2;
								prev_state=state_count+2;
								state_count+=3;

								#ifdef DOTTY
								l2->start=prev_state;// loop begin
								l2->start1=state_count-3;// loop start
								l2->end=state_count-1;	// loop end & not a stable pointer chances of changing
								l2->type=FORL;
								l2->next=(loopi *)malloc(sizeof(loopi));
								l2=l2->next;
								loop_count+=1;
								#endif

								}
							}
							;}
    break;

  case 203:
#line 1589 "c2fsmd.y"
    { (yyval.prns).next=state_count;(yyval.prns).prev=-1; ;}
    break;

  case 204:
#line 1590 "c2fsmd.y"
    { (yyval.prns).next=state_count;(yyval.prns).prev=-1; ;}
    break;

  case 205:
#line 1591 "c2fsmd.y"
    { sprintf(c2f->states[state_count].state_id,"%s%d",temps,1000+state_count);
								c2f->states[state_count].node_type=NORMAL;
								c2f->numstates++;
								printf("** Parser : expression :: BREAK\n");
								dtlst=(DT_LIST*)malloc(sizeof(DT_LIST));
								dtlst->trans=(DATA_TRANS*)malloc(sizeof(DATA_TRANS));
								transdata=dtlst->trans;
								transdata->lhs=indexoftable("BREAK");
								transdata->rhs=create_NC();
								transdata->rhs->type='C';
								transdata->rhs->inc=1;
								INfsmd(&c2f->states[prev_state],state_count,NULL,dtlst);
								(yyval.prns).prev=prev_state;
								(yyval.prns).next=state_count;
								prev_state=state_count;
								state_count++;
						;}
    break;

  case 206:
#line 1608 "c2fsmd.y"
    { (yyval.prns).next=state_count;(yyval.prns).prev=-1; ;}
    break;

  case 207:
#line 1609 "c2fsmd.y"
    { 
							(yyval.prns).next=state_count;
							(yyval.prns).prev=-1;
							rtrn1->exprs=(yyvsp[(2) - (3)].exprsn).NCell;
							rtrn1->next=(LIST*)malloc(sizeof(LIST));
							rtrn1=rtrn1->next;
							output_count++;
						;}
    break;

  case 208:
#line 1620 "c2fsmd.y"
    {
							printf("parsed\n");
							c2f->states[state_count-1].node_type=END;
							print_out(c2f,data);
							#ifdef DOTTY
							printf("\n\n\nDOTTY :\n");
							print_dotty(data);
							#endif
							printf("done\n"); 
;}
    break;

  case 209:
#line 1630 "c2fsmd.y"
    {
							printf("parsed with more than 1 function\n");
							print_out(c2f,data);
							printf("done\n");
;}
    break;


/* Line 1267 of yacc.c.  */
#line 3909 "c2fsmd.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1649 "c2fsmd.y"

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header.h"

void yyerror(char const *s) {fprintf(stderr, "%s in line number %s\n", s, line_count(0));}

int main(){
	temps=(char *)malloc(sizeof(char)*40);
	#ifdef DOTTY
	l1=(loopi *)malloc(sizeof(loopi));
	l2=l1;
	rtrn=(LIST *)malloc(sizeof(LIST));
	rtrn1=rtrn;
	#endif
//	lineno=0;
	data=(char*)malloc(sizeof(char)*40);
	printer=(char*)malloc(sizeof(char)*40);
	print_count=1000;
	// scanf("%s",data);
//	scanf("%s",temps);
//	data+=2;
	strcpy(data,"newFSMD");
	strcpy(temps,"qq");
	printf("FSMD name: %s\n",temps);
	c2f=newFSMD();
	strcpy(c2f->name,data);
	c2f->numstates=1;
	sprintf(c2f->states[0].state_id,"%s1000",temps);
	c2f->states[0].node_type=START;
	errP=(int*)malloc(sizeof(int));
	current_table=newSymTab(NULL);
	dtlst=searchinsert("BREAK",NULL,NULL,Int);
//	dtlst=searchinsert("END",NULL,NULL,Int);
	dtlst=searchinsert("LOOP_END",NULL,NULL,Int);
	printf("starting yyparse : \n");
	int i=0;
	for(i=0;i<MAXSTATES;i++) strcpy(comments[i],"\0");


	sprintf(c2f->states[state_count].state_id,"%s%d",temps,1000+state_count);
	c2f->numstates++;
	c2f->states[state_count].node_type=NORMAL;
	INfsmd(&c2f->states[prev_state],state_count,NULL,NULL);
	prev_state=state_count;
	state_count++;
	return yyparse();
}


// functions :


/******************************************************************************************/

/*  This function is used to create a term a simple normalized cell               */
/*  It takes no input and returns the pointer */
/*  to the default normalized binary tree                                                         */

/******************************************************************************************/

// default create NC cell
NC* create_NC(){
	NC *T;
	T=(NC *)malloc(sizeof(NC));
	T->link=NULL;
	T->list=NULL;
	T->inc=0;
	T->type='V';
	return T;
}


void nameit(char *f,char *q){
strcpy(data,f);
strcpy(temps,q);
strcpy(c2f->name,data);
sprintf(c2f->states[0].state_id,"%s1000",temps);
printf("%s\t%s\n",c2f->name,c2f->states[0].state_id);
}


/******************************************************************************************/

/*  This function is used to create a term for a particular normalized term               */
/*  It takes the variable string as input and returns the pointer */
/*  to the normalized binary tree                                                         */

/******************************************************************************************/


// this will create NC cell for given variable
NC* create_term(char *varP){
	NC *T,*P;
	int i=indexoftable(varP);  //get the index of the symbol
	if( i >= 0 )
	{
		if(current_table->bucket[i].data_type != Funt){
		T=(NC *)malloc(sizeof(NC));
		P=(NC*) malloc(sizeof(NC));
		T->link=P;
		P->list=NULL;
		T->list=NULL;
		P->link=NULL;
		P->inc=i;
		P->type='V';
		T->type='T';
		T->inc=getvalue(i);
		return T;
		}
		else {
		T=create_NC();
		T->type = 'U';
		T->inc = indexoftable(varP);
		printf("***** function call found : function name : %s\n",varP);
		return T;
		}
	}
	else if(i==-2){
		printf("***** temporary variable insertion : %s\n",varP);
		dtlst=searchinsert(varP,NULL,NULL,Funt);
		T=create_NC();
		T->type = 'U';
		T->inc = indexoftable(varP);
		return T;
	}
	else 
		return NULL;
}


/******************************************************************************************/

/*  This function is used to to get the index of a variable from the symbol table               */
/*  It takes the variable string as input and returns the index */
/*  from symbol table                                                         */

/******************************************************************************************/

// index from hash table
int indexoftable(char *str){
int i=0;
symtab *table;table=current_table;
while(i<table->count){
if(strcmp(str,table->bucket[i].symP)==0)
return i;
i++;
}
return NOT_DEF;
}



/******************************************************************************************/

/*  This function is used to get the value of a variable from symbol table               */
/*  It takes the symbolic constant (index) as input and returns the integer value */
/*  from the symbol table                                                          */

/******************************************************************************************/


// getvalue by index
int getvalue(int i){
int j,k;j=i/1000;k=i%1000;
if(j==0 && current_table->bucket[k].dim==0)
return current_table->bucket[i%1000].val[i/1000];
else if(current_table->bucket[k].dim!=0) return IDK;		// check the intialization
else return current_table->bucket[i%1000].val[i/1000];
}




/******************************************************************************************/

/*  This function is used to transform a normalized binary tree to its opposite               */
/*  It takes the pointer to the normalized binary tree and returns another pointer */
/*  to the normalized binary tree of opposite kind                                                 */

/******************************************************************************************/


// negation of expression
NC *NNC(NC *in){
NC *temp;
temp=create_NC();
temp->type='O';
temp->inc=NOT;
temp->link=in;
return temp;
}


/******************************************************************************************/

/*  This function is used to create a new symbol table                */
/*  It takes no input and returns the pointer */
/*  to the symbol table                                                         */

/******************************************************************************************/

//	function to create a new symbol table
symtab *newSymTab(symtab *uP)
{
	symtab *table=(symtab*)malloc(sizeof(symtab));
	table->upTab = uP;
	table->downTab = NULL;
	table->count=0;
	int i;
	for(i=0;i<BUCKET_COUNT;i++)
	{
		//initialising all the pointers to NULL
		table->bucket[i].symP=NULL;
		table->bucket[i].val=NULL;
	}
	if(uP!=NULL)
	{
		uP->downTab = table;
	}
	return table;
}


/******************************************************************************************/

/*  This function is used to insert a variable in symbol table               */
/*  It takes the string variable and intialization list as input and returns the pointer */
/*  to the Data transition                                                         */

/******************************************************************************************/

// search and insert the variable & retrieve DATA_TRANS list
DT_LIST *searchinsert(char *varP,LIST *arry,LIST *intil,int type){
int i=0,j=1,k=0,i1;int listenter=0;
DT_LIST *lst,*lst1;
lst1=(DT_LIST *)malloc(sizeof(DT_LIST));
lst=lst1;
symtab *temp;temp=current_table;
while(temp->bucket[i].symP!=NULL){
if(strcmp(temp->bucket[i].symP,varP)==0){
printf("** SearchInsert : variable already intiallized \n");
printf("** SearchInsert : id = %s at position %d\n",varP,i);
exit(1);
// return NULL;
}
i++;
}
	temp->bucket[i].symP=(char *)malloc(sizeof(char)*strlen(varP));
	strcpy(temp->bucket[i].symP,varP);
	temp->bucket[i].data_type=type;
LIST *temp1,*temp2;
temp2=intil;
temp1=arry;i1=0;
temp->bucket[i].ar=(int*)malloc(sizeof(int)*10);
temp->bucket[i].ar[0]=1;int xx;
while(temp1!=NULL){
printf("~~~~~~~~~~~~~~~~~~~~ array found\n");
	if(temp1->exprs!=NULL){
	  xx=value_NC(temp1->exprs);
	  if(xx!=IDK) temp->bucket[i].ar[i1]=xx;
	  else temp->bucket[i].ar[i1]=10;
	}
	else temp->bucket[i].ar[i1]=1;
j*=temp->bucket[i].ar[i1];
temp1=temp1->next;
i1++;
}
	temp->bucket[i].dim=i1;
	temp->bucket[i].val=(int *)malloc(sizeof(int)*j);
k=0;j=1;
while(temp2!=NULL){
listenter=1;
if(temp2->exprs!=NULL) {
	temp->bucket[i].val[k]=value_NC(temp2->exprs);
	if(lst1==NULL) lst1=(DT_LIST *)malloc(sizeof(DT_LIST));
	lst1->trans=(DATA_TRANS *)malloc(sizeof(DATA_TRANS));
	lst1->trans->lhs=i+k*1000;
	lst1->trans->rhs=copy_NC(temp2->exprs);
}
else {
temp->bucket[i].val[k]=IDK;
if(lst1==NULL) lst1=(DT_LIST *)malloc(sizeof(DT_LIST));
// lst1->trans=(DATA_TRANS *)malloc(sizeof(DATA_TRANS));
// lst1->trans->lhs=k*1000+i;
// lst1->trans->rhs=NULL;
lst1->trans=NULL;
j=-2;
}
temp2=temp2->next;
if(temp2!=NULL) 	lst1->next=(DT_LIST *)malloc(sizeof(DT_LIST));
lst1=lst1->next;
k++;
}
if(j==-2) temp->bucket[i].defined=RE_DEF;
else temp->bucket[i].defined=DEF;
temp->count++;
printf("** SearchInsert : inserted : %s\tat position %d\n",varP,i);
if(listenter==1) return lst;
else return NULL;
}



/******************************************************************************************/

/*  This function is used to create a new FSMD data structure for a function               */
/*  It takes no input and returns the pointer                                                      */
/*  to the FDMD data structure                                                         */

/******************************************************************************************/


// create a new FSMD data structure and retrurn a pointer
FSMD *newFSMD(){
// printf("sizeof fsmd : %d\n",(int)sizeof(FSMD));
FSMD *temp1;
temp1=(FSMD *)malloc(sizeof(FSMD));
int i=0;
for(i=0;i<MAXSTATES;i++){
/* intialize all the node types as not defined */
temp1->states[i].node_type=UNDEF;
temp1->states[i].translist=NULL;
temp1->states[i].numtrans=0;
}
return temp1;
}



/******************************************************************************************/

/*  This function is used to add a new transition in  fsmd state             */
/*  It takes prev node and next node id along with normalised condition cell */
/*  and data transition list to be added as input and returns nothing */

/******************************************************************************************/

// inserting transition state in FSMD data structure
void INfsmd(NODE_ST *prev,int nxt,NC *condn,DT_LIST *list){
/* commented lines are for further modifications, not necessary now */
printf("** INfsmd : started\n");
int i=0;
DT_LIST *modf;
modf=list;
TRANSITION_ST *trans1;
trans1=create_TST();
trans1->condition=condn;
while(list!=NULL){
if(list->trans!=NULL){
trans1->action[i].lhs=list->trans->lhs;
trans1->action[i].flag=list->trans->flag;
trans1->action[i].rhs=copy_NC(list->trans->rhs);
i++;
}
list=list->next;
}
trans1->datatrans_cnt=i;
trans1->next=NULL;
trans1->outtrans=nxt;
if(prev->translist==NULL){
prev->translist=trans1;
prev->numtrans++;
}
else{
TRANSITION_ST *temp,*temp1;
temp=prev->translist;temp1=temp;
while(temp->next!=NULL) temp=temp->next;
temp->next=trans1;
prev->numtrans++;
}
char *str1=(char *)malloc(sizeof(char)*100);
string_NC(condn,str1);
printf("** INfsmd : state transition added %s\n",str1);
}


/******************************************************************************************/

/*  This function is used to link two data transition lists one after the other             */
/*  It takes two data transitions lists to be linked as input  */
/*  and returns a pointer to the resulting data transition list */

/******************************************************************************************/


// link two DATA TRANSITION lists
DT_LIST *link_DTLIST(DT_LIST *list1,DT_LIST *list2){
DT_LIST *temp,*temp1;
temp1=copy_DTLIST(list1);
temp=temp1;
if(temp1==NULL) return list2;
while(temp1->next!=NULL)
temp1=temp1->next;
temp1->next=copy_DTLIST(list2);
return temp;
}



/******************************************************************************************/

/*  This function is used to link two two normalised expressions with a new operator             */
/*  It takes two data normalised trees to be linked and operator as input  */
/*  and returns a pointer to the resulting normalised tree */

/******************************************************************************************/



// links two normalized trees as per the operator been used
NC* link_NC(NC *expr1,NC * expr2,int op){
NC *temp,*temp1;temp1=expr1;
if(temp1->type==op){
temp1=temp1->link;
while(temp1!=NULL)
	temp1=temp1->list;
temp1=expr2;
printf("~~~~~~~in link_NC:\n && direct maping output:\n");
// print_NC(expr1);
return expr1;
}
else {
temp=create_NC();
temp->link=expr1;
while(temp1->list!=NULL) temp1=temp1->list;
temp1->list=expr2;
if(op>90) temp->type='S';
else if(op>80) temp->type='R';
else temp->type='O';
temp->inc=op;
return temp;
}
}



/******************************************************************************************/

/*  This function is used to intialize a new DATA transition list             */
/*  It takes no input and returns the pointer to a new data transition list intialized */

/******************************************************************************************/

// creates a new DATA_TRANSITION list : DT_LIST
LIST *create_list(){
LIST *temp=(LIST *)malloc(sizeof(LIST));
temp->exprs=NULL;
temp->next=NULL;
return temp;
}

/******************************************************************************************/

/*  This function is used to intialize a new DATA transition stae             */
/*  It takes no input and returns the pointer to a new data transition state intialized */

/******************************************************************************************/


// create a new TRANSITIO_ST data structure and return a pointer 
TRANSITION_ST *create_TST(){
TRANSITION_ST *trans0;
// printf("error?\n");
trans0=(TRANSITION_ST *)malloc(sizeof(TRANSITION_ST));
		// here barcode.c showing error at 1755 line code
/* intialize to null */
// printf("NO!\n");
trans0->next=NULL;
trans0->datatrans_cnt=0;
trans0->condition=NULL;
return trans0;
}


/******************************************************************************************/

/*  This function is used to create a new data transition               */
/*  It two normalized trees as input and returns the pointer                       */
/*  to the newly created data transition                            */
/*  input: one for the left hand side variable and other for right side expression */

/******************************************************************************************/

// create a new data transition
DATA_TRANS* create_DT(NC *temp,NC *expr1){

	if(check_NC(temp) < 0){
		printf("variable used before declaration in line number %s\n",line_count(0));
		exit(1);
	}

DATA_TRANS *x;
NC *tp1;
int ll,i;
x=(DATA_TRANS *)malloc(sizeof(DATA_TRANS));
//x->rhs=copy_NC(expr1);
x->rhs=expr1;
// printf("create_DT : %c %c\n",temp->type,temp->link->type);
x->flag = FALSE;

if(temp->link->type=='V') {
	x->lhs = temp->link->inc;
}
else{
     	tp1=temp->link->link;
	ll=temp->link->inc;
i=current_table->bucket[ll].dim;
while(tp1!=NULL){
tp1=tp1->list;
i--;
}
if(i!=0){
printf("wrong entry in array dimension in line number %s\n",line_count(0));
printf("given dimension : %d, original dimension : %d\n",current_table->bucket[ll].dim-i,current_table->bucket[ll].dim);
exit(1);
}
tp1=temp->link;
	if((ll=get_index(tp1))!=-1)
	  x->lhs=ll;
	else {
	x->lhs_NC=copy_NC(temp);
	x->flag=TRUE;
char *str1=(char *)malloc(sizeof(char)*100);
string_NC(x->lhs_NC,str1);
	printf("!!!!!!!!!! DT created with array type lhs : %s %d %d %d\n",str1,sizeof(x->lhs),sizeof(x->lhs_NC),sizeof(NC));
	}
}
return x;
}



/******************************************************************************************/

/*  This function is used to to get the index of a variable from the symbol table               */
/*  It takes the normalized tree as input and returns the index */
/*  from symbol table : used for array variables                                 */

/******************************************************************************************/

// get index of variable represented in normalized tree form
int get_index(NC *temp){
 if( temp->type=='V' || temp->type=='v') return temp->inc;
else if(temp->type=='A' || temp->type=='a') {
  int i=0,k=1;i=temp->inc;
  k=array_index(temp->link,i);
if(k!=-1)
  return i+k*1000;
else {
return -1;
}
}
else {
printf("error in get_index NC type : %c\n",temp->type);
exit(1);
return IDK;
}
}


/******************************************************************************************/

/*  This function is used to to get the index of a array from the symbol table               */
/*  It takes the normalized tree and index of array pointer as input and returns the original index of variable */
/*  from symbol table : used for array variables                                  */

/******************************************************************************************/


// get array index of of variable represented in normalized form
int array_index(NC *NCell,int i){
  int in=0,j=1,jj=0,k=1;NC *temp1;
  temp1=NCell;
while(temp1!=NULL){
if(temp1->type == 'C')
  k=temp1->inc;
else k = -1;
  if(k==-1) {
	in = -1;
	break;
	}
  jj=j;
  while(jj<current_table->bucket[i].dim){
    k*=current_table->bucket[i].ar[jj];
    jj++;
  }
  in+=k;
  temp1=temp1->list;
  j++;
}
// if(in == -1) exit(1);
  return in;
}


// value of constant on basis of type_specifier.
int fvalue(char *temp,int op){
if(op==Int)	return atoi(temp);
else if(op==Float)	return atof(temp);
else if(op==Stor){
int i=0;
while(temp!='\0'){
i*=10;i+=(int)*temp;			// check
temp++;
}
return i;
}
else return 0;
}



/******************************************************************************************/

/*  This function is used to modify fsmd state transition lists               */
/*  It takes PREV and NEW state ids as input and returns nothing */
/*  replaces PREV by NEW in all transition lists so far                   */

/******************************************************************************************/



// assign a new state as next state to a list of transitions 
void split(int prev,int new){
FSMD *temp;temp=c2f;

if(temp->states[new].node_type!=NORMAL){
sprintf(temp->states[new].state_id,"%s%d",temps,1000+new);
temp->states[new].node_type=NORMAL;
temp->states[new].numtrans=0;
}

int i=0;
TRANSITION_ST *temp2;
while(i<temp->numstates){
temp2=temp->states[i].translist;
while(temp2!=NULL){
if(temp2->outtrans==prev) { temp2->outtrans=new;
//printf("in Split : changed at %d from %d to %d\n",i,prev,new);
}
temp2=temp2->next;
}
i++;
}
i=MAXSTATES-1;
while(i>state_rcnt){
if(i!=new){
temp2=temp->states[i].translist;
while(temp2!=NULL){
if(temp2->outtrans==prev) {
temp2->outtrans=new;
//printf("in Split : changed at %d from %d to %d\n",i,prev,new);
}
temp2=temp2->next;
}}
i--;
}}


/******************************************************************************************/

/*  This function is used to modify fsmd state transition lists               */
/*  It takes data transition lists and next state id as input and returns nothing */
/*  adds data transitions to the current state which is working on                  */

/******************************************************************************************/


// add few expressions to a state
void addexpr(DT_LIST *dtl,int out){
FSMD *temp;temp=c2f;
DT_LIST *temp3;
int i=0,j;
TRANSITION_ST *temp2;
while(i<temp->numstates){
temp3=dtl;
temp2=temp->states[i].translist;
while(temp2!=NULL){
if(temp2->outtrans==out){
while(temp3!=NULL){
j=temp2->datatrans_cnt;temp2->datatrans_cnt++;
temp2->action[j].lhs=temp3->trans->lhs;
temp2->action[j].flag=temp3->trans->flag;
/* if(sizeof(temp3->trans->lhs)==sizeof(int))
	temp2->action[j].lhs=temp3->trans->lhs;
else {
temp2->action[j].lhs_NC.list=temp3->trans->lhs_NC.list;
temp2->action[j].lhs_NC.type=temp3->trans->lhs_NC.type;
temp2->action[j].lhs_NC.inc=temp3->trans->lhs_NC.inc;
temp2->action[j].lhs_NC.link=temp3->trans->lhs_NC.link;
//temp2->action[j].lhs_NC=copy_NC(temp3->trans->lhs_NC);
printf("&&&&&&&&&&&&&&&&&&&&&&&&&& getting copied %s\n",string_NC(&temp2->action[j].lhs_NC));
}*/
temp2->action[j].rhs=temp3->trans->rhs;
temp3=temp3->next;
}
}
temp2=temp2->next;
}
i++;
}
i=MAXSTATES-1;
while(i>state_rcnt){
if(i!=out){
temp3=dtl;
temp2=temp->states[i].translist;
while(temp2!=NULL){
if(temp2->outtrans==out){
while(temp3!=NULL){
j=temp2->datatrans_cnt;temp2->datatrans_cnt++;
temp2->action[j].lhs=temp3->trans->lhs;
temp2->action[j].flag=temp3->trans->flag;
/* if(sizeof(temp3->trans->lhs)==sizeof(int))
	temp2->action[j].lhs=temp3->trans->lhs;
else {
temp2->action[j].lhs_NC.list=temp3->trans->lhs_NC.list;
temp2->action[j].lhs_NC.type=temp3->trans->lhs_NC.type;
temp2->action[j].lhs_NC.inc=temp3->trans->lhs_NC.inc;
temp2->action[j].lhs_NC.link=temp3->trans->lhs_NC.link;
//temp2->action[j].lhs_NC=copy_NC(temp3->trans->lhs_NC);
printf("&&&&&&&&&&&&&&&&&&&&&&& getting copied %s\n",string_NC(&temp2->action[j].lhs_NC));
}*/
temp2->action[j].rhs=temp3->trans->rhs;
// free(temp3->trans->rhs);		// free
temp3=temp3->next;
}
}
temp2=temp2->next;
}
}
i--;
}
}


/******************************************************************************************/

/*  This function is used to output normalized tree in an unsorted way.               */
/*  It takes normalized treee as input and output the string form to console */

/******************************************************************************************/


// to print a normalized tree in unsorted form
void print_NC(NC *NCell){
NC *temp;// char *str;
temp=NCell;
while(temp!=NULL){
printf("<%d,%c>\t",temp->inc,temp->type);
if(temp->link!=NULL)
	print_NC(temp->list);
printf("\n");
temp=temp->link;
}
}


/******************************************************************************************/

/*  This function is used to calculate the value in the normalized tree               */
/*  It takes normalized tree as input and returns the integer value of it */

/******************************************************************************************/


// to get the value of normalized tree
int value_NC(NC *temp){
if(temp!=NULL){
NC *temp1;
if(temp->type=='S'){
if(temp->inc==DIV)	return value_NC(temp->link)/value_NC(temp->link->list);
else if(temp->inc==MUL){
temp1=temp->link->list;int i=value_NC(temp->link);
while(temp!=NULL){
i*=value_NC(temp1);
temp1=temp1->list;
}
return i;
}
else if(temp->inc==ADD){
NC *temp1;temp1=temp->link->list;int i=value_NC(temp->link);
while(temp!=NULL){
i+=value_NC(temp1);
temp1=temp1->list;
}
return i;
}
else if(temp->inc==SUB){
NC *temp1;temp1=temp->link->list;int i=value_NC(temp->link);
while(temp!=NULL){
i-=value_NC(temp1);
temp1=temp1->list;
}
return i;
}
else if(temp->inc==REM) return value_NC(temp->link)%value_NC(temp->link->list);
else if(temp->inc==INC || temp->inc==INCP || temp->inc==DEC || temp->inc==DECP) return value_NC(temp->link);
else return ERP;
}
else if(temp->type=='T'){
if(temp->link->type=='V'){
return getvalue(temp->link->inc);
}
else if(temp->link->type=='A'){
  temp1=temp->link->link;
  i=0;int index=temp->link->inc,j=1,jj=0,k=1;
  while(temp1!=NULL){
  k=value_NC(temp1);jj=j;
  while(jj<current_table->bucket[index].dim){
    k*=current_table->bucket[index].ar[jj];
    jj++;
  }
  i+=k;
  temp1=temp1->list;
  j++;
}
  return getvalue(i);
}
else return ERP;
}
else if(temp->type=='R'){
if(temp->inc==LTR) return value_NC(temp->link)<value_NC(temp->link->list) ? TRUES:FALSES;
else if(temp->inc==GTR) return value_NC(temp->link)>value_NC(temp->link->list) ? TRUES:FALSES;
else if(temp->inc==LER) return value_NC(temp->link)<=value_NC(temp->link->list) ? TRUES:FALSES;
else if(temp->inc==GER) return value_NC(temp->link)>=value_NC(temp->link->list) ? TRUES:FALSES;
else if(temp->inc==EQR) return value_NC(temp->link)==value_NC(temp->link->list) ? TRUES:FALSES;
else if(temp->inc==NER) return value_NC(temp->link)!=value_NC(temp->link->list) ? TRUES:FALSES;
else return IDK;
}
else if(temp->type=='C') return temp->inc;
else if(temp->type=='O'){
if (temp->inc==NEG)		return ~value_NC(temp->link) ? TRUES:FALSES;
else if(temp->inc==ANDOP || temp->inc==AND)	return value_NC(temp->link) && value_NC(temp->link->list) ? TRUES:FALSES;
else if(temp->inc==OROP || temp->inc==ORP)	return value_NC(temp->link) || value_NC(temp->link->list) ? TRUES:FALSES;
else if(temp->inc==NOT)	return !value_NC(temp->link) ? TRUES:FALSES;
else if(temp->inc==XOR)	return value_NC(temp->link)^value_NC(temp->link->list) ? TRUES:FALSES;
else return IDK;
}
else return IDK;
}
return 0;
}


/******************************************************************************************/

/*  This function is used to copy a normalized expression                */
/*  It takes original normalized tree as input and returns the pointer */
/*  to newly intiated and copied data from original normalized tree                   */

/******************************************************************************************/



// copy a normalized tree into another
NC* copy_NC(NC *org){
NC *dest;
if(org!=NULL){
dest=(NC *)malloc(sizeof(NC));
dest->type=org->type;
dest->inc=org->inc;
dest->link=copy_NC(org->link);
dest->list=copy_NC(org->list);
}
else dest=NULL;
return dest;
}


/******************************************************************************************/

/*  This function is used to copy a normalized expression list               */
/*  It takes original normalized tree list as input and returns the pointer */
/*  to newly intiated and copied data from original normalized tree list                   */

/******************************************************************************************/

// copy a normalized tree list
LIST *copy_LIST(LIST *org){
if(org!=NULL){
LIST *dest;
dest=(LIST *)malloc(sizeof(LIST));
dest->exprs=copy_NC(org->exprs);
dest->next=copy_LIST(org->next);
return dest;
}
else return NULL;
}


/******************************************************************************************/

/*  This function is used to copy a data transition                */
/*  It takes original data transition expression as input and returns the pointer */
/*  to newly intiated and copied data from original data transition expression                   */

/******************************************************************************************/

// copy a data transition expression to another
DATA_TRANS *copy_DTr(DATA_TRANS *org){
if(org!=NULL){
DATA_TRANS *temp;
temp=(DATA_TRANS *)malloc(sizeof(DATA_TRANS));
temp->lhs=org->lhs;
temp->flag=org->flag;
/* if(sizeof(org->lhs)==sizeof(int))
	temp->lhs=org->lhs;
else {
temp->lhs_NC.list=org->lhs_NC.list;
temp->lhs_NC.type=org->lhs_NC.type;
temp->lhs_NC.inc=org->lhs_NC.inc;
temp->lhs_NC.link=org->lhs_NC.link;
//temp->lhs_NC=copy_NC(org->lhs_NC);
printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&getting copied %s\n",string_NC(&temp->lhs_NC));
} */
temp->rhs=copy_NC(org->rhs);
return temp;
}
else return NULL;
}
/******************************************************************************************/

/*  This function is used to copy a data transition list                */
/*  It takes original data transition list as input and returns the pointer */
/*  to newly intiated and copied data from original data transition list                   */

/******************************************************************************************/

// copy a data transition list
DT_LIST *copy_DTLIST(DT_LIST *org){
if(org!=NULL){
DT_LIST *temp;
temp=(DT_LIST *)malloc(sizeof(DT_LIST));
temp->trans=copy_DTr(org->trans);
temp->next=copy_DTLIST(org->next);
return temp;
}
else return NULL;
}


/******************************************************************************************/

/*  This function is used to copy a data transition state                */
/*  It takes original data transition state as input and returns the pointer */
/*  to newly intiated and copied data from original data transition state                   */

/******************************************************************************************/

// copy a data transition state to another
TRANSITION_ST *copy_TST(TRANSITION_ST *org){
if(org==NULL) return NULL;
TRANSITION_ST *dest;
dest=create_TST();
dest->condition=copy_NC(org->condition);
dest->outtrans=org->outtrans;
dest->datatrans_cnt=org->datatrans_cnt;
dest->next=copy_TST(org->next);
int i=0;
while(i<dest->datatrans_cnt){
dest->action[i].lhs=org->action[i].lhs;
dest->action[i].flag=org->action[i].flag;
/* if(sizeof(dest->action[i].lhs)==sizeof(int))
	dest->action[i].lhs=org->action[i].lhs;
else{
	dest->action[i].lhs_NC.list=org->action[i].lhs_NC.list;
	dest->action[i].lhs_NC.type=org->action[i].lhs_NC.type;
	dest->action[i].lhs_NC.inc=org->action[i].lhs_NC.inc;
	dest->action[i].lhs_NC.link=org->action[i].lhs_NC.link;
}*/
dest->action[i].rhs=copy_NC(org->action[i].rhs);
i++;
}
return dest;
}


/******************************************************************************************/

/*  This function is used to print the entire FSMD data structure into a file                */
/*  It takes FSMD data structure and filename to be printed as input and           */
/*  writes the data transitions in the given format                */

/******************************************************************************************/

int start_state,end_state;
// printing entire FSMD data structure
void print_out(FSMD *fsm, char *filename){
modify_comments();
printf("enterd print function\n");
FILE *fout,*fout1;
char *file,*NCstr,*DTstr;
NCstr=(char *)malloc(sizeof(char)*100);
int i,j;
NODE_ST *temp;
TRANSITION_ST *temp1;
file=(char *)malloc(100);
sprintf(file,"%s.org",filename);
fout=fopen(file,"w");
fprintf(fout,"%s\n",file);
printf("%s\n",file);
sprintf(file,"%s1.org",filename);
fout1=fopen(file,"w");
fprintf(fout1,"\"%s\"\n",file);

fprintf(fout,"%d %d\n",input_count,output_count);
fprintf(fout1,"%d %d;\n",input_count,output_count);
printf("%d %d\n",input_count,output_count);
tmp=tmp1;
for(i=0;i<input_count;i++){
printf("%s ",tmp->idnt);
fprintf(fout,"%s ",tmp->idnt);
fprintf(fout1,"%s ",tmp->idnt);
tmp=tmp->next;
}
printf("\n");
fprintf(fout,"\n");
fprintf(fout1,";\n");
for(i=0;i<output_count;i++){
string_NC(rtrn->exprs,NCstr);
printf("%s ",NCstr);
fprintf(fout,"%s ",NCstr);
fprintf(fout1,"%s ",NCstr);
NCstr[0]='\0';
rtrn=rtrn->next;
}
printf("\n");
fprintf(fout,"\n");
fprintf(fout1,";\n");
for(i=0;i<MAXSTATES;i++)
if(fsm->states[i].node_type==START){
start_state=i;
temp=&fsm->states[i];
fprintf(fout,"%s %d",temp->state_id,temp->numtrans);
fprintf(fout1,"%s %d",temp->state_id,temp->numtrans);
printf("%s %d",temp->state_id,temp->numtrans);
temp1=temp->translist;
while(temp1!=NULL){
string_NC(temp1->condition,NCstr);
if(NCstr[0]=='\0'){
fprintf(fout," - / ");
fprintf(fout1," - | ");
printf(" - / ");
}
else{
fprintf(fout," %s / ",NCstr);
fprintf(fout1," %s | ",NCstr);
printf(" %s / ",NCstr);
}
//cleans(NCstr);
NCstr[0]='\0';
for(j=0;j<temp1->datatrans_cnt;j++){
DTstr=string_DTr(&temp1->action[j]);
if(DTstr==NULL){
fprintf(fout,"-");
fprintf(fout1,"-");
printf("-");
}
else{
fprintf(fout,"%s",DTstr);
fprintf(fout1,"%s",DTstr);
printf("%s",DTstr);
}
if(j!=temp1->datatrans_cnt-1) {
fprintf(fout,",");
fprintf(fout1,",");
printf(",");
}}
fprintf(fout,"\t%s\t",fsm->states[temp1->outtrans].state_id);
fprintf(fout1,"\t%s\t",fsm->states[temp1->outtrans].state_id);
printf("\t%s\t",fsm->states[temp1->outtrans].state_id);
temp1=temp1->next;
}
fprintf(fout1,"; %s\n",comments[i]);
fprintf(fout,"\n");
printf("\n");
}
for(i=0;i<MAXSTATES;i++)
if(i!=start_state){
if(fsm->states[i].node_type==END) { 
	end_state=i;
	printf("end state at %s\n",fsm->states[i].state_id);
	continue;
}
if(fsm->states[i].node_type==NORMAL){
temp=&fsm->states[i];
fprintf(fout,"%s %d",temp->state_id,temp->numtrans);
fprintf(fout1,"%s %d",temp->state_id,temp->numtrans);
printf("%s %d",temp->state_id,temp->numtrans);
temp1=temp->translist;
while(temp1!=NULL){
string_NC(temp1->condition,NCstr);
// printf("x=<%s>\n",NCstr);
if(NCstr[0]=='\0') {
fprintf(fout," - / ");
fprintf(fout1," - | ");
printf(" - / ");
}
else{
fprintf(fout," %s / ",NCstr);
fprintf(fout1," %s | ",NCstr);
printf(" %s / ",NCstr);
// NCstr=NULL;
}
NCstr[0]='\0';
//cleans(NCstr);
if(temp1->datatrans_cnt==0){
fprintf(fout,"- ");
fprintf(fout1,"- ");
printf("- ");
}
for(j=0;j<temp1->datatrans_cnt;j++){
DTstr=string_DTr(&temp1->action[j]);
if(DTstr==NULL){
fprintf(fout," - ");
fprintf(fout1," - ");
printf(" - ");
}
else {
fprintf(fout,"%s",DTstr);
fprintf(fout1,"%s",DTstr);
printf("%s",DTstr);
}
if(j!=temp1->datatrans_cnt-1) {
fprintf(fout,",");
fprintf(fout1,",");
printf(",");
}
}
fprintf(fout,"\t%s\t",fsm->states[temp1->outtrans].state_id);
fprintf(fout1,"\t%s\t",fsm->states[temp1->outtrans].state_id);
printf("\t%s\t",fsm->states[temp1->outtrans].state_id);
temp1=temp1->next;
}
fprintf(fout,"\n");
fprintf(fout1,"; \t%s\n",comments[i]);
printf("\n");
}
}
fprintf(fout,"%s %d\n\n\n",fsm->states[end_state].state_id,fsm->states[end_state].numtrans);
fprintf(fout1,"%s %d;\n\n\n",fsm->states[end_state].state_id,fsm->states[end_state].numtrans);
printf("%s %d\n\n\n",fsm->states[end_state].state_id,fsm->states[end_state].numtrans);
fclose(fout);
fclose(fout1);
printf("finished FSMD .org files\n");
}


/******************************************************************************************/

/*  This function is used to get the expression in string from nomalized form                */
/*  It takes Normalized tree as input and returns the pointer */
/*  to the string containing the expression                   */

/******************************************************************************************/

// get the string form of normalized expression 
void string_NC(NC *NCel, char *str){
// char *str;
// str=(char *)malloc(sizeof(char)*40);
NC *temp;temp=NCel;NC *temp1;
if(NCel==NULL) return;
if(NCel->type=='S'){
if(temp->inc==DIV){
	str[0]='(';
	++str;
	string_NC(temp->link,str);
	strcat(str,")/(");
	str+=strlen(str);
	string_NC(temp->link->list,str);
//		sprintf(str,"(%s)/(%s)",string_NC(temp->link),string_NC(temp->link->list));
		return;
		}
else if(temp->inc==MUL){
temp1=temp->link->list;
	str[0]='(';
	++str;
	string_NC(temp->link,str);
strcat(str,")");
// str+=strlen(str);
// sprintf(str,"(%s)",string_NC(temp->link));
while(temp1!=NULL){
strcat(str,"*(");
str+=strlen(str);
// sprintf(str,"%s*(%s)",str,string_NC(temp1));
string_NC(temp1,str);
strcat(str,")");

temp1=temp1->list;
}
return;
}
else if(temp->inc==ADD){
temp1=temp->link->list;
	string_NC(temp->link,str);
while(temp1!=NULL){
strcat(str,"+");
str+=strlen(str);
string_NC(temp1,str);
temp1=temp1->list;
}
return;
}
else if(temp->inc==SUB){
temp1=temp->link->list;
	string_NC(temp->link,str);
while(temp1!=NULL){
strcat(str,"-");
str+=strlen(str);
string_NC(temp1,str);
temp1=temp1->list;
}
return;
}
else if(temp->inc==REM) {
	string_NC(temp->link,str);
	strcat(str,"%");
	str+=strlen(str);
	string_NC(temp->link->list,str);
//	sprintf(str,"%s%%%s",string_NC(temp->link),string_NC(temp->link->list));
return;
}
else return;
}
else if(temp->type=='T'){
if(temp->link->type=='V'){
strcpy(str,current_table->bucket[temp->link->inc].symP);
 return;
}
else if(temp->link->type=='A'){
strcpy(str,current_table->bucket[temp->link->inc].symP);
str+=strlen(str);
//	sprintf(str,"%s",current_table->bucket[temp->link->inc].symP);
	temp1=temp->link->link;
	while(temp1!=NULL){
str[0]='[';
str++;
string_NC(temp1,str);
strcat(str,"]");
str+=strlen(str);
//	sprintf(str,"%s[%s]",str,string_NC(temp1));
	temp1=temp1->list;
	}
	return;
}
else return;
}
else if(temp->type=='R'){
if(temp->inc==LTR){
	string_NC(temp->link,str);
	strcat(str,"<");
	str+=strlen(str);
	string_NC(temp->link->list,str);
	return;
	}
else if(temp->inc==GTR){
	string_NC(temp->link,str);
	strcat(str,">");
	str+=strlen(str);
	string_NC(temp->link->list,str);
	return;
//	sprintf(str,"%s>%s",string_NC(temp->link),string_NC(temp->link->list));
//	return str;
	}
else if(temp->inc==LER){
	string_NC(temp->link,str);
	strcat(str,"<=");
	str+=strlen(str);
	string_NC(temp->link->list,str);
	return;
	}
else if(temp->inc==GER){
	string_NC(temp->link,str);
	strcat(str,">=");
	str+=strlen(str);
	string_NC(temp->link->list,str);
	return;
	}
else if(temp->inc==EQR){
	string_NC(temp->link,str);
	strcat(str,"==");
	str+=strlen(str);
	string_NC(temp->link->list,str);
	return;
	}
else if(temp->inc==NER){
	string_NC(temp->link,str);
	strcat(str,"!=");
	str+=strlen(str);
	string_NC(temp->link->list,str);
	return;
	}
else return;
}
else if(temp->type=='C'){
  sprintf(str,"%d",temp->inc);
  return;
}
else if(temp->type=='O'){
if (temp->inc==NEG){
str[0]='~';		// checkpoint
str++;
string_NC(temp->link,str);
//	sprintf(str,"~%s",string_NC(temp->link));
	return;
}
else if(temp->inc==ANDOP){
str[0]='(';
str++;
string_NC(temp->link,str);
temp1=temp->link->list;
while(temp1!=NULL){
strcat(str,") && (");
str+=strlen(str);
string_NC(temp1,str);
temp1=temp1->list;
}
strcat(str,")");
// 	sprintf(str,"(%s) && (%s)",string_NC(temp->link),string_NC(temp->link->list));
	return;
}
else if(temp->inc==OROP){
str[0]='(';
str++;
string_NC(temp->link,str);
temp1=temp->link->list;
while(temp1!=NULL){
strcat(str,") || (");
str+=strlen(str);
string_NC(temp1,str);
temp1=temp1->list;
}
strcat(str,")");
//	sprintf(str,"(%s) || (%s)",string_NC(temp->link),string_NC(temp->link->list));
	return;
}
else if(temp->inc==AND){
str[0]='(';
str++;
string_NC(temp->link,str);
temp1=temp->link->list;
while(temp1!=NULL){
strcat(str,") & (");
str+=strlen(str);
string_NC(temp1,str);
temp1=temp1->list;
}
strcat(str,")");
//	sprintf(str,"(%s) & (%s)",string_NC(temp->link),string_NC(temp->link->list));
	return;
}
else if(temp->inc==ORP){
str[0]='(';
str++;
string_NC(temp->link,str);
temp1=temp->link->list;
while(temp1!=NULL){
strcat(str,") | (");
str+=strlen(str);
string_NC(temp1,str);
temp1=temp1->list;
}
strcat(str,")");
//	sprintf(str,"(%s) | (%s)",string_NC(temp->link),string_NC(temp->link->list));
	return;
}
else if(temp->inc==NOT){
strcpy(str,"!(");
str+=strlen(str);
string_NC(temp->link,str);
strcat(str,")");
//  sprintf(str,"!(%s)",string_NC(temp->link));
	return;
}
else return;
}
else if(temp->type == 'f'){
strcpy(str,current_table->bucket[temp->inc].symP);
strcat(str,"(");
//	sprintf(str,"%s(",current_table->bucket[temp->inc].symP);
	if(temp->link!=NULL){
str+=strlen(str);
string_NC(temp->link,str);
//	sprintf(str,"%s%s",str,string_NC(temp->link));
	temp=temp->link->list;
	while(temp!=NULL){
strcat(str,",");
str+=strlen(str);
string_NC(temp,str);
//		sprintf(str,"%s,%s",str,string_NC(temp));
		temp=temp->list;
	}
}
strcat(str,")");
//	sprintf(str,"%s)",str);
	return;
}
else return;
}


/******************************************************************************************/

/*  This function is used to get the variable in string from                */
/*  It takes index of the variable as input and returns the pointer */
/*  to the string containing the variable : applies even to arrays                   */

/******************************************************************************************/

// to get the variable string form from index
char *variable(int inc){
char *str,*str1;
str=(char *)malloc(sizeof(char)*100);
str1=(char *)malloc(sizeof(char)*100);
int rm,jj=inc,k,i=0,j1;
symtab *table;table=current_table;
if(inc<table->count) {
if(table->bucket[inc].dim==0)
return table->bucket[inc].symP;
else{
sprintf(str,"%s",table->bucket[inc].symP);
for(jj=0;jj<table->bucket[inc].dim;jj++)
	sprintf(str,"%s[0]",str);
return str;
}}
else {
  i=0;rm=jj/1000;
  jj%=1000;str = NULL;
  sprintf(str1,"%s",table->bucket[jj].symP);
  while(i<table->bucket[jj].dim){
    k=1;j1=table->bucket[jj].dim-1;
    while(j1>i){
      k*=table->bucket[jj].ar[j1];
      j1--;
    }
    sprintf(str1,"%s[%d]",str1,rm/k);
    rm%=k;i++;
  }
  return str1;
}
}


/******************************************************************************************/

/*  This function is used to get the string form of data transition                */
/*  It takes original data transition expression as input and returns the pointer */
/*  to string form of it                    */

/******************************************************************************************/

// get the string form of data transition expression
char *string_DTr(DATA_TRANS *action){
if(action==NULL) return NULL;
char *temp,*NCstr,*varP;
varP=(char *)malloc(sizeof(char)*100);
NCstr=(char *)malloc(sizeof(char)*100);
temp=(char *)malloc(sizeof(char)*100);
//printf("\nhello %d %d\n",action->lhs,action->flag);
if(action->flag==FALSE) varP=variable(action->lhs);
else { string_NC(action->lhs_NC,varP);
// printf("\nentered \n");
// print_NC(action->lhs_NC);
// printf("string : %s %s\n",varP,string_NC(action->lhs_NC));
// exit(1);
}

/* if(sizeof(action->lhs)==sizeof(int)){
//	printf("hi 2 : %d\n",action->lhs);
	varP=variable(action->lhs);
}
else {
printf("hi\n");
varP=string_NC(&action->lhs_NC);
printf("~~~~~~~~~~~~~~~~~~~~~ NC lhs : %s\n",varP);
exit(1);
}*/
string_NC(action->rhs,NCstr);
sprintf(temp,"%s=%s",varP,NCstr);
//free(varP);
//free(NCstr);
return temp;
}


void copy_lNC(NC A,NC B){//trans1->action[i].lhs_NC,list->trans->lhs_NC){
printf("in copy_lNC : \n");
A.link=B.link;
A.inc=B.inc;
A.type=B.type;
A.list=B.list;
/*
printf("%d %d\n",A.inc,B.inc);
printf("%c %c\n",A.type,B.type);
if(B.link!=NULL){
printf("link : %d %d\n",A.link->inc,B.link->inc);
printf("link : %c %c\n",A.link->type,B.link->type);
print_NC(A.link);
printf("\nasda\n");
print_NC(B.link);
}
if(B.list!=NULL){
printf("list : %d %d\n",A.list->inc,B.list->inc);
printf("list : %c %c\n",A.list->type,B.list->type);
print_NC(A.list);
}
exit(1);*/
}



void modify_comments(){
int i=0; char *temp_str1,*temp_str2;
temp_str1=(char*)malloc(100*sizeof(char));
temp_str2=(char*)malloc(100*sizeof(char));
TRANSITION_ST *temp;
printf("/**LELB situations will be handled here**/\n");
printf("time_stamp : state_id comments\n");
for(i=0;i<MAXSTATES;i++)
if(strcmp(comments[i],"2")==0){
temp=c2f->states[i].translist;
temp=temp->next;
if(strlen(c2f->states[temp->outtrans].state_id)!=4+strlen(temps)){
printf("*****************LELB situation : \n");
printf("intially : %s : %s\n",c2f->states[temp->outtrans].state_id,comments[temp->outtrans]);
strcpy(temp_str1,c2f->states[temp->outtrans].state_id);
strncpy(temp_str2,c2f->states[temp->outtrans].state_id,4+strlen(temps));
temp_str2[4+strlen(temps)]='\0';
temp_str1+=4+strlen(temps);
strcat(temp_str2,"LE");
strcat(temp_str2,temp_str1);
strcpy(c2f->states[temp->outtrans].state_id,temp_str2);
strcpy(temp_str1,comments[temp->outtrans]);
strcpy(comments[temp->outtrans],"/* loop_end */");
strcat(comments[temp->outtrans],temp_str1);
printf("finally : %s : %s\n",c2f->states[temp->outtrans].state_id,comments[temp->outtrans]);
printf("**********************************\n");
}
else {
	strcat(c2f->states[temp->outtrans].state_id,"LE");
	strcat(comments[temp->outtrans],"/* loop_end */");
	}
strcpy(comments[i],"\0");
}
}


int check_NC(NC *t){
	if(t==NULL) return 0;
	else if(t->type == 'U') return -1;
	else return check_NC(t->list) + check_NC(t->link);
}



p_lisT *copy_lisT(p_lisT *inp){
p_lisT *temp,*outp;
if(inp==NULL) return NULL;
outp=(p_lisT*)malloc(sizeof(p_lisT));
temp=outp;
while(inp->next!=NULL){
outp->idnt=(char*)malloc(sizeof(char)*strlen(inp->idnt));
strcpy(outp->idnt,inp->idnt);
outp->vart=inp->vart;
outp->index=inp->index;
outp->next=(p_lisT*)malloc(sizeof(p_lisT));
outp=outp->next;
inp=inp->next;
}
outp->idnt=(char*)malloc(sizeof(char)*strlen(inp->idnt));
strcpy(outp->idnt,inp->idnt);
outp->vart=inp->vart;
outp->index=inp->index;
return temp;
}

void intialize_state(int state_count){
sprintf(c2f->states[state_count].state_id,"%s%d",temps,1000+state_count);
c2f->states[state_count].node_type=NORMAL;
c2f->numstates++;
return;
}



#ifdef DOTTY

void print_dotty(char *filename){
char *file;
l2=l1;
print_lisT(l2);
int i;
file=(char*)malloc(sizeof(char)*50);
sprintf(file,"HTG_%s_c_main.dotty",filename);
FILE *fout3;
fout3=fopen(file,"w");

fprintf(fout3,"digraph routine\n{\nfontname = \"Times-Roman\"; fontsize = 14;\n");
fprintf(fout3,"nodesep = 0.1; ranksep = 0.5;\nnode [height = 0.25, width = 0.4, shape = %s ];\n",shapes[1]);
fprintf(fout3,"edge [color = %s ];\n",colors[0]);
printf("loop count : %d\n",loop_count);
loops=(int**)malloc(sizeof(int*)*loop_count);
for(i=0;i<loop_count;i++)
	loops[i]=(int*)malloc(sizeof(int)*3);
string_clusters=(char**)malloc(sizeof(char*)*loop_count);
for(i=0;i<loop_count;i++)
	string_clusters[i]=(char*)malloc(sizeof(char)*15000);
printf("hi allocations succesful\nloops sorting & merging :\n");
for(i=0;i<loop_count;i++){
loops[i][2]=1;
string_loop(l2,i);
if(l2->type==IFEL) l2=l2->next;
l2=l2->next;
}
printf("loops sorted\n");
// sort_loops();	//sorts the list
int a,b,c;
a=start_state;b=start_state;

while(b!=end_state){
printf("<%d,%d,%d,%d>\n",start_state,end_state,a,b);
a=b;
if((c=check_loop(a))!=-1){
fprintf(fout3,"%s",string_clusters[c]);
printf("loop inserted : %d %d\n",loops[c][0],loops[c][1]);
b=loops[c][1];
loops[c][2]=0;
}
else{
if(c2f->states[a].numtrans==2){
printf("error %d %d %d\n",a,b,start_state);
}
fprintf(fout3,"%s",print_node(a,NODE));
b=c2f->states[a].translist->outtrans;
}
}
printf("Ok till here : loops modifications succesful\n");

fprintf(fout3,"node%s [color=%s shape=%s,label=\"{%s : data_transitions=0\\n}\"];\n",c2f->states[b].state_id,colors[2],shapes[0],c2f->states[b].state_id);
//fprintf(fout3,"%s\n",print_node(b,NODE));
printf("Ok till here : nodes are added \nLinks now :\n");
for(i=0;i<MAXSTATES;i++)
if(c2f->states[i].node_type!=UNDEF){
if(c2f->states[i].numtrans==1){
fprintf(fout3,"node%s -> node%s [label=\"\"];\n",c2f->states[i].state_id,c2f->states[c2f->states[i].translist->outtrans].state_id);
}
else if(c2f->states[i].numtrans==2){
fprintf(fout3,"node%s -> node%s [label=\"T\"];\n",c2f->states[i].state_id,c2f->states[c2f->states[i].translist->outtrans].state_id);
fprintf(fout3,"node%s -> node%s [label=\"F\"];\n",c2f->states[i].state_id,c2f->states[c2f->states[i].translist->next->outtrans].state_id);
}
else if(c2f->states[i].numtrans==0) {printf("end state reached : %d\n",i);}
else printf("error : %d\n",i);
}
printf("links too finished\n");
fprintf(fout3,"\n}\n\n\n");
printf("Generated output file names : HTG_%s_c_main.dotty %s.org %s1.org\n",filename,filename,filename);
fclose(fout3);

printf("dotty finished\n");
}


char *print_node(int node,int type){
char *temp;
temp=(char*)malloc(1000*(sizeof(char)));
// printf("hi print <%d,%d>\n",node, type);
if(type==CONDN){
sprintf(temp,"node%s [color=%s shape=%s,label=\"{%s : data_transitions=0\\n",c2f->states[node].state_id,colors[2],shapes[0],c2f->states[node].state_id);
sprintf(temp,"%s|?%s\\n",temp,modify_string_print(c2f->states[node].translist->condition));
}
else {
sprintf(temp,"node%s [color=%s shape=%s,label=\"{%s : data_transitions=%d\\n",c2f->states[node].state_id,colors[2],shapes[0],c2f->states[node].state_id,c2f->states[node].numtrans);
TRANSITION_ST *tt;int i;
tt=c2f->states[node].translist;
for(i=0;i<tt->datatrans_cnt;i++)
	sprintf(temp,"%s|%s\\n",temp,string_DTr(&tt->action[i]));
}
strcat(temp,"}\"];\n");
return temp;
}


char *modify_string_print(NC *N){
char *temp,*temp1,*temp2;
temp=(char *)malloc(sizeof(char)*100);
string_NC(N,temp);
temp1=(char*)malloc(sizeof(char)*(4+strlen(temp)));
temp2=temp1;
while(temp[0]!='\0'){
if(temp[0]=='<' || temp[0]=='>') {temp2[0]='\\';++temp2;}
temp2[0]=temp[0];
++temp2;
++temp;
}
temp2[0]='\0';
return temp1;
}


// int loops[loop_count][4];
void string_loop(loopi *loop,int i){
int a,b,c,j;
if(loop->type==IFL){
a=loop->start;
loops[i][0]=a;
b=c2f->states[a].translist->next->outtrans;
loops[i][1]=b;
printf("if <%d,%d> ",loops[i][0],loops[i][1]);
sprintf(string_clusters[i],"subgraph cluster_if_IF%d  { color=%s; label=\"IF%d\";\n",if_count,colors[1],if_count);
if_count++;
j=c2f->states[a].translist->outtrans;
strcat(string_clusters[i],print_node(a,CONDN));
printf("sizes :");
while(j!=b){
if((c=check_loops(j,i))==-1){
strcat(string_clusters[i],print_node(j,NODE));
j=c2f->states[j].translist->outtrans;
}
else{
printf(" <%d,%d>",strlen(string_clusters[i]),strlen(string_clusters[c]));
strcat(string_clusters[i],string_clusters[c]);
// free(string_clusters[c]);
j=loops[c][1];
loops[c][2]=0;
}
}
strcat(string_clusters[i],"}\n");
printf("<%d,%d,%d> ",loops[i][0],loops[i][1],loops[i][2]);
}
else if(loop->type==IFEL){
a=loop->start;
loops[i][0]=a;
b=find_end(a,loop->end);
printf("ifel <%d,%d> ",loops[i][0],loops[i][1]);
if(b==-1) exit(1);
loops[i][1]=b;
sprintf(string_clusters[i],"subgraph cluster_ifelse_IFELSE%d  { color=%s; label=\"IFELSE%d\";\n",ifel_count,colors[1],ifel_count);
ifel_count++;
j=c2f->states[a].translist->outtrans;
strcat(string_clusters[i],print_node(a,CONDN));
printf("sizes :");
while(j!=b){
if((c=check_loops(j,i))==-1){
strcat(string_clusters[i],print_node(j,NODE));
j=c2f->states[j].translist->outtrans;
}
else{
printf(" <%d,%d>",strlen(string_clusters[i]),strlen(string_clusters[c]));
strcat(string_clusters[i],string_clusters[c]);
// free(string_clusters[c]);
j=loops[c][1];
loops[c][2]=0;
}
}

j=c2f->states[a].translist->next->outtrans;
//strcat(string_clusters[i],print_node(a,CONDN));
while(j!=b){
if((c=check_loops(j,i))==-1){
strcat(string_clusters[i],print_node(j,NODE));
j=c2f->states[j].translist->outtrans;
}
else{
printf(" <%d,%d>",strlen(string_clusters[i]),strlen(string_clusters[c]));
strcat(string_clusters[i],string_clusters[c]);
// free(string_clusters[c]);
j=loops[c][1];
loops[c][2]=0;
}
}
strcat(string_clusters[i],"}\n");
printf("sizes end <%d,%d,%d> ",loops[i][0],loops[i][1],loops[i][2]);
}
else {
a=loop->start1;
loops[i][0]=a;
b=c2f->states[a].translist->next->outtrans;
loops[i][1]=b;
printf("loop <%d,%d> ",loops[i][0],loops[i][1]);
strcpy(string_clusters[i],print_node(a,CONDN));
sprintf(string_clusters[i],"%ssubgraph cluster_loop_LOOP%d  { color=%s; label=\"LOOP%d\";\n",string_clusters[i],loopl_count,colors[1],loopl_count);
loopl_count++;
j=c2f->states[a].translist->outtrans;
printf("sizes :");
while(j!=a){
if((c=check_loops(j,i))==-1){
strcat(string_clusters[i],print_node(j,NODE));
// printf("loop : %d -> %d\n",j,c2f->states[j].translist->outtrans);
j=c2f->states[j].translist->outtrans;
}
else{
printf(" <%d,%d>",strlen(string_clusters[i]),strlen(string_clusters[c]));
strcat(string_clusters[i],string_clusters[c]);
// free(string_clusters[c]);
j=loops[c][1];
loops[c][2]=0;
}
}
strcat(string_clusters[i],"}\n");
printf("sizes end <%d,%d,%d> ",loops[i][0],loops[i][1],loops[i][2]);
}
printf("end\n");
return;
}

int check_loop(int node){
int i=0;
for(i=0;i<loop_count;i++){
if(loops[i][0]==node){
if(loops[i][2]==1) return i;
printf("some error : %d %d %d\n",loops[i][0],loops[i][1],loops[i][2]);
exit(1);
}
}
return -1;
}


int check_loops(int node, int pos){
int i=0;
while(i<pos){
if(loops[i][0]==node)
	return i;
i++;
}
return -1;
}


int find_end(int node,int endl){
int z;
z=c2f->states[node].translist->next->outtrans;
if(c2f->states[z].translist->outtrans==endl)
	return endl;
int y,A[100],B[100],i,a=0,b=0;
y=c2f->states[node].translist->outtrans;
A[a]=y;B[b]=z;
while(a<99 && b<99){
for(i=0;i<=a;i++)
	if(A[i]==B[b]) return A[i];
for(i=0;i<=b;i++)
	if(A[a]==B[i]) return A[a];
a++;b++;
A[a]=c2f->states[A[a-1]].numtrans==2 ? c2f->states[A[a-1]].translist->next->outtrans:c2f->states[A[a-1]].translist->outtrans;
B[b]=c2f->states[B[b-1]].numtrans==2 ? c2f->states[B[b-1]].translist->next->outtrans:c2f->states[B[b-1]].translist->outtrans;
}
printf("error : please increase arrays :A,B sizes in function  find_end and re run\n");
return  -1;
}


void print_lisT(loopi *tmp){
printf("loop list :\n");
while(tmp!=NULL){
printf("<%d,%d,%d,%d>\n",tmp->start,tmp->start1,tmp->end,tmp->type);
tmp=tmp->next;
}
printf("end\n");
}

#endif

void cleans(char *st){
int i=strlen(st);
while(i>0){
st[i]='\0';
i--;
}
return;
}


