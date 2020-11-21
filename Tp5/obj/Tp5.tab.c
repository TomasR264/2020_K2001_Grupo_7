
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
#line 4 "../src/Tp5.y"


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Tp5-funciones.h"


extern FILE* yyin;

int yylex();

int yyerror (char*);
int yywrap(){
return(1);
}
symrec *aux;







/* Line 189 of yacc.c  */
#line 98 "Tp5.tab.c"

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

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 1 "../src/Tp5.y"

  #include "Tp5-struct.h"



/* Line 209 of yacc.c  */
#line 128 "Tp5.tab.c"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OLOGICO = 258,
     YLOGICO = 259,
     IGUAL = 260,
     DESIGUAL = 261,
     MAYOIGUAL = 262,
     MENOIGUAL = 263,
     OUTPUT = 264,
     INPUT = 265,
     INCREMENTO = 266,
     DECREMENTO = 267,
     FLECHA = 268,
     SIZEOF = 269,
     OPERADOR_ASIGNACION = 270,
     IDENTIFICADOR = 271,
     TIPODATO = 272,
     CONSTANTE_REAL = 273,
     CONSTANTE_ENTERA = 274,
     CONSTANTE_CARACTER = 275,
     IF = 276,
     ELSE = 277,
     RETURN = 278,
     SWITCH = 279,
     DEFAULT = 280,
     GOTO = 281,
     WHILE = 282,
     DO = 283,
     CASE = 284,
     FOR = 285,
     BREAK = 286,
     CONTINUE = 287,
     ERROR_LEXICO = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 28 "../src/Tp5.y"

  char* identificador;
  double constante;
  char caracter;
  int entero;
  float real;
  argumento argumentoFunciones;
  struct symrec *listaDeParametros;



