
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
#line 2 "../src/Tp5.y"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Tp5-struct.h"
#include "Tp5-funciones.h"


extern FILE* yyin;

int yylex();

int yyerror (char*);
int yywrap(){
return(1);
}
symrec *aux;


/*
struct listaDeclaracionesMultiples {
    char* nombre;
    union
    {

    }valor
    struct listaDeclaracionesMultiples* siguiente;
} listaDeclaracionesMultiples;

//declaracion de la lista de variables a declarar
listaDeclaracionesMultiples* lista_declaraciones = NULL;*/




/* Line 189 of yacc.c  */
#line 109 "Tp5.tab.c"

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
#line 37 "../src/Tp5.y"

  char* identificador;
  double constante;
  char caracter;
  struct symrec *listaDeParametros;
  //listaDeclaracionesMultiples* listaDeclaraciones;



/* Line 214 of yacc.c  */
#line 188 "Tp5.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "Tp5.tab.c"

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
#define YYLAST   824

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

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
     215,   217,   219,   223,   225,   227,   229,   233,   240,   246,
     249,   254,   256,   260,   262,   266,   268,   271,   274,   276,
     278,   280,   282,   284,   286,   288,   290,   292,   297,   302,
     306,   310,   313,   315,   318,   320,   323,   326,   332,   340,
     346,   352,   360,   370,   379,   388,   396,   405,   413,   421,
     428,   431,   434,   438,   441,   445,   450,   454
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    -1,    59,    60,    -1,    59,    34,    -1,
      62,    35,    -1,    81,    -1,    91,    -1,    33,    61,    35,
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
      -1,    44,    -1,    45,    -1,    51,    -1,    52,    -1,    80,
      -1,    78,    53,    62,    54,    -1,    78,    49,    79,    50,
      -1,    78,    49,    50,    -1,    78,    55,    16,    -1,    78,
      13,    16,    -1,    78,    11,    -1,    78,    12,    -1,    63,
      -1,    79,    36,    63,    -1,    16,    -1,    90,    -1,    49,
      62,    50,    -1,    82,    -1,    83,    -1,    84,    -1,    17,
      87,    35,    -1,    17,    16,    49,    85,    50,    92,    -1,
      17,    16,    49,    86,    50,    -1,    17,    16,    -1,    85,
      36,    17,    16,    -1,    16,    -1,    86,    36,    16,    -1,
      88,    -1,    87,    36,    88,    -1,    16,    -1,    16,    89,
      -1,    15,    90,    -1,    18,    -1,    19,    -1,    20,    -1,
      92,    -1,    95,    -1,    96,    -1,    97,    -1,    98,    -1,
      99,    -1,    56,    93,    94,    57,    -1,    56,    94,    93,
      57,    -1,    56,    93,    57,    -1,    56,    94,    57,    -1,
      56,    57,    -1,    81,    -1,    93,    81,    -1,    91,    -1,
      94,    91,    -1,    62,    35,    -1,    21,    49,    62,    50,
      91,    -1,    21,    49,    62,    50,    91,    22,    91,    -1,
      24,    49,    62,    50,    91,    -1,    27,    49,    62,    50,
      91,    -1,    28,    91,    27,    49,    62,    50,    35,    -1,
      30,    49,    62,    35,    62,    35,    62,    50,    91,    -1,
      30,    49,    35,    62,    35,    62,    50,    91,    -1,    30,
      49,    62,    35,    35,    62,    50,    91,    -1,    30,    49,
      35,    35,    62,    50,    91,    -1,    30,    49,    62,    35,
      62,    35,    50,    91,    -1,    30,    49,    35,    62,    35,
      50,    91,    -1,    30,    49,    62,    35,    35,    50,    91,
      -1,    30,    49,    35,    35,    50,    91,    -1,    32,    35,
      -1,    31,    35,    -1,    23,    62,    35,    -1,    23,    35,
      -1,    26,    16,    35,    -1,    29,    64,    38,    91,    -1,
      25,    38,    91,    -1,    16,    38,    91,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    90,    91,    94,    95,    96,    97,    98,
     101,   102,   107,   108,   111,   112,   115,   116,   119,   120,
     123,   124,   127,   128,   131,   132,   135,   136,   139,   140,
     141,   144,   145,   146,   147,   148,   151,   152,   153,   156,
     157,   158,   161,   162,   163,   164,   167,   168,   171,   172,
     173,   174,   175,   176,   179,   179,   179,   179,   179,   179,
     182,   183,   184,   185,   186,   187,   188,   189,   192,   193,
     196,   197,   198,   205,   206,   207,   210,   214,   217,   220,
     221,   224,   225,   228,   229,   232,   233,   236,   239,   240,
     241,   246,   247,   248,   249,   250,   251,   254,   255,   256,
     257,   258,   261,   262,   265,   266,   269,   272,   273,   274,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     289,   290,   291,   292,   293,   296,   297,   298
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
  "expresionSufijo", "listaArgumentos", "expresionPrimaria", "declaracion",
  "declaracionVarSimples", "declaracionFunciones", "invocacionFunciones",
  "listaParametrosDeclaracion", "listaParametrosInvocacion",
  "listaVarSimples", "unaVarSimple", "inicial", "constante", "sentencia",
  "sentenciaCompuesta", "listaDeclaraciones", "listaSentencias",
  "sentenciaExpresion", "sentenciaSeleccion", "sentenciaIteracion",
  "sentenciaSalto", "sentenciaEtiquetada", 0
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
      80,    80,    80,    81,    81,    81,    82,    83,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    93,    93,    94,    94,    95,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    99,    99,    99
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
       1,     1,     3,     1,     1,     1,     3,     6,     5,     2,
       4,     1,     3,     1,     3,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     2,     1,     2,     1,     2,     2,     5,     7,     5,
       5,     7,     9,     8,     8,     7,     8,     7,     7,     6,
       2,     2,     3,     2,     3,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    70,     0,    88,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     4,    54,    56,    57,    55,     0,    58,
      59,     0,     3,     0,    12,    14,    16,    18,    20,    22,
      24,    26,    28,    31,    36,    39,    42,    46,     0,    48,
      60,     6,    73,    74,    75,    71,     7,    91,    92,    93,
      94,    95,    96,    70,     0,    49,    50,     0,    52,     0,
      85,     0,    83,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,   121,   120,     0,     0,     0,
     101,   102,   104,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    66,    67,
       0,     0,     0,     0,     0,   127,     0,     0,    86,    76,
       0,     0,   122,     0,   126,   124,     0,   106,     0,     0,
       0,     0,    11,     9,     8,     0,    72,    99,   103,     0,
     100,   105,     0,    13,     0,    19,    21,    23,    25,    27,
      29,    30,    35,    34,    32,    33,    37,    38,    40,    41,
      43,    44,    45,    15,    65,    63,    68,     0,     0,    64,
      53,    87,    81,     0,     0,     0,    85,    84,     0,     0,
       0,     0,   125,     0,     0,     0,    47,    97,    98,     0,
       0,    62,    61,    79,     0,     0,     0,    78,   107,   109,
     110,     0,     0,     0,     0,     0,     0,    17,    69,     0,
      77,    82,     0,     0,   119,     0,     0,     0,     0,     0,
       0,    80,   108,   111,   115,   117,     0,   118,     0,     0,
       0,   113,   114,   116,     0,   112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,    87,    80,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   177,    50,    91,    52,    53,    54,   184,   185,    71,
      72,   128,    55,    92,    57,    93,    94,    58,    59,    60,
      61,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int16 yypact[] =
{
     -80,   228,   -80,   718,   718,   730,   -23,    51,   -80,   -80,
     -80,    -6,    13,    92,    23,    79,   105,   459,   772,   112,
     104,   133,   -80,   -80,   -80,   -80,   -80,   -80,   111,   -80,
     -80,   271,   -80,     3,   -80,   -80,   157,    15,    -3,   141,
     151,    45,    -2,    70,    56,   130,   -80,   183,   772,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   772,   -80,   -80,   155,   -80,   459,
      11,   115,   -80,   772,   -80,   123,   772,   459,   135,   772,
     129,   175,   167,   -80,   502,   -80,   -80,    12,   160,   -16,
     -80,   -80,   -80,   318,   365,   -80,   772,   772,   772,   772,
     772,   772,   772,   772,   772,   772,   772,   772,   772,   772,
     772,   772,   772,   772,   772,   772,   772,   -80,   -80,   -80,
     198,   514,   772,   199,   168,   -80,   125,    75,   -80,   -80,
     203,   -15,   -80,    20,   -80,   -80,    27,   -80,   171,   459,
     556,   144,   -80,   -80,   -80,   772,   -80,   -80,   -80,   412,
     -80,   -80,   -13,   -80,    36,   218,    -3,   141,   151,    45,
      -2,    -2,    70,    70,    70,    70,    56,    56,   130,   130,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,    35,   -26,   -80,
     -80,   -80,   -80,   207,    37,    46,   211,   -80,   459,   459,
     459,   772,   -80,   568,   148,   610,   -80,   -80,   -80,   772,
     772,   -80,   -80,   -80,   212,   174,   215,   -80,   214,   -80,
     -80,    47,   459,    48,   622,   664,   150,   -80,   -80,   217,
     -80,   -80,   459,   206,   -80,   459,   459,    90,   459,    96,
     676,   -80,   -80,   -80,   -80,   -80,   459,   -80,   459,   459,
      97,   -80,   -80,   -80,   459,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   -80,     2,   -79,   -17,   -80,   136,   164,
     165,   149,   162,    87,    29,    99,   101,   -25,     4,   -80,
     -80,   -80,   -80,     1,   -80,   -80,   -80,   -80,   -80,   -80,
     137,   -80,   140,    -1,    63,   176,   178,   -80,   -80,   -80,
     -80,   -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      56,    82,    51,    33,     7,   105,   106,    65,    66,    68,
      96,   118,   119,   120,    75,    69,    81,   153,    98,    99,
      96,    96,    83,   117,     3,     4,   126,     5,   202,    63,
      89,     8,     9,    10,   146,   188,   100,   173,    95,    96,
     107,   108,   176,    73,   198,   142,   143,   144,    74,   121,
     103,   104,    83,   122,    24,   123,    96,    25,    26,    27,
     127,    77,    28,    96,    29,    30,    89,    70,   125,    89,
     189,   200,    96,   204,   199,   131,   134,   190,   133,   109,
     110,   136,   206,    96,    96,   201,   141,   205,   170,   171,
     172,   182,   183,   151,   148,    78,   207,   223,   225,   154,
     111,   112,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
     196,   218,     3,     4,   178,     5,    96,    63,    88,     8,
       9,    10,    96,    96,   162,   163,   164,   165,   192,    85,
     236,    76,   194,     8,     9,    10,   238,   244,   151,    83,
     129,   130,    24,   148,    79,    25,    26,    27,   132,    96,
      28,    84,    29,    30,   137,    96,     3,     4,    86,     5,
     135,    63,   124,     8,     9,    10,   113,   114,   115,   195,
      96,   101,   217,   214,    96,   230,    96,   208,   209,   210,
     160,   161,   102,   211,    97,   213,    24,   216,   116,    25,
      26,    27,   138,    83,    28,   139,    29,    30,   166,   167,
     145,   224,   168,   169,   174,   179,   227,   229,   180,   186,
     191,   232,    99,   203,   234,   235,   126,   237,     2,   219,
      31,   221,   240,   231,   155,   241,   222,   242,   243,     3,
       4,   233,     5,   245,     6,     7,     8,     9,    10,    11,
     158,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   156,   159,   157,   181,   187,   220,    24,
     152,   149,    25,    26,    27,     0,     0,    28,     0,    29,
      30,     0,     3,     4,    31,     5,     0,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,    25,    26,    27,     0,     0,
      28,     0,    29,    30,     0,     0,     0,    31,    90,     3,
       4,     0,     5,     0,     6,     7,     8,     9,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    25,    26,    27,     0,     0,    28,     0,    29,
      30,     0,     0,     0,    31,   147,     3,     4,     0,     5,
       0,     6,     7,     8,     9,    10,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,    25,
      26,    27,     0,     0,    28,     0,    29,    30,     0,     0,
       0,    31,   150,     3,     4,     0,     5,     0,     6,     0,
       8,     9,    10,    11,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,    25,    26,    27,     0,
       0,    28,     0,    29,    30,     0,     0,     0,    31,   197,
       3,     4,     0,     5,     0,     6,     0,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,    25,    26,    27,     0,     0,    28,     0,
      29,    30,     0,     3,     4,    31,     5,     0,    63,     0,
       8,     9,    10,     0,     0,     3,     4,     0,     5,     0,
      63,     0,     8,     9,    10,     0,     0,   140,     0,     0,
       0,     0,     0,    24,     0,     0,    25,    26,    27,     0,
       0,    28,     0,    29,    30,    24,     0,     0,    25,    26,
      27,     0,     0,    28,   175,    29,    30,     3,     4,     0,
       5,     0,    63,     0,     8,     9,    10,     0,     0,     3,
       4,     0,     5,     0,    63,     0,     8,     9,    10,     0,
       0,   193,     0,     0,     0,     0,     0,    24,     0,     0,
      25,    26,    27,     0,     0,    28,     0,    29,    30,    24,
       0,     0,    25,    26,    27,     0,     0,    28,   212,    29,
      30,     3,     4,     0,     5,     0,    63,     0,     8,     9,
      10,     0,     0,     3,     4,     0,     5,     0,    63,     0,
       8,     9,    10,     0,     0,   215,     0,     0,     0,     0,
       0,    24,     0,     0,    25,    26,    27,     0,     0,    28,
       0,    29,    30,    24,     0,     0,    25,    26,    27,     0,
       0,    28,   226,    29,    30,     3,     4,     0,     5,     0,
      63,     0,     8,     9,    10,     0,     0,     3,     4,     0,
       5,     0,    63,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,    25,    26,
      27,     0,     0,    28,   228,    29,    30,    24,     0,     0,
      25,    26,    27,     0,     0,    28,   239,    29,    30,     3,
       4,     0,     5,     0,    63,     0,     8,     9,    10,     0,
       0,     3,     4,     0,     5,     0,    63,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    25,    26,    27,     0,     0,    64,     0,    29,
      30,    24,     0,     0,    25,    26,    27,     0,     0,    67,
       0,    29,    30,     3,     4,     0,     5,     0,    63,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,    25,    26,    27,     0,
       0,    28,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       1,    18,     1,     1,    17,     7,     8,     3,     4,     5,
      36,    11,    12,    13,    12,    38,    17,    96,     3,     4,
      36,    36,    18,    48,    11,    12,    15,    14,    54,    16,
      28,    18,    19,    20,    50,    50,    39,   116,    35,    36,
      42,    43,   121,    49,    57,    33,    34,    35,    35,    49,
       5,     6,    48,    53,    41,    55,    36,    44,    45,    46,
      49,    38,    49,    36,    51,    52,    64,    16,    69,    67,
      50,    36,    36,    36,    38,    73,    77,    50,    76,     9,
      10,    79,    36,    36,    36,    50,    84,    50,   113,   114,
     115,    16,    17,    94,    93,    16,    50,    50,    50,    97,
      44,    45,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     145,   200,    11,    12,   122,    14,    36,    16,    17,    18,
      19,    20,    36,    36,   105,   106,   107,   108,   139,    35,
      50,    49,   140,    18,    19,    20,    50,    50,   149,   145,
      35,    36,    41,   152,    49,    44,    45,    46,    35,    36,
      49,    49,    51,    52,    35,    36,    11,    12,    35,    14,
      35,    16,    17,    18,    19,    20,    46,    47,    48,    35,
      36,    40,   199,    35,    36,    35,    36,   188,   189,   190,
     103,   104,    41,   191,    37,   193,    41,   195,    15,    44,
      45,    46,    27,   199,    49,    38,    51,    52,   109,   110,
      50,   212,   111,   112,    16,    16,   214,   215,    50,    16,
      49,   222,     4,    16,   225,   226,    15,   228,     0,    17,
      56,    16,   230,    16,    98,   236,    22,   238,   239,    11,
      12,    35,    14,   244,    16,    17,    18,    19,    20,    21,
     101,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    99,   102,   100,   126,   130,   205,    41,
      94,    93,    44,    45,    46,    -1,    -1,    49,    -1,    51,
      52,    -1,    11,    12,    56,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    -1,    -1,
      49,    -1,    51,    52,    -1,    -1,    -1,    56,    57,    11,
      12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,    51,
      52,    -1,    -1,    -1,    56,    57,    11,    12,    -1,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    -1,    -1,    49,    -1,    51,    52,    -1,    -1,
      -1,    56,    57,    11,    12,    -1,    14,    -1,    16,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    51,    52,    -1,    -1,    -1,    56,    57,
      11,    12,    -1,    14,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,
      51,    52,    -1,    11,    12,    56,    14,    -1,    16,    -1,
      18,    19,    20,    -1,    -1,    11,    12,    -1,    14,    -1,
      16,    -1,    18,    19,    20,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    51,    52,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    11,    12,    -1,
      14,    -1,    16,    -1,    18,    19,    20,    -1,    -1,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    19,    20,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    52,    41,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    11,    12,    -1,    14,    -1,    16,    -1,    18,    19,
      20,    -1,    -1,    11,    12,    -1,    14,    -1,    16,    -1,
      18,    19,    20,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      -1,    51,    52,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    11,    12,    -1,    14,    -1,
      16,    -1,    18,    19,    20,    -1,    -1,    11,    12,    -1,
      14,    -1,    16,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    51,    52,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    19,    20,    -1,
      -1,    11,    12,    -1,    14,    -1,    16,    -1,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,    51,
      52,    41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      -1,    51,    52,    11,    12,    -1,    14,    -1,    16,    -1,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    51,    52
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
      80,    81,    82,    83,    84,    90,    91,    92,    95,    96,
      97,    98,    99,    16,    49,    76,    76,    49,    76,    38,
      16,    87,    88,    49,    35,    62,    49,    38,    16,    49,
      62,    91,    64,    76,    49,    35,    35,    61,    17,    62,
      57,    81,    91,    93,    94,    35,    36,    37,     3,     4,
      39,    40,    41,     5,     6,     7,     8,    42,    43,     9,
      10,    44,    45,    46,    47,    48,    15,    75,    11,    12,
      13,    49,    53,    55,    17,    91,    15,    49,    89,    35,
      36,    62,    35,    62,    91,    35,    62,    35,    27,    38,
      35,    62,    33,    34,    35,    50,    50,    57,    81,    94,
      57,    91,    93,    63,    62,    66,    67,    68,    69,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    74,    74,
      75,    75,    75,    63,    16,    50,    63,    79,    62,    16,
      50,    90,    16,    17,    85,    86,    16,    88,    50,    50,
      50,    49,    91,    35,    62,    35,    75,    57,    57,    38,
      36,    50,    54,    16,    36,    50,    36,    50,    91,    91,
      91,    62,    50,    62,    35,    35,    62,    64,    63,    17,
      92,    16,    22,    50,    91,    50,    50,    62,    50,    62,
      35,    16,    91,    35,    91,    91,    50,    91,    50,    50,
      62,    91,    91,    91,    50,    91
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
#line 94 "../src/Tp5.y"
    {printf("encontro una expresion y ta todo bn\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 95 "../src/Tp5.y"
    {printf("encontro una Declaracion y ta todo bn\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 96 "../src/Tp5.y"
    {printf("encontro una sentencia y ta todo bn\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 97 "../src/Tp5.y"
    {printf("encontro un error lexico bn\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 98 "../src/Tp5.y"
    {printf("encontro un error lexico bn\n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 210 "../src/Tp5.y"
    {tiparDeclaraciones((yyvsp[(1) - (3)].identificador));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 214 "../src/Tp5.y"
    {aux=getsym_tabla_parametros_aux((yyvsp[(2) - (6)].identificador)); if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!", (yyvsp[(1) - (6)].listaDeParametros) );} else {  aux=putsym(strdup((yyvsp[(2) - (6)].identificador)),TYP_AUXILIAR);};tiparDeclaraciones((yyvsp[(1) - (6)].identificador)); aux->value.lista_parametros = sym_tabla_parametros_aux; sym_tabla_parametros_aux = NULL;;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 220 "../src/Tp5.y"
    {aux=getsym_tabla_parametros_aux((yyvsp[(1) - (2)].identificador)); if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!");} else {  aux=putsym_tabla_parametros_aux(strdup((yyvsp[(1) - (2)].identificador)),TYP_AUXILIAR);};}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 221 "../src/Tp5.y"
    {aux=getsym_tabla_parametros_aux((yyvsp[(3) - (4)].identificador)); if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!");} else {  aux=putsym_tabla_parametros_aux(strdup((yyvsp[(3) - (4)].identificador)),TYP_AUXILIAR);};}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 232 "../src/Tp5.y"
    {aux=getsym((yyvsp[(1) - (1)].identificador)); if (aux) { agregarError(&arrayErrores, "Redeclaracion de variable", (yyvsp[(1) - (1)].identificador));} else {  aux=putsym(strdup((yyvsp[(1) - (1)].identificador)),TYP_AUXILIAR);};}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 233 "../src/Tp5.y"
    { aux=getsym((yyvsp[(1) - (2)].identificador)); if (aux) { agregarError(&arrayErrores, "Redeclaracion de variable");} else {  aux=putsym(strdup((yyvsp[(1) - (2)].identificador)),TYP_AUXILIAR);(aux->value.real_doble)=(yyvsp[(2) - (2)].constante) ;};}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 236 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(2) - (2)].constante);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 239 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 240 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 241 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante);;}
    break;



/* Line 1455 of yacc.c  */
#line 1846 "Tp5.tab.c"
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
#line 305 "../src/Tp5.y"

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

    mostrarLista();
    printf("\n\n\nfin del programa %d", flag);

    fclose(yyin);

    return flag;
}
