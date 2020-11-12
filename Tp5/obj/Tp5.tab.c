
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
#line 108 "Tp5.tab.c"

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
     CONTINUE = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "../src/Tp5.y"

  char* identificador;
  double constante;
  char caracter;
  struct symrec *listaDeParametros;
  //listaDeclaracionesMultiples* listaDeclaraciones;



/* Line 214 of yacc.c  */
#line 186 "Tp5.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "Tp5.tab.c"

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
#define YYLAST   831

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  231

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,     2,     2,    45,    38,     2,
      46,    47,    43,    41,    33,    42,    52,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    53,
      39,     2,    40,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,    36,    55,    48,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    19,
      21,    25,    27,    33,    35,    39,    41,    45,    47,    51,
      53,    57,    59,    63,    65,    69,    73,    75,    79,    83,
      87,    91,    93,    97,   101,   103,   107,   111,   113,   117,
     121,   125,   127,   132,   134,   137,   140,   143,   146,   151,
     153,   155,   157,   159,   161,   163,   165,   170,   175,   179,
     183,   187,   190,   193,   195,   199,   201,   203,   207,   209,
     211,   215,   222,   224,   228,   230,   234,   236,   239,   242,
     244,   246,   248,   250,   252,   254,   256,   258,   260,   265,
     270,   274,   278,   281,   283,   286,   288,   291,   294,   300,
     308,   314,   320,   328,   338,   347,   356,   364,   373,   381,
     389,   396,   399,   402,   406,   409,   413,   418,   422
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    -1,    57,    58,    -1,    59,    -1,    78,
      -1,    86,    -1,    60,    -1,    59,    33,    60,    -1,    61,
      -1,    73,    15,    60,    -1,    62,    -1,    62,    34,    59,
      35,    61,    -1,    63,    -1,    63,     3,    63,    -1,    64,
      -1,    63,     4,    64,    -1,    65,    -1,    64,    36,    65,
      -1,    66,    -1,    65,    37,    66,    -1,    67,    -1,    66,
      38,    67,    -1,    68,    -1,    67,     5,    68,    -1,    67,
       6,    68,    -1,    69,    -1,    68,    39,    69,    -1,    68,
      40,    69,    -1,    68,     8,    69,    -1,    68,     7,    69,
      -1,    70,    -1,    69,     9,    70,    -1,    69,    10,    70,
      -1,    71,    -1,    70,    41,    71,    -1,    70,    42,    71,
      -1,    72,    -1,    71,    43,    72,    -1,    71,    44,    72,
      -1,    71,    45,    72,    -1,    73,    -1,    46,    17,    47,
      72,    -1,    75,    -1,    11,    73,    -1,    12,    73,    -1,
      74,    72,    -1,    14,    73,    -1,    14,    46,    17,    47,
      -1,    38,    -1,    43,    -1,    41,    -1,    42,    -1,    48,
      -1,    49,    -1,    77,    -1,    75,    50,    59,    51,    -1,
      75,    46,    76,    47,    -1,    75,    46,    47,    -1,    75,
      52,    16,    -1,    75,    13,    16,    -1,    75,    11,    -1,
      75,    12,    -1,    60,    -1,    76,    33,    60,    -1,    16,
      -1,    85,    -1,    46,    59,    47,    -1,    79,    -1,    80,
      -1,    17,    82,    53,    -1,    17,    16,    46,    81,    47,
      87,    -1,    16,    -1,    81,    33,    16,    -1,    83,    -1,
      82,    33,    83,    -1,    16,    -1,    16,    84,    -1,    15,
      85,    -1,    18,    -1,    19,    -1,    20,    -1,    87,    -1,
      90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,
      54,    88,    89,    55,    -1,    54,    89,    88,    55,    -1,
      54,    88,    55,    -1,    54,    89,    55,    -1,    54,    55,
      -1,    78,    -1,    88,    78,    -1,    86,    -1,    89,    86,
      -1,    59,    53,    -1,    21,    46,    59,    47,    86,    -1,
      21,    46,    59,    47,    86,    22,    86,    -1,    24,    46,
      59,    47,    86,    -1,    27,    46,    59,    47,    86,    -1,
      28,    86,    27,    46,    59,    47,    53,    -1,    30,    46,
      59,    53,    59,    53,    59,    47,    86,    -1,    30,    46,
      53,    59,    53,    59,    47,    86,    -1,    30,    46,    59,
      53,    53,    59,    47,    86,    -1,    30,    46,    53,    53,
      59,    47,    86,    -1,    30,    46,    59,    53,    59,    53,
      47,    86,    -1,    30,    46,    53,    59,    53,    47,    86,
      -1,    30,    46,    59,    53,    53,    47,    86,    -1,    30,
      46,    53,    53,    47,    86,    -1,    32,    53,    -1,    31,
      53,    -1,    23,    59,    53,    -1,    23,    53,    -1,    26,
      16,    53,    -1,    29,    61,    35,    86,    -1,    25,    35,
      86,    -1,    16,    35,    86,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    87,    90,    91,    92,    98,    99,   102,
     103,   106,   107,   110,   111,   114,   115,   118,   119,   122,
     123,   126,   127,   130,   131,   132,   135,   136,   137,   138,
     139,   142,   143,   144,   147,   148,   149,   152,   153,   154,
     155,   158,   159,   162,   163,   164,   165,   166,   167,   170,
     170,   170,   170,   170,   170,   173,   174,   175,   176,   177,
     178,   179,   180,   183,   184,   187,   188,   189,   196,   197,
     200,   203,   207,   208,   211,   212,   215,   216,   219,   222,
     223,   224,   229,   230,   231,   232,   233,   234,   237,   238,
     239,   240,   241,   244,   245,   248,   249,   252,   255,   256,
     257,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   272,   273,   274,   275,   276,   279,   280,   281
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
  "CASE", "FOR", "BREAK", "CONTINUE", "','", "'?'", "':'", "'|'", "'^'",
  "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'",
  "'~'", "'!'", "'['", "']'", "'.'", "';'", "'{'", "'}'", "$accept",
  "entrada", "linea", "expresion", "expresionAsignacion",
  "expresionCondicional", "expresionOLogico", "expresionYLogico",
  "expresionOInclusivo", "expresionOExcluyente", "expresionY",
  "expresionIgualdad", "expresionRelacional", "expresionCorrimiento",
  "expresionAditiva", "expresionMultiplicativa", "expresionConversion",
  "expresionUnaria", "operadorUnario", "expresionSufijo",
  "listaArgumentos", "expresionPrimaria", "declaracion",
  "declaracionVarSimples", "declaracionFunciones", "listaParametros",
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
     285,   286,   287,    44,    63,    58,   124,    94,    38,    60,
      62,    43,    45,    42,    47,    37,    40,    41,   126,    33,
      91,    93,    46,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      68,    69,    69,    69,    70,    70,    70,    71,    71,    71,
      71,    72,    72,    73,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    77,    78,    78,
      79,    80,    81,    81,    82,    82,    83,    83,    84,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    88,    88,    89,    89,    90,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     3,     3,
       3,     2,     2,     1,     3,     1,     1,     3,     1,     1,
       3,     6,     1,     3,     1,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       3,     3,     2,     1,     2,     1,     2,     2,     5,     7,
       5,     5,     7,     9,     8,     8,     7,     8,     7,     7,
       6,     2,     2,     3,     2,     3,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    65,     0,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    51,    52,    50,     0,    53,    54,     0,
       3,     4,     7,     9,    11,    13,    15,    17,    19,    21,
      23,    26,    31,    34,    37,    41,     0,    43,    55,     5,
      68,    69,    66,     6,    82,    83,    84,    85,    86,    87,
      65,     0,    44,    45,     0,    47,     0,    76,     0,    74,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,   112,   111,     0,     0,    92,    93,    95,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    61,    62,     0,     0,     0,     0,
       0,   118,     0,     0,    77,     0,    70,     0,   113,     0,
     117,   115,     0,     0,     0,     0,     0,     0,    67,    90,
      94,     0,    91,    96,     0,     8,     0,    14,    16,    18,
      20,    22,    24,    25,    30,    29,    27,    28,    32,    33,
      35,    36,    38,    39,    40,    10,    60,    58,    63,     0,
       0,    59,    48,    78,    72,     0,    76,    75,     0,     0,
       0,     0,   116,     0,     0,     0,    42,    88,    89,     0,
       0,    57,    56,     0,     0,    98,   100,   101,     0,     0,
       0,     0,     0,     0,    12,    64,    73,    71,     0,     0,
     110,     0,     0,     0,     0,     0,     0,    99,   102,   106,
     108,     0,   109,     0,     0,     0,   104,   105,   107,     0,
     103
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    30,    77,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     169,    48,    87,    50,    51,   175,    68,    69,   124,    52,
      88,    54,    89,    90,    55,    56,    57,    58,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yytype_int16 yypact[] =
{
     -75,   215,   -75,   731,   731,   743,    -3,    13,   -75,   -75,
     -75,   -10,   110,     3,    17,    18,    12,   434,   782,    30,
       8,    39,   -75,   -75,   -75,   -75,   539,   -75,   -75,   254,
     -75,   -23,   -75,   -75,     6,    20,    28,    60,    81,   129,
       5,   133,   105,    11,   -75,   108,   782,     7,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   782,   -75,   -75,   578,   -75,   434,    -9,   -22,   -75,
     782,   -75,   -18,   782,   434,    74,   782,   -23,   109,   103,
     -75,   473,   -75,   -75,    97,    -8,   -75,   -75,   -75,   299,
     344,   782,   -75,   782,   782,   782,   782,   782,   782,   782,
     782,   782,   782,   782,   782,   782,   782,   782,   782,   782,
     782,   782,   782,   -75,   -75,   -75,   138,   590,   782,   139,
     115,   -75,    68,   141,   -75,   154,   -75,    15,   -75,    27,
     -75,   -75,    34,   125,   434,   486,   -12,   782,   -75,   -75,
     -75,   389,   -75,   -75,   -13,   -75,    49,   169,    28,    60,
      81,   129,     5,     5,   133,   133,   133,   133,   105,   105,
      11,    11,   -75,   -75,   -75,   -75,   -75,   -75,   -75,    38,
       0,   -75,   -75,   -75,   -75,    44,   159,   -75,   434,   434,
     434,   782,   -75,   629,    -7,   526,   -75,   -75,   -75,   782,
     782,   -75,   -75,   160,   121,   158,   -75,   -75,    46,   434,
      47,   641,   680,    -6,   -75,   -75,   -75,   -75,   434,   128,
     -75,   434,   434,    84,   434,    85,   692,   -75,   -75,   -75,
     -75,   434,   -75,   434,   434,    92,   -75,   -75,   -75,   434,
     -75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -75,   -75,   -75,     2,   -74,   -17,   -75,    88,    89,    90,
      91,    93,    50,    63,    55,    61,   -41,     4,   -75,   -75,
     -75,   -75,     1,   -75,   -75,   -75,   -75,    64,   -75,    70,
      -1,    -4,   104,   106,   -75,   -75,   -75,   -75,   -75
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      53,    79,    49,    31,     7,   113,   122,    62,    63,    65,
      91,   125,   101,   102,    72,    91,    78,   145,   114,   115,
     116,    91,    80,    94,    95,    91,    91,    91,    85,    67,
      92,   126,    66,    91,    75,   128,    70,   123,   165,   138,
      93,   185,   188,   168,   103,   104,   201,   216,    91,    73,
      80,   192,    74,   117,   109,   110,   111,   118,    76,   119,
      91,    82,   178,    85,    96,   121,    85,    91,   162,   163,
     164,   190,   127,   130,   179,   129,    81,   193,   132,    91,
      91,   180,    91,   136,   189,   191,     8,     9,    10,   143,
     140,   194,    83,   209,   211,   146,   186,    97,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,   205,    91,    91,    98,
     170,     3,     4,   112,     5,    91,    60,   131,     8,     9,
      10,   221,   223,   182,    99,   100,   133,   184,   134,   229,
     143,    80,   105,   106,   137,   140,   107,   108,    22,   152,
     153,    23,    24,    25,   166,   171,    26,   174,    27,    28,
     158,   159,   172,    71,   154,   155,   156,   157,   160,   161,
     176,   181,   204,    95,   122,    29,   206,   195,   196,   197,
     208,   218,   147,   198,   148,   200,   149,   203,   150,   177,
     207,   151,   173,    80,   144,   141,     0,     0,   210,     0,
       0,     0,     0,   213,   215,     0,     0,   217,     0,     0,
     219,   220,     0,   222,     0,     2,     0,     0,   225,     0,
     226,     0,   227,   228,     0,     0,     3,     4,   230,     5,
       0,     6,     7,     8,     9,    10,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,    22,     0,     0,    23,    24,    25,     0,
       0,    26,     0,    27,    28,     3,     4,     0,     5,    29,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,    22,     0,     0,    23,    24,    25,     0,     0,
      26,     0,    27,    28,     0,     0,     0,     0,    29,    86,
       3,     4,     0,     5,     0,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,    22,     0,     0,
      23,    24,    25,     0,     0,    26,     0,    27,    28,     0,
       0,     0,     0,    29,   139,     3,     4,     0,     5,     0,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,    22,     0,     0,    23,    24,    25,     0,     0,
      26,     0,    27,    28,     0,     0,     0,     0,    29,   142,
       3,     4,     0,     5,     0,     6,     0,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,    22,     0,     0,
      23,    24,    25,     0,     0,    26,     0,    27,    28,     0,
       0,     0,     0,    29,   187,     3,     4,     0,     5,     0,
       6,     0,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,    22,     0,     0,    23,    24,    25,     0,     0,
      26,     0,    27,    28,     3,     4,     0,     5,    29,    60,
       0,     8,     9,    10,     0,     0,     0,     3,     4,     0,
       5,     0,    60,     0,     8,     9,    10,     0,     0,     0,
       0,    22,     0,     0,    23,    24,    25,     0,     0,    26,
       0,    27,    28,     0,    22,     0,   135,    23,    24,    25,
       0,     0,    26,     0,    27,    28,     0,     3,     4,   183,
       5,     0,    60,     0,     8,     9,    10,     0,     0,     0,
       3,     4,     0,     5,     0,    60,    84,     8,     9,    10,
       0,     0,     0,     0,    22,     0,     0,    23,    24,    25,
       0,     0,    26,     0,    27,    28,     0,    22,     0,   202,
      23,    24,    25,     0,     0,    26,     0,    27,    28,     3,
       4,     0,     5,     0,    60,   120,     8,     9,    10,     0,
       0,     3,     4,     0,     5,     0,    60,     0,     8,     9,
      10,     0,     0,     0,     0,     0,    22,     0,     0,    23,
      24,    25,     0,     0,    26,     0,    27,    28,    22,     0,
       0,    23,    24,    25,     0,     0,    26,   167,    27,    28,
       3,     4,     0,     5,     0,    60,     0,     8,     9,    10,
       0,     0,     3,     4,     0,     5,     0,    60,     0,     8,
       9,    10,     0,     0,     0,     0,     0,    22,     0,     0,
      23,    24,    25,     0,     0,    26,   199,    27,    28,    22,
       0,     0,    23,    24,    25,     0,     0,    26,   212,    27,
      28,     3,     4,     0,     5,     0,    60,     0,     8,     9,
      10,     0,     0,     3,     4,     0,     5,     0,    60,     0,
       8,     9,    10,     0,     0,     0,     0,     0,    22,     0,
       0,    23,    24,    25,     0,     0,    26,   214,    27,    28,
      22,     0,     0,    23,    24,    25,     0,     0,    26,   224,
      27,    28,     3,     4,     0,     5,     0,    60,     0,     8,
       9,    10,     0,     0,     3,     4,     0,     5,     0,    60,
       0,     8,     9,    10,     0,     0,     0,     0,     0,    22,
       0,     0,    23,    24,    25,     0,     0,    61,     0,    27,
      28,    22,     0,     0,    23,    24,    25,     0,     0,    64,
       0,    27,    28,     3,     4,     0,     5,     0,    60,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,    23,    24,    25,     0,     0,    26,     0,
      27,    28
};