/* Line 214 of yacc.c  */
#line 190 "Tp5.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 202 "Tp5.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   780

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  244

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,    48,    41,     2,
      49,    50,    46,    44,    36,    45,    55,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    35,
      42,     2,    43,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,    39,    57,    51,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    15,    17,    21,
      25,    26,    29,    31,    35,    37,    41,    43,    49,    51,
      55,    57,    61,    63,    67,    69,    73,    75,    79,    81,
      85,    89,    91,    95,    99,   103,   107,   109,   113,   117,
     119,   123,   127,   129,   133,   137,   141,   143,   148,   150,
     153,   156,   159,   162,   167,   169,   171,   173,   175,   177,
     179,   181,   186,   191,   195,   199,   203,   206,   209,   211,
     215,   217,   219,   221,   223,   225,   229,   231,   233,   237,
     244,   247,   252,   254,   258,   260,   263,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   289,   294,   298,
     302,   305,   307,   310,   312,   315,   318,   324,   332,   338,
     344,   352,   362,   371,   380,   388,   397,   405,   413,   420,
     423,   426,   430,   433,   437,   442,   446
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    -1,    59,    60,    -1,    59,    34,    -1,
      62,    35,    -1,    82,    -1,    90,    -1,    33,    61,    35,
      -1,    33,    61,    34,    -1,    -1,    61,    33,    -1,    63,
      -1,    62,    36,    63,    -1,    64,    -1,    76,    15,    63,
      -1,    65,    -1,    65,    37,    62,    38,    64,    -1,    66,
      -1,    66,     3,    66,    -1,    67,    -1,    66,     4,    67,
      -1,    68,    -1,    67,    39,    68,    -1,    69,    -1,    68,
      40,    69,    -1,    70,    -1,    69,    41,    70,    -1,    71,
      -1,    70,     5,    71,    -1,    70,     6,    71,    -1,    72,
      -1,    71,    42,    72,    -1,    71,    43,    72,    -1,    71,
       8,    72,    -1,    71,     7,    72,    -1,    73,    -1,    72,
       9,    73,    -1,    72,    10,    73,    -1,    74,    -1,    73,
      44,    74,    -1,    73,    45,    74,    -1,    75,    -1,    74,
      46,    75,    -1,    74,    47,    75,    -1,    74,    48,    75,
      -1,    76,    -1,    49,    17,    50,    75,    -1,    78,    -1,
      11,    76,    -1,    12,    76,    -1,    77,    75,    -1,    14,
      76,    -1,    14,    49,    17,    50,    -1,    41,    -1,    46,
      -1,    44,    -1,    45,    -1,    51,    -1,    52,    -1,    81,
      -1,    78,    53,    62,    54,    -1,    16,    49,    79,    50,
      -1,    78,    49,    50,    -1,    78,    55,    16,    -1,    78,
      13,    16,    -1,    78,    11,    -1,    78,    12,    -1,    80,
      -1,    79,    36,    80,    -1,    18,    -1,    19,    -1,    20,
      -1,    16,    -1,    89,    -1,    49,    62,    50,    -1,    83,
      -1,    84,    -1,    17,    86,    35,    -1,    17,    16,    49,
      85,    50,    91,    -1,    17,    16,    -1,    85,    36,    17,
      16,    -1,    87,    -1,    86,    36,    87,    -1,    16,    -1,
      16,    88,    -1,    15,    89,    -1,    18,    -1,    19,    -1,
      20,    -1,    91,    -1,    94,    -1,    95,    -1,    96,    -1,
      97,    -1,    98,    -1,    56,    92,    93,    57,    -1,    56,
      93,    92,    57,    -1,    56,    92,    57,    -1,    56,    93,
      57,    -1,    56,    57,    -1,    82,    -1,    92,    82,    -1,
      90,    -1,    93,    90,    -1,    62,    35,    -1,    21,    49,
      62,    50,    90,    -1,    21,    49,    62,    50,    90,    22,
      90,    -1,    24,    49,    62,    50,    90,    -1,    27,    49,
      62,    50,    90,    -1,    28,    90,    27,    49,    62,    50,
      35,    -1,    30,    49,    62,    35,    62,    35,    62,    50,
      90,    -1,    30,    49,    35,    62,    35,    62,    50,    90,
      -1,    30,    49,    62,    35,    35,    62,    50,    90,    -1,
      30,    49,    35,    35,    62,    50,    90,    -1,    30,    49,
      62,    35,    62,    35,    50,    90,    -1,    30,    49,    35,
      62,    35,    50,    90,    -1,    30,    49,    62,    35,    35,
      50,    90,    -1,    30,    49,    35,    35,    50,    90,    -1,
      32,    35,    -1,    31,    35,    -1,    23,    62,    35,    -1,
      23,    35,    -1,    26,    16,    35,    -1,    29,    64,    38,
      90,    -1,    25,    38,    90,    -1,    16,    38,    90,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    84,    85,    88,    89,    90,    91,    92,
      95,    96,   101,   102,   105,   106,   109,   110,   113,   114,
     117,   118,   121,   122,   125,   126,   129,   130,   133,   134,
     135,   138,   139,   140,   141,   142,   145,   146,   147,   150,
     151,   152,   155,   156,   157,   158,   161,   162,   165,   166,
     167,   168,   169,   170,   173,   173,   173,   173,   173,   173,
     176,   177,   178,   179,   180,   181,   182,   183,   186,   187,
     190,   191,   192,   195,   196,   197,   204,   205,   208,   212,
     217,   218,   223,   224,   227,   228,   231,   234,   235,   236,
     241,   242,   243,   244,   245,   246,   249,   250,   251,   252,
     253,   256,   257,   260,   261,   264,   267,   268,   269,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   284,
     285,   286,   287,   288,   291,   292,   293
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OLOGICO", "YLOGICO", "IGUAL",
  "DESIGUAL", "MAYOIGUAL", "MENOIGUAL", "OUTPUT", "INPUT", "INCREMENTO",
  "DECREMENTO", "FLECHA", "SIZEOF", "OPERADOR_ASIGNACION", "IDENTIFICADOR",
  "TIPODATO", "CONSTANTE_REAL", "CONSTANTE_ENTERA", "CONSTANTE_CARACTER",
  "IF", "ELSE", "RETURN", "SWITCH", "DEFAULT", "GOTO", "WHILE", "DO",
  "CASE", "FOR", "BREAK", "CONTINUE", "ERROR_LEXICO", "'\\n'", "';'",
  "','", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'('", "')'", "'~'", "'!'", "'['", "']'", "'.'",
  "'{'", "'}'", "$accept", "entrada", "linea", "finDeLinea", "expresion",
  "expresionAsignacion", "expresionCondicional", "expresionOLogico",
  "expresionYLogico", "expresionOInclusivo", "expresionOExcluyente",
  "expresionY", "expresionIgualdad", "expresionRelacional",
  "expresionCorrimiento", "expresionAditiva", "expresionMultiplicativa",
  "expresionConversion", "expresionUnaria", "operadorUnario",
  "expresionSufijo", "listaArgumentos", "argumento2", "expresionPrimaria",
  "declaracion", "declaracionVarSimples", "declaracionFunciones",
  "listaParametrosDeclaracion", "listaVarSimples", "unaVarSimple",
  "inicial", "constante", "sentencia", "sentenciaCompuesta",
  "listaDeclaraciones", "listaSentencias", "sentenciaExpresion",
  "sentenciaSeleccion", "sentenciaIteracion", "sentenciaSalto",
  "sentenciaEtiquetada", 0
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
     285,   286,   287,   288,    10,    59,    44,    63,    58,   124,
      94,    38,    60,    62,    43,    45,    42,    47,    37,    40,
      41,   126,    33,    91,    93,    46,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    74,    74,    74,    74,    75,    75,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    79,
      80,    80,    80,    81,    81,    81,    82,    82,    83,    84,
      85,    85,    86,    86,    87,    87,    88,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    93,    93,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    98,    98,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     1,     1,     3,     3,
       0,     2,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     4,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     3,     3,     2,     2,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     1,     3,     6,
       2,     4,     1,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     3,     3,
       2,     1,     2,     1,     2,     2,     5,     7,     5,     5,
       7,     9,     8,     8,     7,     8,     7,     7,     6,     2,
       2,     3,     2,     3,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    73,     0,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     4,    54,    56,    57,    55,     0,    58,
      59,     0,     3,     0,    12,    14,    16,    18,    20,    22,
      24,    26,    28,    31,    36,    39,    42,    46,     0,    48,
      60,     6,    76,    77,    74,     7,    90,    91,    92,    93,
      94,    95,    73,     0,    49,    50,     0,    52,     0,     0,
      84,     0,    82,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,   120,   119,     0,     0,     0,
     100,   101,   103,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    66,    67,
       0,     0,     0,     0,     0,   126,    70,    71,    72,     0,
      68,     0,     0,    85,    78,     0,     0,   121,     0,   125,
     123,     0,   105,     0,     0,     0,     0,    11,     9,     8,
       0,    75,    98,   102,     0,    99,   104,     0,    13,     0,
      19,    21,    23,    25,    27,    29,    30,    35,    34,    32,
      33,    37,    38,    40,    41,    43,    44,    45,    15,    65,
      63,     0,    64,    53,     0,    62,    86,     0,     0,    84,
      83,     0,     0,     0,     0,   124,     0,     0,     0,    47,
      96,    97,     0,    61,    69,    80,     0,     0,   106,   108,
     109,     0,     0,     0,     0,     0,     0,    17,     0,    79,
       0,     0,   118,     0,     0,     0,     0,     0,     0,    81,
     107,   110,   114,   116,     0,   117,     0,     0,     0,   112,
     113,   115,     0,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,    87,    80,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   129,   130,    50,    91,    52,    53,   188,    71,    72,
     133,    54,    92,    56,    93,    94,    57,    58,    59,    60,
      61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -85
