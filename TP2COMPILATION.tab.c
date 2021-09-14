
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "TP2COMPILATION.y"

	

#include "TP3SEMANTIQUE.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 			
int yyerror(char const *msg);	
int yylex(void);
char nom[256];
extern int yylineno;

void Begin();
void End();




/* Line 189 of yacc.c  */
#line 93 "TP2COMPILATION.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     integer_type = 258,
     char_type = 259,
     real_type = 260,
     UNSIGNED_ENTIER = 261,
     while_keyword = 262,
     do_keyword = 263,
     of_keyword = 264,
     array_keyword = 265,
     endif_keyword = 266,
     program_keyword = 267,
     begin_keyword = 268,
     end_keyword = 269,
     procedure_keyword = 270,
     function_keyword = 271,
     var_keyword = 272,
     if_keyword = 273,
     then_keyword = 274,
     else_keyword = 275,
     write_keyword = 276,
     read_keyword = 277,
     virgule = 278,
     deux_points = 279,
     OP_AFFECT = 280,
     parenthese_ouvrante = 281,
     parenthese_fermante = 282,
     Number = 283,
     OP_MULTIPLICATION = 284,
     OP_DIVISION = 285,
     OP_ADDITION = 286,
     OP_SOUSTRACTION = 287,
     COMMENT_LINE = 288,
     point_virgule = 289,
     MULTILINE_COMMENT = 290,
     crochet_fermant = 291,
     crochet_ouvrant = 292,
     DEUX_POINTS_HORIZ = 293,
     single_quote_string = 294,
     double_quote_string = 295,
     identifier = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 176 "TP2COMPILATION.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  303

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    16,    19,    21,    25,    29,
      33,    37,    39,    42,    46,    50,    54,    58,    62,    64,
      65,    70,    74,    76,    78,    80,    82,    84,    86,    88,
      90,    92,   101,   110,   119,   128,   137,   146,   155,   164,
     173,   175,   178,   179,   183,   184,   189,   191,   192,   193,
     200,   201,   206,   209,   213,   216,   220,   221,   226,   229,
     233,   237,   239,   243,   247,   250,   254,   258,   262,   265,
     269,   271,   274,   278,   280,   288,   296,   304,   312,   320,
     325,   330,   335,   341,   343,   347,   351,   355,   360,   365,
     369,   373,   377,   382,   387,   392,   397,   402,   407,   409,
     410,   416,   421,   426,   431,   432,   433,   439,   440,   441,
     448,   453,   454,   459,   461,   465,   467,   471,   475,   479,
     483,   487,   491,   495,   499,   503,   507,   511,   515,   519,
     521,   523,   525,   526,   532,   537,   542,   546,   550
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    45,    53,    64,    -1,    44,    45,
      64,    -1,    44,    53,    64,    -1,    44,    64,    -1,    44,
      -1,    12,    41,    34,    -1,     1,    41,    34,    -1,    12,
       1,    34,    -1,    12,    41,     1,    -1,    46,    -1,    46,
      45,    -1,    17,    47,    34,    -1,     1,    47,    34,    -1,
      17,    47,     1,    -1,    48,    24,    52,    -1,    48,     1,
      52,    -1,    41,    -1,    -1,    41,    49,    23,    48,    -1,
      41,     1,    48,    -1,     3,    -1,     5,    -1,     4,    -1,
       1,    -1,     3,    -1,     5,    -1,     4,    -1,     1,    -1,
      50,    -1,    10,    37,     6,    38,     6,    36,     9,    51,
      -1,     1,    37,     6,    38,     6,    36,     9,    51,    -1,
      10,     1,     6,    38,     6,    36,     9,    51,    -1,    10,
      37,     1,    38,     6,    36,     9,    51,    -1,    10,    37,
       6,     1,     6,    36,     9,    51,    -1,    10,    37,     6,
      38,     1,    36,     9,    51,    -1,    10,    37,     6,    38,
       6,     1,     9,    51,    -1,    10,    37,     6,    38,     6,
      36,     1,    51,    -1,    10,    37,     6,    38,     6,    36,
       9,     1,    -1,    54,    -1,    54,    53,    -1,    -1,    57,
      55,    64,    -1,    -1,    57,    56,    45,    64,    -1,    57,
      -1,    -1,    -1,    15,    41,    58,    61,    59,    34,    -1,
      -1,    15,    41,    60,    34,    -1,     1,    41,    -1,     1,
      41,    61,    -1,    15,     1,    -1,    15,     1,    61,    -1,
      -1,    26,    63,    62,    27,    -1,    26,    27,    -1,     1,
      63,    27,    -1,    26,    63,     1,    -1,    47,    -1,    47,
      34,    63,    -1,    47,     1,    63,    -1,    13,    14,    -1,
      13,    65,    14,    -1,     1,    65,    14,    -1,    13,    65,
       1,    -1,    67,    34,    -1,    67,    34,    65,    -1,    66,
      -1,    66,    65,    -1,    67,     1,    65,    -1,    64,    -1,
      18,    77,    19,    65,    20,    65,    11,    -1,     1,    77,
      19,    65,    20,    65,    11,    -1,    18,    77,     1,    65,
      20,    65,    11,    -1,    18,    77,    19,    65,     1,    65,
      11,    -1,    18,    77,    19,    65,    20,    65,     1,    -1,
       7,    77,     8,    65,    -1,     1,    77,     8,    65,    -1,
       7,    77,     1,    65,    -1,     7,    77,     8,    65,     1,
      -1,    70,    -1,    68,    25,    77,    -1,    68,     1,    77,
      -1,    21,    26,    27,    -1,    21,    26,    75,    27,    -1,
      22,    26,    48,    27,    -1,     1,    26,    27,    -1,    21,
       1,    27,    -1,    21,    26,     1,    -1,     1,    26,    75,
      27,    -1,    21,     1,    75,    27,    -1,    21,    26,    75,
       1,    -1,     1,    26,    48,    27,    -1,    22,     1,    48,
      27,    -1,    22,    26,    48,     1,    -1,    41,    -1,    -1,
      41,    69,    37,    77,    36,    -1,     1,    37,    77,    36,
      -1,    41,     1,    77,    36,    -1,    41,    37,    77,     1,
      -1,    -1,    -1,    41,    71,    26,    27,    72,    -1,    -1,
      -1,    41,    73,    26,    75,    27,    74,    -1,    41,    26,
       1,    27,    -1,    -1,    77,    76,    23,    75,    -1,    77,
      -1,    77,     1,    75,    -1,    78,    -1,    78,    31,    78,
      -1,    78,    32,    78,    -1,    78,    29,    78,    -1,    78,
      30,    78,    -1,     1,    31,    78,    -1,    78,    31,     1,
      -1,    78,    32,     1,    -1,     1,    32,    78,    -1,     1,
      29,    78,    -1,    78,    29,     1,    -1,     1,    30,    78,
      -1,    78,    30,     1,    -1,    78,     1,    78,    -1,     6,
      -1,    28,    -1,    41,    -1,    -1,    41,    79,    37,    77,
      36,    -1,    41,     1,    77,    36,    -1,    41,    37,    77,
       1,    -1,    26,    77,    27,    -1,     1,    77,    27,    -1,
      26,    77,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    67,    68,    69,    70,    74,    75,    76,
      77,    81,    82,    84,    85,    86,    88,    96,    98,   101,
     101,   105,   108,   108,   108,   108,   110,   110,   110,   110,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     124,   125,   127,   127,   128,   128,   129,   133,   145,   131,
     154,   153,   165,   166,   167,   168,   171,   170,   174,   175,
     176,   178,   179,   180,   182,   183,   184,   185,   188,   189,
     190,   191,   192,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   208,   210,   211,   214,   215,   218,   222,
     223,   224,   226,   227,   228,   230,   231,   232,   236,   239,
     239,   243,   244,   245,   248,   252,   247,   260,   264,   259,
     269,   273,   272,   277,   282,   284,   285,   286,   287,   288,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   300,
     300,   300,   304,   304,   308,   309,   310,   311,   312
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "integer_type", "char_type", "real_type",
  "UNSIGNED_ENTIER", "while_keyword", "do_keyword", "of_keyword",
  "array_keyword", "endif_keyword", "program_keyword", "begin_keyword",
  "end_keyword", "procedure_keyword", "function_keyword", "var_keyword",
  "if_keyword", "then_keyword", "else_keyword", "write_keyword",
  "read_keyword", "virgule", "deux_points", "OP_AFFECT",
  "parenthese_ouvrante", "parenthese_fermante", "Number",
  "OP_MULTIPLICATION", "OP_DIVISION", "OP_ADDITION", "OP_SOUSTRACTION",
  "COMMENT_LINE", "point_virgule", "MULTILINE_COMMENT", "crochet_fermant",
  "crochet_ouvrant", "DEUX_POINTS_HORIZ", "single_quote_string",
  "double_quote_string", "identifier", "$accept", "program", "entete",
  "liste_declarations", "declaration", "declaration_corps",
  "liste_identifiers", "$@1", "standard_type", "std_type_array", "type",
  "declaration_methodes", "declaration_methode", "$@2", "$@3",
  "entete_methode", "$@4", "$@5", "$@6", "arguments", "$@7",
  "liste_parametres", "instruction_composee", "liste_instructions", "bloc",
  "instruction", "lvalue", "$@8", "appel_methode", "$@9", "$@10", "$@11",
  "$@12", "liste_expressions", "$@13", "expression", "facteur", "$@14", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    43,    43,    43,    44,    44,    44,
      44,    45,    45,    46,    46,    46,    47,    47,    48,    49,
      48,    48,    50,    50,    50,    50,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    55,    54,    56,    54,    54,    58,    59,    57,
      60,    57,    57,    57,    57,    57,    62,    61,    61,    61,
      61,    63,    63,    63,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    68,    69,
      68,    68,    68,    68,    71,    72,    70,    73,    74,    70,
      70,    76,    75,    75,    75,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    79,    78,    78,    78,    78,    78,    78
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     1,     3,     3,     3,
       3,     1,     2,     3,     3,     3,     3,     3,     1,     0,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       1,     2,     0,     3,     0,     4,     1,     0,     0,     6,
       0,     4,     2,     3,     2,     3,     0,     4,     2,     3,
       3,     1,     3,     3,     2,     3,     3,     3,     2,     3,
       1,     2,     3,     1,     7,     7,     7,     7,     7,     4,
       4,     4,     5,     1,     3,     3,     3,     4,     4,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     1,     0,
       5,     4,     4,     4,     0,     0,     5,     0,     0,     6,
       4,     0,     4,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     0,     5,     4,     4,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     5,     8,
       9,    10,     7,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,    83,    64,     0,     0,
       0,    47,     0,     0,     0,     0,     3,     0,    12,     0,
       4,     0,    41,     0,     0,     0,   129,     0,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
      14,     0,     0,    66,    71,     0,     0,     0,     0,     0,
       0,    67,    65,     0,     0,    55,     0,     0,     0,    15,
      13,     0,     2,     0,    43,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,    25,    22,    24,    23,     0,
      30,    17,    16,    72,    69,    85,    84,    48,    51,    21,
       0,    45,     0,   124,   126,   120,   123,   137,     0,    95,
      92,     0,   136,     0,   101,     0,     0,     0,    80,     0,
     128,     0,   118,     0,   119,     0,   116,     0,   117,   138,
       0,     0,    81,     0,     0,     0,    93,     0,    94,    87,
      96,    97,    88,     0,     0,    59,   102,   110,    60,     0,
     103,    20,     0,   105,     0,     0,     0,     0,     0,   114,
       0,   134,   135,     0,     0,   134,   135,    82,     0,     0,
       0,    63,    62,    57,   100,   106,   108,     0,     0,     0,
       0,    49,   112,   133,     0,     0,     0,     0,   109,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    26,    28,    27,    32,    33,    34,    35,    36,    37,
      38,    29,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    14,   143,    30,    75,   160,   294,
     161,    15,    16,    53,    54,    17,    96,   228,    97,    76,
     219,   145,    31,    32,    33,    34,    35,    77,    36,    78,
     245,    79,   258,   229,   183,   127,    62,   119
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -69
static const yytype_int16 yypact[] =
{
     226,   -19,    20,    78,   553,   103,   123,     9,   -69,    38,
     365,    27,   147,   198,   354,   204,   313,   274,   -69,   -69,
     -69,   -69,   -69,   194,   132,   132,     8,    99,   489,   169,
      17,   -69,   195,   283,   142,   171,   -69,   -69,   138,    13,
     422,   191,   242,   146,   375,   204,   -69,   147,   -69,   391,
     -69,   192,   -69,   204,   119,   161,   -69,    57,   -69,   132,
     448,   237,   508,   333,   132,   432,   273,    10,   125,   143,
     147,   147,   310,    47,   132,   211,   -69,   231,   224,   247,
     -69,   568,   568,   -69,   -69,   391,   299,   132,   132,   132,
     275,   -69,   -69,   147,   113,   -69,   180,   248,   147,   -69,
     -69,   504,   -69,   507,   -69,   204,   374,   374,   374,   374,
       5,   -69,   464,   258,   265,   225,   259,   132,   132,   261,
     391,   391,   374,   393,   402,   416,   419,   272,    92,   132,
     132,   391,   391,   391,   391,   -69,   281,   260,   301,   -69,
     128,   282,   177,   101,    17,   288,   286,   291,   -69,   196,
     322,   147,   132,   298,   132,   304,   -69,   -69,   -69,    35,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     310,   -69,   132,   -69,   -69,   -69,   -69,   -69,   310,   -69,
     -69,    86,   -69,   321,   -69,   309,   345,   132,   -69,   328,
     -69,    63,   -69,   213,   -69,   236,   -69,   252,   -69,   -69,
     316,   352,   -69,   336,   340,    11,   -69,   132,   -69,   -69,
     -69,   -69,   -69,   147,   147,   -69,   -69,   -69,   -69,   341,
     -69,   -69,   334,   -69,   346,   378,   379,    19,   347,   -69,
     132,   185,   193,   353,   391,   -69,   -69,   -69,   391,   391,
     391,   -69,   -69,   -69,   -69,   -69,   -69,   357,   363,   367,
       6,   -69,   -69,   -69,   380,   396,   399,   256,   -69,   384,
     405,   408,   412,   245,   -69,   -69,   -69,   -69,   -69,   388,
     390,   395,   400,   410,    37,   418,   420,   429,   461,   462,
     463,   141,   449,   449,   449,   449,   449,   449,   449,   554,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -69,    16,   -69,    94,   -17,   -69,   -69,   296,
     359,    64,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -34,
     -69,   -68,     4,   -10,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -53,   -69,   -22,   439,   -69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -139
static const yytype_int16 yytable[] =
{
      39,    61,    66,    67,   114,   149,    95,   262,    18,    68,
      21,   133,   239,   120,    91,   136,   140,    46,    81,    50,
     249,     6,     5,    84,   121,   250,   149,    92,    40,   134,
      48,   240,   177,   110,    69,   115,   226,   116,   280,    23,
     113,    82,   128,    22,   263,    24,   137,   137,   147,   102,
     146,    10,   150,   141,   142,   144,    25,   104,    63,    26,
      27,     7,   167,    56,    63,   165,   166,   146,    41,    56,
     105,  -125,   227,   281,   148,   163,   164,    45,     8,    28,
      52,   169,  -125,    64,   111,    58,  -125,    63,    42,    64,
    -125,    58,    56,   199,  -138,   185,   186,  -125,   112,  -125,
      70,   224,   213,    29,    65,  -138,    43,   200,   201,   171,
     188,   189,    64,  -138,    58,  -138,  -138,  -138,  -138,   182,
      47,   202,   203,   204,   205,    71,    63,    65,   -61,   208,
     222,    56,   137,    63,   221,   214,    12,    19,    56,    89,
     148,    29,   288,    85,   138,   241,   242,    99,   146,    56,
     289,    64,   135,    58,    42,   209,   200,    20,    64,   137,
      58,   169,    55,   -98,    90,   233,    65,    56,    24,    64,
     139,    58,    87,    65,    10,    74,    86,   252,   211,    25,
     100,    93,    26,    27,    65,   137,  -102,    57,    42,    58,
     106,   107,   108,   109,  -103,    55,    88,   218,    59,    44,
      56,    24,    60,    80,   212,    49,    94,    10,   137,    83,
    -102,    10,    25,    11,    63,    26,    27,    10,  -103,    56,
      57,  -127,    58,   -56,   254,   -50,   181,     1,   255,   256,
     257,    59,  -127,   103,   151,    60,  -127,    63,     2,    64,
    -127,    58,    56,    98,  -121,   120,   273,  -127,  -111,  -127,
     153,   274,   182,    63,    65,  -121,   121,   267,    56,  -121,
    -122,   207,    64,  -121,    58,   -19,   -18,   268,   152,   -18,
    -121,  -122,  -121,   154,   131,  -122,   147,    65,    64,  -122,
      58,   132,   168,  -111,    23,   179,  -122,  -113,  -122,   -46,
      24,   -44,   180,    65,   -70,   184,    10,   -70,   187,   177,
      23,    25,    63,   -70,    26,    27,    24,    56,   206,   210,
     -68,    63,    10,   -68,    51,   215,    56,    25,   217,   -68,
      26,    27,   216,   220,    38,   223,   -40,    64,    11,    58,
     106,   107,   108,   109,    63,   -91,    64,   237,    58,    56,
      38,   225,    65,   -79,   230,   231,   232,   -79,   234,   -79,
     -79,   112,   235,   236,   -79,    47,   -79,   -79,   -79,    64,
     238,    58,   106,   107,   108,   109,    23,   -11,   243,   -11,
     244,    12,    24,   246,    65,   172,    23,   -79,    10,    37,
      56,   251,    24,    25,   247,   248,    26,    27,    10,   253,
     269,   264,    23,    25,   191,   259,    26,    27,    24,    56,
      64,   260,    58,   193,    10,   261,    38,   265,    56,    25,
     266,   270,    26,    27,   271,    65,   101,   195,   272,    64,
     197,    58,    56,    93,   275,    56,   276,   282,    64,   283,
      58,   277,    38,   129,    65,   -54,   278,   -54,   284,   -54,
    -131,   162,    64,    65,    58,    64,   279,    58,    94,   117,
     290,  -131,   291,   292,   293,  -131,  -131,    65,     0,  -131,
      65,  -131,  -131,  -131,  -131,   178,  -131,  -131,  -131,   130,
     285,   286,   287,   -98,    90,  -131,     0,  -131,  -131,  -131,
    -131,     0,     0,     0,     0,   118,     0,   -19,   -18,     0,
      72,   -18,     0,  -131,  -131,  -131,  -131,     0,     0,     0,
    -131,   130,   -52,     0,   -52,   170,   -52,     0,    93,   122,
       0,     0,   -19,   -18,   -98,    73,  -115,   -52,     0,   -52,
     -52,   -52,   -52,     0,   -52,     0,    74,  -115,     0,   -98,
      73,  -115,     0,    94,     0,  -115,     0,   123,   124,   125,
     126,    74,  -115,     0,  -115,   173,   174,   175,   176,     0,
       0,     0,     0,    -6,     9,   301,     0,   291,   292,   293,
       0,   190,   192,   194,   196,   198,    10,     0,    11,   155,
      12,   156,   157,   158,     0,     0,     0,     0,   159,   295,
     296,   297,   298,   299,   300,   302
};

static const yytype_int16 yycheck[] =
{
      10,    23,    24,    25,    57,    73,    40,     1,     4,     1,
       1,     1,     1,     8,     1,    68,    69,    13,     1,    15,
       1,     1,    41,    33,    19,     6,    94,    14,     1,    19,
      14,    20,    27,    55,    26,    57,     1,    59,     1,     1,
      57,    24,    64,    34,    38,     7,    68,    69,     1,    45,
      72,    13,    74,    70,    71,    72,    18,    53,     1,    21,
      22,    41,    96,     6,     1,    87,    88,    89,    41,     6,
      54,     8,    37,    36,    27,    85,    86,    13,     0,    41,
      16,    98,    19,    26,    27,    28,    23,     1,    41,    26,
      27,    28,     6,     1,     8,   117,   118,    34,    41,    36,
       1,   154,     1,     9,    41,    19,    12,   129,   130,   105,
     120,   121,    26,    27,    28,    29,    30,    31,    32,    27,
       1,   131,   132,   133,   134,    26,     1,    41,    27,     1,
     152,     6,   154,     1,   151,    34,    17,    34,     6,     1,
      27,    47,     1,     1,     1,   213,   214,     1,   170,     6,
       9,    26,    27,    28,    41,    27,   178,    34,    26,   181,
      28,   178,     1,    25,    26,   187,    41,     6,     7,    26,
      27,    28,     1,    41,    13,    37,    34,   230,     1,    18,
      34,     1,    21,    22,    41,   207,     1,    26,    41,    28,
      29,    30,    31,    32,     1,     1,    25,     1,    37,     1,
       6,     7,    41,    34,    27,     1,    26,    13,   230,    14,
      25,    13,    18,    15,     1,    21,    22,    13,    25,     6,
      26,     8,    28,    27,   234,    34,     1,     1,   238,   239,
     240,    37,    19,    41,    23,    41,    23,     1,    12,    26,
      27,    28,     6,     1,     8,     8,     1,    34,    23,    36,
      26,     6,    27,     1,    41,    19,    19,     1,     6,    23,
       8,     1,    26,    27,    28,    23,    24,    11,    37,    27,
      34,    19,    36,    26,     1,    23,     1,    41,    26,    27,
      28,     8,    34,    23,     1,    27,    34,    27,    36,    15,
       7,    17,    27,    41,    11,    36,    13,    14,    37,    27,
       1,    18,     1,    20,    21,    22,     7,     6,    27,    27,
      11,     1,    13,    14,     1,    27,     6,    18,    27,    20,
      21,    22,    36,     1,    41,    27,    13,    26,    15,    28,
      29,    30,    31,    32,     1,    34,    26,     1,    28,     6,
      41,    37,    41,     7,    23,    36,     1,    11,    20,    13,
      14,    41,    36,     1,    18,     1,    20,    21,    22,    26,
      20,    28,    29,    30,    31,    32,     1,    13,    27,    15,
      36,    17,     7,    27,    41,     1,     1,    41,    13,    14,
       6,    34,     7,    18,     6,     6,    21,    22,    13,    36,
       6,    11,     1,    18,     1,    38,    21,    22,     7,     6,
      26,    38,    28,     1,    13,    38,    41,    11,     6,    18,
      11,     6,    21,    22,     6,    41,    41,     1,     6,    26,
       1,    28,     6,     1,    36,     6,    36,     9,    26,     9,
      28,    36,    41,     1,    41,    13,    36,    15,     9,    17,
       8,    82,    26,    41,    28,    26,    36,    28,    26,     1,
       1,    19,     3,     4,     5,    23,     8,    41,    -1,    27,
      41,    29,    30,    31,    32,     1,    34,    19,    36,    37,
       9,     9,     9,    25,    26,    27,    -1,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    37,    -1,    23,    24,    -1,
       1,    27,    -1,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    13,    -1,    15,     1,    17,    -1,     1,     1,
      -1,    -1,    23,    24,    25,    26,     8,    13,    -1,    15,
      13,    17,    15,    -1,    17,    -1,    37,    19,    -1,    25,
      26,    23,    -1,    26,    -1,    27,    -1,    29,    30,    31,
      32,    37,    34,    -1,    36,   106,   107,   108,   109,    -1,
      -1,    -1,    -1,     0,     1,     1,    -1,     3,     4,     5,
      -1,   122,   123,   124,   125,   126,    13,    -1,    15,     1,
      17,     3,     4,     5,    -1,    -1,    -1,    -1,    10,   283,
     284,   285,   286,   287,   288,   289
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    12,    43,    44,    41,     1,    41,     0,     1,
      13,    15,    17,    45,    46,    53,    54,    57,    64,    34,
      34,     1,    34,     1,     7,    18,    21,    22,    41,    47,
      48,    64,    65,    66,    67,    68,    70,    14,    41,    65,
       1,    41,    41,    47,     1,    53,    64,     1,    45,     1,
      64,     1,    53,    55,    56,     1,     6,    26,    28,    37,
      41,    77,    78,     1,    26,    41,    77,    77,     1,    26,
       1,    26,     1,    26,    37,    49,    61,    69,    71,    73,
      34,     1,    24,    14,    65,     1,    34,     1,    25,     1,
      26,     1,    14,     1,    26,    61,    58,    60,     1,     1,
      34,    41,    64,    41,    64,    45,    29,    30,    31,    32,
      77,    27,    41,    48,    75,    77,    77,     1,    37,    79,
       8,    19,     1,    29,    30,    31,    32,    77,    77,     1,
      37,     1,     8,     1,    19,    27,    75,    77,     1,    27,
      75,    48,    48,    47,    48,    63,    77,     1,    27,    63,
      77,    23,    37,    26,    26,     1,     3,     4,     5,    10,
      50,    52,    52,    65,    65,    77,    77,    61,    34,    48,
       1,    64,     1,    78,    78,    78,    78,    27,     1,    27,
      27,     1,    27,    76,    36,    77,    77,    37,    65,    65,
      78,     1,    78,     1,    78,     1,    78,     1,    78,     1,
      77,    77,    65,    65,    65,    65,    27,     1,     1,    27,
      27,     1,    27,     1,    34,    27,    36,    27,     1,    62,
       1,    48,    77,    27,    75,    37,     1,    37,    59,    75,
      23,    36,     1,    77,    20,    36,     1,     1,    20,     1,
      20,    63,    63,    27,    36,    72,    27,     6,     6,     1,
       6,    34,    75,    36,    65,    65,    65,    65,    74,    38,
      38,    38,     1,    38,    11,    11,    11,     1,    11,     6,
       6,     6,     6,     1,     6,    36,    36,    36,    36,    36,
       1,    36,     9,     9,     9,     9,     9,     9,     1,     9,
       1,     3,     4,     5,    51,    51,    51,    51,    51,    51,
      51,     1,    51
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 8:

/* Line 1455 of yacc.c  */
#line 75 "TP2COMPILATION.y"
    {yyerror ("mot clef program attendu on line : "); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "TP2COMPILATION.y"
    {yyerror ("identifiant attendu on line :"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 77 "TP2COMPILATION.y"
    {yyerror ("point virgule attendu on line :"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "TP2COMPILATION.y"
    {yyerror (" var attendu on line : "); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 86 "TP2COMPILATION.y"
    {yyerror (" point virgule attendu on line : "); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 88 "TP2COMPILATION.y"
    {
                            while( wIndex > 0 ) {
                                wIndex-- ;
                                listIdentifiers[wIndex]->type = currentTyoe;
                            }
                            wIndex = 0 ;
                            display();
                        ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 96 "TP2COMPILATION.y"
    {yyerror (" deux points attendus on line : "); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 98 "TP2COMPILATION.y"
    {
							checkIdentifier(nom,yylineno);
						;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 101 "TP2COMPILATION.y"
    {
                        //printf("here");
							checkIdentifier(nom,yylineno);
						;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 105 "TP2COMPILATION.y"
    {yyerror (" virgule attendue on line : "); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 108 "TP2COMPILATION.y"
    { currentTyoe = type_Int; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 108 "TP2COMPILATION.y"
    { currentTyoe = type_Real; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 108 "TP2COMPILATION.y"
    { currentTyoe = type_Char; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 108 "TP2COMPILATION.y"
    {yyerror(" Type non valide on line : ");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 110 "TP2COMPILATION.y"
    {yyerror("Type non valide on line : ");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 113 "TP2COMPILATION.y"
    { currentTyoe = type_Array; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 114 "TP2COMPILATION.y"
    {yyerror (" mot cle array attendu on line : "); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 115 "TP2COMPILATION.y"
    {yyerror (" crochet ouvrant attendu on line : "); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 116 "TP2COMPILATION.y"
    {yyerror (" entier attendu on line : "); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 117 "TP2COMPILATION.y"
    {yyerror (" deux points attendus on line : "); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 118 "TP2COMPILATION.y"
    {yyerror ("entier attendu on line : "); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 119 "TP2COMPILATION.y"
    {yyerror ("crochet fermant attendu on line : "); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 120 "TP2COMPILATION.y"
    {yyerror (" mot cle of attendu on line : "); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 121 "TP2COMPILATION.y"
    {yyerror (" type standard attendu on line : "); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 124 "TP2COMPILATION.y"
    {display();;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 127 "TP2COMPILATION.y"
    {isInProc = 1; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 128 "TP2COMPILATION.y"
    {isInProc = 1; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 129 "TP2COMPILATION.y"
    {printf("this");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 133 "TP2COMPILATION.y"
    {
                            if( lookupNode(nom, table) ){
                                yyerror("Procedure already defined");
                            }else{
                                nodeProc = createNode(nom, NODE_TYPE_UNKNOWN, procedure, NULL);
                                table = insertNode(nodeProc, table);
                            }
                            isProcParameters = 1;
                        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 145 "TP2COMPILATION.y"
    {
						    nodeProc->nbParam = nbParams;
							nbParams = 0;
						;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 154 "TP2COMPILATION.y"
    {
                            if( lookupNode(nom, table) ){
                                yyerror("Procedure already defined");
                            }else{
                                nodeProc = createNode(nom, NODE_TYPE_UNKNOWN, procedure, NULL);
                                table = insertNode(nodeProc, table);
                            }
                            //isProcParameters = 1;
                        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 165 "TP2COMPILATION.y"
    {yyerror (" mot clé procedure attendu on line : "); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 166 "TP2COMPILATION.y"
    {yyerror (" mot clé procedure attendu on line : "); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 167 "TP2COMPILATION.y"
    {yyerror (" identifier attendu on line : "); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 168 "TP2COMPILATION.y"
    {yyerror (" identifier attendu on line : "); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 171 "TP2COMPILATION.y"
    {
							 isProcParameters = 0;
						;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 175 "TP2COMPILATION.y"
    {yyerror (" parenthese ouvrante attendue on line : "); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 176 "TP2COMPILATION.y"
    {yyerror (" parenthese fermante attendue on line : "); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 180 "TP2COMPILATION.y"
    {yyerror (" point virgule attendu on line : "); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 182 "TP2COMPILATION.y"
    {endProc(yylineno);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 183 "TP2COMPILATION.y"
    {endProc(yylineno);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 184 "TP2COMPILATION.y"
    {yyerror (" mot cle begin attendu on line : "); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 185 "TP2COMPILATION.y"
    {yyerror (" mot cle end attendu on line : "); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 192 "TP2COMPILATION.y"
    {yyerror (" point virgule attendu on line : "); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 198 "TP2COMPILATION.y"
    {yyerror (" mot cle if attendu on line : "); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 199 "TP2COMPILATION.y"
    {yyerror (" mot cle then attendu on line : "); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 200 "TP2COMPILATION.y"
    {yyerror (" mot cle else attendu on line : "); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 201 "TP2COMPILATION.y"
    {yyerror (" endif attendu on line : "); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 203 "TP2COMPILATION.y"
    {yyerror (" mot cle while attendu on line : "); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 204 "TP2COMPILATION.y"
    {yyerror (" mot cle do attendu on line : "); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 205 "TP2COMPILATION.y"
    {yyerror (" point virgule attendu on line : "); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 211 "TP2COMPILATION.y"
    {yyerror (" operateur d'affectation attendu on line : "); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 215 "TP2COMPILATION.y"
    {
							nbParams = 0;
						;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 218 "TP2COMPILATION.y"
    {
							nbParams = 0;
						;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 222 "TP2COMPILATION.y"
    {yyerror (" mot cle write attendu on line : "); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 223 "TP2COMPILATION.y"
    {yyerror (" ( attendu on line : "); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 224 "TP2COMPILATION.y"
    {yyerror (" ) attendu on line : "); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 226 "TP2COMPILATION.y"
    {yyerror (" mot cle write attendu on line : "); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 227 "TP2COMPILATION.y"
    {yyerror (" ( attendu on line : "); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 228 "TP2COMPILATION.y"
    {yyerror (" ) attendu on line : "); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 230 "TP2COMPILATION.y"
    {yyerror (" mot cle read attendu on line : "); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 231 "TP2COMPILATION.y"
    {yyerror (" ( attendu on line : "); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 232 "TP2COMPILATION.y"
    {yyerror (" ) attendu on line : "); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 236 "TP2COMPILATION.y"
    {
						    checkIDOnInit(nom, yylineno);
					;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 239 "TP2COMPILATION.y"
    {
						    checkIDOnInit(nom, yylineno);
					;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 243 "TP2COMPILATION.y"
    {yyerror (" identifiant attendu on line : "); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 244 "TP2COMPILATION.y"
    {yyerror (" [ attendu on line : "); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 245 "TP2COMPILATION.y"
    {yyerror ("] attendu on line : "); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 248 "TP2COMPILATION.y"
    {
                            node = lookupNode(nom,table);
                        ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 252 "TP2COMPILATION.y"
    {
                            nbParams = 0;
                            if ( node->nbParam != nbParams)
                                yyerror("invalid number of parameters ");
                            nbParams = 0;
                        ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 257 "TP2COMPILATION.y"
    {printf("appel methode sans param\n");;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 260 "TP2COMPILATION.y"
    {
							node = lookupNode(nom,table);
						;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 264 "TP2COMPILATION.y"
    {
							if ( node->nbParam != nbParams)
								yyerror("invalid number of parameters ");
							nbParams = 0;
						;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 268 "TP2COMPILATION.y"
    {printf("appel methode avec param");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 269 "TP2COMPILATION.y"
    {yyerror("probleme appel methode\n");;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 273 "TP2COMPILATION.y"
    {
							nbParams ++;
						;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 278 "TP2COMPILATION.y"
    {
							nbParams ++;
						;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 282 "TP2COMPILATION.y"
    {yyerror (" virgule attendu on line : "); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 290 "TP2COMPILATION.y"
    {yyerror (" facteur attendu on line : "); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 291 "TP2COMPILATION.y"
    {yyerror (" facteur attendu on line : "); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 292 "TP2COMPILATION.y"
    {yyerror (" facteur attendu on line : "); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 293 "TP2COMPILATION.y"
    {yyerror (" facteur attendu on line : "); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 294 "TP2COMPILATION.y"
    {yyerror (" facteur attendu on line : "); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 295 "TP2COMPILATION.y"
    {yyerror (" facteur attendu on line : "); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 296 "TP2COMPILATION.y"
    {yyerror (" facteur attendu on line : "); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 297 "TP2COMPILATION.y"
    {yyerror (" facteur attendu on line : "); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 298 "TP2COMPILATION.y"
    {yyerror (" operateur attendu on line : "); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 301 "TP2COMPILATION.y"
    {
						    checkID(nom, yylineno);
						;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 304 "TP2COMPILATION.y"
    {
						    checkID(nom, yylineno);
						;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 308 "TP2COMPILATION.y"
    {yyerror (" crochet ouvrant attendu on line : "); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 309 "TP2COMPILATION.y"
    {yyerror (" crochet fermant attendu on line : "); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 311 "TP2COMPILATION.y"
    {yyerror (" parenthese ouvrante attendue on line : "); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 312 "TP2COMPILATION.y"
    {yyerror (" parenthese fermante attendue on line : "); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2409 "TP2COMPILATION.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 314 "TP2COMPILATION.y"
 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;
void Begin()
{
	table = NULL;
	tableLocale = NULL;

	currentTyoe = NODE_TYPE_UNKNOWN;

	wIndex = 0;
	nbParams = 0;

	isInProc = 0 ;
    isProcParameters = 0 ;
}

void End()
{
	destroySymbolsTable(table);
}

main()
{
    Begin();
    yyparse();
    End();
 
 
}
yywrap()
{
	return(1);
}
  
                   