static const yytype_int16 yycheck[] =
{
       1,    18,     1,     1,    17,    46,    15,     3,     4,     5,
      33,    33,     7,     8,    12,    33,    17,    91,    11,    12,
      13,    33,    18,     3,     4,    33,    33,    33,    26,    16,
      53,    53,    35,    33,    16,    53,    46,    46,   112,    47,
      34,    53,    55,   117,    39,    40,    53,    53,    33,    46,
      46,    51,    35,    46,    43,    44,    45,    50,    46,    52,
      33,    53,    47,    61,    36,    66,    64,    33,   109,   110,
     111,    33,    70,    74,    47,    73,    46,    33,    76,    33,
      33,    47,    33,    81,    35,    47,    18,    19,    20,    90,
      89,    47,    53,    47,    47,    93,   137,    37,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   190,    33,    33,    38,
     118,    11,    12,    15,    14,    33,    16,    53,    18,    19,
      20,    47,    47,   134,     5,     6,    27,   135,    35,    47,
     141,   137,     9,    10,    47,   144,    41,    42,    38,    99,
     100,    41,    42,    43,    16,    16,    46,    16,    48,    49,
     105,   106,    47,    53,   101,   102,   103,   104,   107,   108,
      16,    46,   189,     4,    15,    54,    16,   178,   179,   180,
      22,    53,    94,   181,    95,   183,    96,   185,    97,   125,
     194,    98,   122,   189,    90,    89,    -1,    -1,   199,    -1,
      -1,    -1,    -1,   201,   202,    -1,    -1,   208,    -1,    -1,
     211,   212,    -1,   214,    -1,     0,    -1,    -1,   216,    -1,
     221,    -1,   223,   224,    -1,    -1,    11,    12,   229,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    42,    43,    -1,
      -1,    46,    -1,    48,    49,    11,    12,    -1,    14,    54,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    42,    43,    -1,    -1,
      46,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    55,
      11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    42,    43,    -1,    -1,    46,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    55,    11,    12,    -1,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    42,    43,    -1,    -1,
      46,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    55,
      11,    12,    -1,    14,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    42,    43,    -1,    -1,    46,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    55,    11,    12,    -1,    14,    -1,
      16,    -1,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    42,    43,    -1,    -1,
      46,    -1,    48,    49,    11,    12,    -1,    14,    54,    16,
      -1,    18,    19,    20,    -1,    -1,    -1,    11,    12,    -1,
      14,    -1,    16,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    42,    43,    -1,    -1,    46,
      -1,    48,    49,    -1,    38,    -1,    53,    41,    42,    43,
      -1,    -1,    46,    -1,    48,    49,    -1,    11,    12,    53,
      14,    -1,    16,    -1,    18,    19,    20,    -1,    -1,    -1,
      11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    42,    43,
      -1,    -1,    46,    -1,    48,    49,    -1,    38,    -1,    53,
      41,    42,    43,    -1,    -1,    46,    -1,    48,    49,    11,
      12,    -1,    14,    -1,    16,    17,    18,    19,    20,    -1,
      -1,    11,    12,    -1,    14,    -1,    16,    -1,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      42,    43,    -1,    -1,    46,    -1,    48,    49,    38,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      11,    12,    -1,    14,    -1,    16,    -1,    18,    19,    20,
      -1,    -1,    11,    12,    -1,    14,    -1,    16,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    42,    43,    -1,    -1,    46,    47,    48,    49,    38,
      -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,    48,
      49,    11,    12,    -1,    14,    -1,    16,    -1,    18,    19,
      20,    -1,    -1,    11,    12,    -1,    14,    -1,    16,    -1,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      38,    -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,
      48,    49,    11,    12,    -1,    14,    -1,    16,    -1,    18,
      19,    20,    -1,    -1,    11,    12,    -1,    14,    -1,    16,
      -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    42,    43,    -1,    -1,    46,    -1,    48,
      49,    38,    -1,    -1,    41,    42,    43,    -1,    -1,    46,
      -1,    48,    49,    11,    12,    -1,    14,    -1,    16,    -1,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    42,    43,    -1,    -1,    46,    -1,
      48,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,     0,    11,    12,    14,    16,    17,    18,    19,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    38,    41,    42,    43,    46,    48,    49,    54,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    77,    78,
      79,    80,    85,    86,    87,    90,    91,    92,    93,    94,
      16,    46,    73,    73,    46,    73,    35,    16,    82,    83,
      46,    53,    59,    46,    35,    16,    46,    59,    86,    61,
      73,    46,    53,    53,    17,    59,    55,    78,    86,    88,
      89,    33,    53,    34,     3,     4,    36,    37,    38,     5,
       6,     7,     8,    39,    40,     9,    10,    41,    42,    43,
      44,    45,    15,    72,    11,    12,    13,    46,    50,    52,
      17,    86,    15,    46,    84,    33,    53,    59,    53,    59,
      86,    53,    59,    27,    35,    53,    59,    47,    47,    55,
      78,    89,    55,    86,    88,    60,    59,    63,    64,    65,
      66,    67,    68,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    60,    16,    47,    60,    76,
      59,    16,    47,    85,    16,    81,    16,    83,    47,    47,
      47,    46,    86,    53,    59,    53,    72,    55,    55,    35,
      33,    47,    51,    33,    47,    86,    86,    86,    59,    47,
      59,    53,    53,    59,    61,    60,    16,    87,    22,    47,
      86,    47,    47,    59,    47,    59,    53,    86,    53,    86,
      86,    47,    86,    47,    47,    59,    86,    86,    86,    47,
      86
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
        case 4:

/* Line 1455 of yacc.c  */
#line 90 "../src/Tp5.y"
    {printf("encontro una expresion y ta todo bn\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 91 "../src/Tp5.y"
    {printf("encontro una Declaracion y ta todo bn\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 92 "../src/Tp5.y"
    {printf("encontro una sentencia y ta todo bn\n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 200 "../src/Tp5.y"
    {tiparDeclaraciones((yyvsp[(1) - (3)].identificador));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 203 "../src/Tp5.y"
    {aux=getsym((yyvsp[(2) - (6)].identificador), sym_tabla_parametros_aux); if (aux) { printf("\n\n****Cantidad o tipado de parametros incorrecto %s!!****\n\n", (yyvsp[(1) - (6)].listaDeParametros));} else {  aux=putsym(strdup((yyvsp[(2) - (6)].identificador)),TYP_AUXILIAR, sym_table);};tiparDeclaraciones((yyvsp[(1) - (6)].identificador)); aux->value.lista_parametros = sym_tabla_parametros_aux; sym_tabla_parametros_aux = NULL;;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 207 "../src/Tp5.y"
    {aux=getsym((yyvsp[(1) - (1)].identificador), sym_tabla_parametros_aux); if (aux) { printf("\n\n*******************Cantidad o tipado de parametros incorrecto!!*****************\n\n");} else {  aux=putsym(strdup((yyvsp[(1) - (1)].identificador)),TYP_AUXILIAR, sym_tabla_parametros_aux);};}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 208 "../src/Tp5.y"
    {aux=getsym((yyvsp[(3) - (3)].identificador), sym_tabla_parametros_aux); if (aux) { printf("\n\n*******************Cantidad o tipado de parametros incorrecto!!*****************\n\n");} else {  aux=putsym(strdup((yyvsp[(3) - (3)].identificador)),TYP_AUXILIAR, sym_tabla_parametros_aux);};}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 215 "../src/Tp5.y"
    {aux=getsym((yyvsp[(1) - (1)].identificador), sym_table); if (aux) { printf("\n\n*******************Redeclaracion de variable: %s!!*****************\n\n", (yyvsp[(1) - (1)].identificador));} else {  aux=putsym(strdup((yyvsp[(1) - (1)].identificador)),TYP_AUXILIAR, sym_table);};}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 216 "../src/Tp5.y"
    { aux=getsym((yyvsp[(1) - (2)].identificador), sym_table); if (aux) { printf("\n\n*******************Redeclaracion de variable!!*****************\n\n");} else {  aux=putsym(strdup((yyvsp[(1) - (2)].identificador)),TYP_AUXILIAR, sym_table);(aux->value.real_doble)=(yyvsp[(2) - (2)].constante) ;};}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 219 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(2) - (2)].constante);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 222 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 223 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 224 "../src/Tp5.y"
    {(yyval.constante) = (yyvsp[(1) - (1)].constante);;}
    break;



/* Line 1455 of yacc.c  */
#line 1819 "Tp5.tab.c"
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
#line 288 "../src/Tp5.y"

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