static const yytype_int16 yypact[] =
{
     -85,   226,   -85,   674,   674,   716,    83,     3,   -85,   -85,
     -85,    -8,     9,    -4,    18,    63,    43,   457,   728,    77,
      60,    65,   -85,   -85,   -85,   -85,   -85,   -85,   111,   -85,
     -85,   269,   -85,    36,   -85,   -85,   105,    86,   122,   119,
     127,    92,    27,   139,   120,    87,   -85,   156,   728,    -7,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   124,   728,   -85,   -85,   158,   -85,   457,   118,
      -2,   115,   -85,   728,   -85,   131,   728,   457,   160,   728,
     144,   170,   163,   -85,   500,   -85,   -85,   106,   155,   -26,
     -85,   -85,   -85,   316,   363,   -85,   728,   728,   728,   728,
     728,   728,   728,   728,   728,   728,   728,   728,   728,   728,
     728,   728,   728,   728,   728,   728,   728,   -85,   -85,   -85,
     192,   164,   728,   199,   168,   -85,   -85,   -85,   -85,   -19,
     -85,   126,   203,   -85,   -85,   205,   -10,   -85,     7,   -85,
     -85,    13,   -85,   175,   457,   512,   146,   -85,   -85,   -85,
     728,   -85,   -85,   -85,   410,   -85,   -85,    -6,   -85,    26,
     223,   122,   119,   127,    92,    27,    27,   139,   139,   139,
     139,   120,   120,    87,    87,   -85,   -85,   -85,   -85,   -85,
     -85,   -21,   -85,   -85,   118,   -85,   -85,   212,    23,   214,
     -85,   457,   457,   457,   728,   -85,   554,   148,   566,   -85,
     -85,   -85,   728,   -85,   -85,   -85,   215,   178,   209,   -85,
     -85,    30,   457,    38,   608,   620,   151,   -85,   232,   -85,
     457,   204,   -85,   457,   457,    41,   457,    46,   662,   -85,
     -85,   -85,   -85,   -85,   457,   -85,   457,   457,    51,   -85,
     -85,   -85,   457,   -85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   -85,     2,   -84,   -17,   -85,   165,   162,
     166,   161,   167,    85,   -69,    84,   101,   -30,     4,   -85,
     -85,   -85,    80,   -85,     1,   -85,   -85,   -85,   -85,   130,
     -85,   137,    -1,    66,   180,   183,   -85,   -85,   -85,   -85,
     -85
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      55,    82,    51,    33,   118,   119,   120,    64,    65,    67,
      96,     7,   158,   131,    75,    96,    81,   184,   117,    70,
       3,     4,    83,     5,   151,    62,    96,     8,     9,    10,
      89,   185,   178,   203,   105,   106,   167,   168,   169,   170,
     191,    73,   121,    96,    74,    76,   122,   132,   123,    96,
      24,   201,    83,    25,    26,    27,    77,   192,    28,   206,
      29,    30,    96,   193,   202,    89,    96,   125,    89,   107,
     108,    95,    96,   207,    96,   136,   139,    96,   138,    78,
     221,   141,    96,   175,   176,   177,   146,    96,   223,    98,
      99,   234,    79,   156,   153,    85,   236,   103,   104,   159,
      86,   242,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
     199,    68,     3,     4,   181,     5,    84,    62,    88,     8,
       9,    10,    69,   113,   114,   115,   126,   127,   128,   147,
     148,   149,    97,   195,     8,     9,    10,   197,   109,   110,
     134,   135,    24,   156,    83,    25,    26,    27,   153,   101,
      28,   100,    29,    30,   111,   112,   137,    96,   102,     3,
       4,   116,     5,    69,    62,   124,     8,     9,    10,   142,
      96,   198,    96,   214,    96,   217,   228,    96,   165,   166,
     208,   209,   210,   171,   172,   140,   211,   143,   213,    24,
     216,   144,    25,    26,    27,   150,    83,    28,   179,    29,
      30,   222,   173,   174,   180,   182,   225,   227,   183,   230,
     187,   189,   232,   233,   194,   235,     2,    99,   205,   131,
     238,   220,   218,   239,    31,   240,   241,     3,     4,   231,
       5,   243,     6,     7,     8,     9,    10,    11,   229,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   161,   163,   160,   204,   190,   162,    24,   186,   164,
      25,    26,    27,   219,   157,    28,   154,    29,    30,     0,
       3,     4,    31,     5,     0,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,    25,    26,    27,     0,     0,    28,     0,
      29,    30,     0,     0,     0,    31,    90,     3,     4,     0,
       5,     0,     6,     7,     8,     9,    10,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
      25,    26,    27,     0,     0,    28,     0,    29,    30,     0,
       0,     0,    31,   152,     3,     4,     0,     5,     0,     6,
       7,     8,     9,    10,    11,     0,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,    25,    26,    27,
       0,     0,    28,     0,    29,    30,     0,     0,     0,    31,
     155,     3,     4,     0,     5,     0,     6,     0,     8,     9,
      10,    11,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,    25,    26,    27,     0,     0,    28,
       0,    29,    30,     0,     0,     0,    31,   200,     3,     4,
       0,     5,     0,     6,     0,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,    25,    26,    27,     0,     0,    28,     0,    29,    30,
       0,     3,     4,    31,     5,     0,    62,     0,     8,     9,
      10,     0,     0,     3,     4,     0,     5,     0,    62,     0,
       8,     9,    10,     0,     0,   145,     0,     0,     0,     0,
       0,    24,     0,     0,    25,    26,    27,   196,     0,    28,
       0,    29,    30,    24,     0,     0,    25,    26,    27,     0,
       0,    28,     0,    29,    30,     3,     4,     0,     5,     0,
      62,     0,     8,     9,    10,     0,     0,     3,     4,     0,
       5,     0,    62,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,    25,    26,
      27,   215,     0,    28,   212,    29,    30,    24,     0,     0,
      25,    26,    27,     0,     0,    28,     0,    29,    30,     3,
       4,     0,     5,     0,    62,     0,     8,     9,    10,     0,
       0,     3,     4,     0,     5,     0,    62,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    25,    26,    27,     0,     0,    28,   224,    29,
      30,    24,     0,     0,    25,    26,    27,     0,     0,    28,
     226,    29,    30,     3,     4,     0,     5,     0,    62,     0,
       8,     9,    10,     0,     0,     3,     4,     0,     5,     0,
      62,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,    25,    26,    27,     0,
       0,    28,   237,    29,    30,    24,     0,     0,    25,    26,
      27,     0,     0,    63,     0,    29,    30,     3,     4,     0,
       5,     0,    62,     0,     8,     9,    10,     0,     0,     3,
       4,     0,     5,     0,    62,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
      25,    26,    27,     0,     0,    66,     0,    29,    30,    24,
       0,     0,    25,    26,    27,     0,     0,    28,     0,    29,
      30
};

static const yytype_int16 yycheck[] =
{
       1,    18,     1,     1,    11,    12,    13,     3,     4,     5,
      36,    17,    96,    15,    12,    36,    17,    36,    48,    16,
      11,    12,    18,    14,    50,    16,    36,    18,    19,    20,
      28,    50,   116,    54,     7,     8,   105,   106,   107,   108,
      50,    49,    49,    36,    35,    49,    53,    49,    55,    36,
      41,    57,    48,    44,    45,    46,    38,    50,    49,    36,
      51,    52,    36,    50,    38,    63,    36,    68,    66,    42,
      43,    35,    36,    50,    36,    73,    77,    36,    76,    16,
      50,    79,    36,   113,   114,   115,    84,    36,    50,     3,
       4,    50,    49,    94,    93,    35,    50,     5,     6,    97,
      35,    50,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     150,    38,    11,    12,   122,    14,    49,    16,    17,    18,
      19,    20,    49,    46,    47,    48,    18,    19,    20,    33,
      34,    35,    37,   144,    18,    19,    20,   145,     9,    10,
      35,    36,    41,   154,   150,    44,    45,    46,   157,    40,
      49,    39,    51,    52,    44,    45,    35,    36,    41,    11,
      12,    15,    14,    49,    16,    17,    18,    19,    20,    35,
      36,    35,    36,    35,    36,   202,    35,    36,   103,   104,
     191,   192,   193,   109,   110,    35,   194,    27,   196,    41,
     198,    38,    44,    45,    46,    50,   202,    49,    16,    51,
      52,   212,   111,   112,    50,    16,   214,   215,    50,   220,
      17,    16,   223,   224,    49,   226,     0,     4,    16,    15,
     228,    22,    17,   234,    56,   236,   237,    11,    12,    35,
      14,   242,    16,    17,    18,    19,    20,    21,    16,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    99,   101,    98,   184,   135,   100,    41,   131,   102,
      44,    45,    46,   207,    94,    49,    93,    51,    52,    -1,
      11,    12,    56,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,
      51,    52,    -1,    -1,    -1,    56,    57,    11,    12,    -1,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    52,    -1,
      -1,    -1,    56,    57,    11,    12,    -1,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      -1,    -1,    49,    -1,    51,    52,    -1,    -1,    -1,    56,
      57,    11,    12,    -1,    14,    -1,    16,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      -1,    51,    52,    -1,    -1,    -1,    56,    57,    11,    12,
      -1,    14,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    -1,    -1,    49,    -1,    51,    52,
      -1,    11,    12,    56,    14,    -1,    16,    -1,    18,    19,
      20,    -1,    -1,    11,    12,    -1,    14,    -1,    16,    -1,
      18,    19,    20,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    35,    -1,    49,
      -1,    51,    52,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    51,    52,    11,    12,    -1,    14,    -1,
      16,    -1,    18,    19,    20,    -1,    -1,    11,    12,    -1,
      14,    -1,    16,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    35,    -1,    49,    50,    51,    52,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    52,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    19,    20,    -1,
      -1,    11,    12,    -1,    14,    -1,    16,    -1,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    11,    12,    -1,    14,    -1,    16,    -1,
      18,    19,    20,    -1,    -1,    11,    12,    -1,    14,    -1,
      16,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    -1,    51,    52,    11,    12,    -1,
      14,    -1,    16,    -1,    18,    19,    20,    -1,    -1,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    52,    41,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,    51,
      52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,     0,    11,    12,    14,    16,    17,    18,    19,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    41,    44,    45,    46,    49,    51,
      52,    56,    60,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      81,    82,    83,    84,    89,    90,    91,    94,    95,    96,
      97,    98,    16,    49,    76,    76,    49,    76,    38,    49,
      16,    86,    87,    49,    35,    62,    49,    38,    16,    49,
      62,    90,    64,    76,    49,    35,    35,    61,    17,    62,
      57,    82,    90,    92,    93,    35,    36,    37,     3,     4,
      39,    40,    41,     5,     6,     7,     8,    42,    43,     9,
      10,    44,    45,    46,    47,    48,    15,    75,    11,    12,
      13,    49,    53,    55,    17,    90,    18,    19,    20,    79,
      80,    15,    49,    88,    35,    36,    62,    35,    62,    90,
      35,    62,    35,    27,    38,    35,    62,    33,    34,    35,
      50,    50,    57,    82,    93,    57,    90,    92,    63,    62,
      66,    67,    68,    69,    70,    71,    71,    72,    72,    72,
      72,    73,    73,    74,    74,    75,    75,    75,    63,    16,
      50,    62,    16,    50,    36,    50,    89,    17,    85,    16,
      87,    50,    50,    50,    49,    90,    35,    62,    35,    75,
      57,    57,    38,    54,    80,    16,    36,    50,    90,    90,
      90,    62,    50,    62,    35,    35,    62,    64,    17,    91,
      22,    50,    90,    50,    50,    62,    50,    62,    35,    16,
      90,    35,    90,    90,    50,    90,    50,    50,    62,    90,
      90,    90,    50,    90
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
        case 5:

/* Line 1455 of yacc.c  */
#line 88 "../src/Tp5.y"
    {printf("encontro una expresion y ta todo bn\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 89 "../src/Tp5.y"
    {printf("encontro una Declaracion y ta todo bn\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 90 "../src/Tp5.y"
    {printf("encontro una sentencia y ta todo bn\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 91 "../src/Tp5.y"
    {printf("encontro un error lexico bn\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 92 "../src/Tp5.y"
    {printf("encontro un error lexico bn\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 178 "../src/Tp5.y"
    { aux = getsym((yyvsp[(1) - (4)].identificador)); if (aux) { printf("esta todo bien \n"); compararParametros(aux);} else { printf("Se quiere invocar una funcion que no está declarada"); };}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 186 "../src/Tp5.y"
    {;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 187 "../src/Tp5.y"
    {;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 190 "../src/Tp5.y"
    {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_FLOAT); aux->value.real = (yyvsp[(1) - (1)].constante); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 191 "../src/Tp5.y"
    {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_INT); (aux->value.entero) = (yyvsp[(1) - (1)].constante);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 192 "../src/Tp5.y"
    {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_CHAR); aux->value.caracter = (yyvsp[(1) - (1)].constante); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 208 "../src/Tp5.y"
    {tiparDeclaraciones((yyvsp[(1) - (3)].identificador));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 212 "../src/Tp5.y"
    {aux=getsym((yyvsp[(2) - (6)].identificador)); if (aux) { printf("redeclaracion de variable \n"); agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!", (yyvsp[(2) - (6)].listaDeParametros) );} else {  aux=putsym(strdup((yyvsp[(2) - (6)].identificador)),TYP_AUXILIAR);};tiparDeclaraciones((yyvsp[(1) - (6)].identificador)); aux->value.lista_parametros = sym_tabla_parametros_aux; sym_tabla_parametros_aux = NULL;;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 217 "../src/Tp5.y"
    {aux=getsym_tabla_parametros_aux((yyvsp[(2) - (2)].identificador));  if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!");} else {  aux=putsym_tabla_parametros_aux(strdup((yyvsp[(2) - (2)].identificador)),TYP_AUXILIAR); tiparDeclaracionesAux((yyvsp[(1) - (2)].identificador));} ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 218 "../src/Tp5.y"
    {aux=getsym_tabla_parametros_aux((yyvsp[(4) - (4)].identificador)); if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!");} else {  aux=putsym_tabla_parametros_aux(strdup((yyvsp[(4) - (4)].identificador)),TYP_AUXILIAR); tiparDeclaracionesAux((yyvsp[(3) - (4)].identificador));};}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 227 "../src/Tp5.y"
    {aux=getsym((yyvsp[(1) - (1)].identificador)); if (aux) { printf("redeclaracion de variable \n"); agregarError(&arrayErrores, "Redeclaracion de variable", (yyvsp[(1) - (1)].identificador));} else {  aux=putsym(strdup((yyvsp[(1) - (1)].identificador)),TYP_AUXILIAR);};}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 228 "../src/Tp5.y"
    { aux=getsym((yyvsp[(1) - (2)].identificador)); if (aux) { printf("redeclaracion de variable \n"); agregarError(&arrayErrores, "Redeclaracion de variable");} else {  aux=putsym(strdup((yyvsp[(1) - (2)].identificador)),TYP_AUXILIAR);(aux->value.real_doble)=(yyvsp[(2) - (2)].constante) ;};}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 231 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(2) - (2)].constante);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 234 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 235 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 236 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante);;}
    break;



/* Line 1455 of yacc.c  */
#line 1881 "Tp5.tab.c"
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
#line 300 "../src/Tp5.y"

int yyerror (char *mensaje)  /* Fucion de error */
{
  printf ("Error: %s\n", mensaje);
}

int main ()
{
    #ifdef BISON_DEBUG
        yydebug = 1;
  #endif
    int flag;



    yyin=fopen("entrada.c","r");

    flag=yyparse();

   /* mostrarLista();
    mostrarErrores(&arrayErrores);
    
    symrec *aux = getsym("unafuncion")->value.lista_parametros;
    while (aux)
    {
        printf("variable definida: %s \n", aux->name);
        int a = aux->value.real_doble;
        printf("valor: %d \n", a);
        printf("tipo: %d \n", aux->type);
        aux=aux->next;

    }*/
    printf("\n\n\nfin del programa %d", flag);

    fclose(yyin);

    return flag;
}
