
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

extern FILE* yyin;

int yylex();

int yyerror (char*);
int yywrap(){
return(1);
}





/* Line 189 of yacc.c  */
#line 92 "Tp5.tab.c"

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
#line 20 "../src/Tp5.y"






/* Line 214 of yacc.c  */
#line 167 "Tp5.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 179 "Tp5.tab.c"

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
#define YYLAST   797

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNRULES -- Number of states.  */
#define YYNSTATES  225

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,    46,    39,     2,
      47,    48,    44,    42,    34,    43,    53,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    54,
      40,     2,    41,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,    37,    56,    49,     2,     2,     2,
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
       0,     0,     3,     4,     7,     9,    12,    15,    18,    20,
      24,    26,    30,    32,    38,    40,    44,    46,    50,    52,
      56,    58,    62,    64,    68,    70,    74,    78,    80,    84,
      88,    92,    96,    98,   102,   106,   108,   112,   116,   118,
     122,   126,   130,   132,   137,   139,   142,   145,   148,   151,
     156,   158,   160,   162,   164,   166,   168,   170,   175,   180,
     184,   188,   192,   195,   198,   200,   204,   206,   208,   212,
     216,   218,   222,   224,   227,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   257,   261,   265,
     268,   270,   273,   275,   278,   281,   287,   295,   301,   307,
     315,   325,   334,   343,   351,   360,   368,   376,   383,   386,
     389,   393,   396,   400,   405,   409
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    -1,    58,    59,    -1,    33,    -1,    60,
      33,    -1,    79,    33,    -1,    85,    33,    -1,    61,    -1,
      60,    34,    61,    -1,    62,    -1,    74,    15,    61,    -1,
      63,    -1,    63,    35,    60,    36,    62,    -1,    64,    -1,
      64,     3,    64,    -1,    65,    -1,    64,     4,    65,    -1,
      66,    -1,    65,    37,    66,    -1,    67,    -1,    66,    38,
      67,    -1,    68,    -1,    67,    39,    68,    -1,    69,    -1,
      68,     5,    69,    -1,    68,     6,    69,    -1,    70,    -1,
      69,    40,    70,    -1,    69,    41,    70,    -1,    69,     8,
      70,    -1,    69,     7,    70,    -1,    71,    -1,    70,     9,
      71,    -1,    70,    10,    71,    -1,    72,    -1,    71,    42,
      72,    -1,    71,    43,    72,    -1,    73,    -1,    72,    44,
      73,    -1,    72,    45,    73,    -1,    72,    46,    73,    -1,
      74,    -1,    47,    17,    48,    73,    -1,    76,    -1,    11,
      74,    -1,    12,    74,    -1,    75,    73,    -1,    14,    74,
      -1,    14,    47,    17,    48,    -1,    39,    -1,    44,    -1,
      42,    -1,    43,    -1,    49,    -1,    50,    -1,    78,    -1,
      76,    51,    60,    52,    -1,    76,    47,    77,    48,    -1,
      76,    47,    48,    -1,    76,    53,    16,    -1,    76,    13,
      16,    -1,    76,    11,    -1,    76,    12,    -1,    61,    -1,
      77,    34,    61,    -1,    16,    -1,    83,    -1,    47,    60,
      48,    -1,    17,    80,    54,    -1,    81,    -1,    80,    34,
      81,    -1,    16,    -1,    16,    82,    -1,    15,    83,    -1,
      18,    -1,    19,    -1,    84,    -1,    20,    -1,    16,    -1,
      86,    -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,
      93,    -1,    55,    87,    88,    56,    -1,    55,    87,    56,
      -1,    55,    88,    56,    -1,    55,    56,    -1,    79,    -1,
      87,    79,    -1,    85,    -1,    88,    85,    -1,    60,    54,
      -1,    21,    47,    60,    48,    85,    -1,    21,    47,    60,
      48,    85,    22,    85,    -1,    24,    47,    60,    48,    85,
      -1,    27,    47,    60,    48,    85,    -1,    28,    85,    27,
      47,    60,    48,    54,    -1,    30,    47,    60,    54,    60,
      54,    60,    48,    85,    -1,    30,    47,    54,    60,    54,
      60,    48,    85,    -1,    30,    47,    60,    54,    54,    60,
      48,    85,    -1,    30,    47,    54,    54,    60,    48,    85,
      -1,    30,    47,    60,    54,    60,    54,    48,    85,    -1,
      30,    47,    54,    60,    54,    48,    85,    -1,    30,    47,
      60,    54,    54,    48,    85,    -1,    30,    47,    54,    54,
      48,    85,    -1,    32,    54,    -1,    31,    54,    -1,    23,
      60,    54,    -1,    23,    54,    -1,    26,    16,    54,    -1,
      29,    62,    36,    85,    -1,    25,    36,    85,    -1,    16,
      36,    85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    66,    69,    70,    71,    72,    80,    81,
      84,    85,    88,    89,    92,    93,    96,    97,   100,   101,
     104,   105,   108,   109,   112,   113,   114,   117,   118,   119,
     120,   121,   124,   125,   126,   129,   130,   131,   134,   135,
     136,   137,   140,   141,   144,   145,   146,   147,   148,   149,
     152,   152,   152,   152,   152,   152,   155,   156,   157,   158,
     159,   160,   161,   162,   165,   166,   169,   170,   171,   178,
     181,   182,   185,   186,   189,   192,   193,   194,   195,   198,
     203,   204,   205,   206,   207,   208,   211,   212,   213,   214,
     217,   218,   221,   222,   225,   228,   229,   230,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   245,   246,
     247,   248,   249,   252,   253,   254
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
  "CASE", "FOR", "BREAK", "CONTINUE", "'\\n'", "','", "'?'", "':'", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('",
  "')'", "'~'", "'!'", "'['", "']'", "'.'", "';'", "'{'", "'}'", "$accept",
  "entrada", "linea", "expresion", "expresionAsignacion",
  "expresionCondicional", "expresionOLogico", "expresionYLogico",
  "expresionOInclusivo", "expresionOExcluyente", "expresionY",
  "expresionIgualdad", "expresionRelacional", "expresionCorrimiento",
  "expresionAditiva", "expresionMultiplicativa", "expresionConversion",
  "expresionUnaria", "operadorUnario", "expresionSufijo",
  "listaArgumentos", "expresionPrimaria", "declaracion", "listaVarSimples",
  "unaVarSimple", "inicial", "constante", "constanteEnumeracion",
  "sentencia", "sentenciaCompuesta", "listaDeclaraciones",
  "listaSentencias", "sentenciaExpresion", "sentenciaSeleccion",
  "sentenciaIteracion", "sentenciaSalto", "sentenciaEtiquetada", 0
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
     285,   286,   287,    10,    44,    63,    58,   124,    94,    38,
      60,    62,    43,    45,    42,    47,    37,    40,    41,   126,
      33,    91,    93,    46,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    69,    69,    69,
      69,    69,    70,    70,    70,    71,    71,    71,    72,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    78,    78,    78,    79,
      80,    80,    81,    81,    82,    83,    83,    83,    83,    84,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    93,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     3,     2,     2,     1,     3,     1,     1,     3,     3,
       1,     3,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     2,
       1,     2,     1,     2,     2,     5,     7,     5,     5,     7,
       9,     8,     8,     7,     8,     7,     7,     6,     2,     2,
       3,     2,     3,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    66,     0,    75,    76,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,    50,    52,    53,    51,     0,    54,    55,
       0,     3,     0,     8,    10,    12,    14,    16,    18,    20,
      22,    24,    27,    32,    35,    38,    42,     0,    44,    56,
       0,    67,    77,     0,    80,    81,    82,    83,    84,    85,
      66,     0,    45,    46,     0,    48,     0,    72,     0,    70,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,   109,   108,     0,     0,    89,    90,    92,     0,
       0,     5,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    62,    63,     0,     0,     0,
       0,     6,     7,     0,   115,     0,    73,     0,    69,     0,
     110,     0,   114,   112,     0,     0,     0,     0,     0,     0,
      68,    87,    91,     0,    88,    93,     9,     0,    15,    17,
      19,    21,    23,    25,    26,    31,    30,    28,    29,    33,
      34,    36,    37,    39,    40,    41,    11,    61,    59,    64,
       0,     0,    60,    49,    79,    74,    71,     0,     0,     0,
       0,   113,     0,     0,     0,    43,    86,     0,     0,    58,
      57,    95,    97,    98,     0,     0,     0,     0,     0,     0,
      13,    65,     0,     0,   107,     0,     0,     0,     0,     0,
       0,    96,    99,   103,   105,     0,   106,     0,     0,     0,
     101,   102,   104,     0,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    31,    77,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
     170,    49,    50,    68,    69,   126,    51,    52,    88,    54,
      89,    90,    55,    56,    57,    58,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -91
static const yytype_int16 yypact[] =
{
     -91,   209,   -91,   695,   695,   735,    -5,    21,   -91,   -91,
     -91,    17,    38,    20,     6,    70,    84,   433,   747,    87,
      30,    82,   -91,   -91,   -91,   -91,   -91,   527,   -91,   -91,
     249,   -91,   -16,   -91,   -91,   103,    37,   110,   102,   115,
     123,     3,    81,    52,   127,   -91,   153,   747,     8,   -91,
     136,   -91,   -91,   146,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   747,   -91,   -91,   539,   -91,   433,   165,   -30,   -91,
     747,   -91,   -28,   747,   433,   129,   747,   -21,   154,   149,
     -91,   106,   -91,   -91,   139,    -2,   -91,   -91,   -91,   295,
     341,   -91,   747,   -91,   747,   747,   747,   747,   747,   747,
     747,   747,   747,   747,   747,   747,   747,   747,   747,   747,
     747,   747,   747,   747,   -91,   -91,   -91,   172,   579,   747,
     173,   -91,   -91,   142,   -91,   143,   -91,    21,   -91,     5,
     -91,    26,   -91,   -91,    28,   145,   433,   473,   -19,   747,
     -91,   -91,   -91,   387,   -91,   -91,   -91,     0,   189,   110,
     102,   115,   123,     3,     3,    81,    81,    81,    81,    52,
      52,   127,   127,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
      45,    -4,   -91,   -91,   -91,   -91,   -91,   433,   433,   433,
     747,   -91,   591,    -9,   486,   -91,   -91,   747,   747,   -91,
     -91,   174,   -91,   -91,    85,   433,    89,   631,   643,    -7,
     -91,   -91,   433,   141,   -91,   433,   433,    93,   433,    96,
     683,   -91,   -91,   -91,   -91,   433,   -91,   433,   433,    98,
     -91,   -91,   -91,   433,   -91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,     2,   -90,   -17,   -91,   107,   101,   109,
     100,   104,    51,    62,    68,    49,   -42,     4,   -91,   -91,
     -91,   -91,   -18,   -91,    83,   -91,    86,   -91,    -1,   -91,
     -91,   119,   -91,   -91,   -91,   -91,   -91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      53,    79,   146,    32,   127,   114,    92,    62,    63,    65,
     102,   103,    87,    92,    72,    92,    78,    91,    92,   115,
     116,   117,    80,   166,   128,    92,   130,    92,   169,    85,
      92,    66,    92,    93,    92,   184,   187,    67,    93,    92,
      95,    96,    74,   104,   105,   197,   140,   210,   190,     3,
       4,    80,     5,   177,    60,   118,     8,     9,    10,   119,
      92,   120,    92,    85,    70,   124,    85,    73,   163,   164,
     165,   142,   129,   132,   178,   131,   179,    23,   134,   188,
      24,    25,    26,   138,    82,    27,    75,    28,    29,   145,
     106,   107,    71,   189,   108,   109,   147,   185,   201,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,     3,     4,    92,
       5,   171,    60,    92,     8,     9,    10,    92,   100,   101,
      92,    76,    92,   203,    81,   181,    83,   205,    94,   183,
      98,   215,   145,    80,   217,    23,   223,    97,    24,    25,
      26,   153,   154,    27,    99,    28,    29,   161,   162,   174,
     137,     8,     9,    10,   155,   156,   157,   158,   113,   121,
     200,   110,   111,   112,   159,   160,   191,   192,   193,   122,
     125,   135,   194,   133,   196,   136,   199,   139,   167,   172,
     173,    80,   180,    96,   204,   212,   202,   149,   151,   207,
     209,   211,   148,   152,   213,   214,   150,   216,   143,     2,
     176,   175,   219,     0,   220,     0,   221,   222,     0,     0,
       3,     4,   224,     5,     0,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,    23,     0,
       0,    24,    25,    26,     0,     0,    27,     0,    28,    29,
       3,     4,     0,     5,    30,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,    23,     0,
       0,    24,    25,    26,     0,     0,    27,     0,    28,    29,
       0,     0,     0,     0,    30,    86,     3,     4,     0,     5,
       0,     6,     7,     8,     9,    10,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,    23,     0,     0,    24,    25,    26,
       0,     0,    27,     0,    28,    29,     0,     0,     0,     0,
      30,   141,     3,     4,     0,     5,     0,     6,     0,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
      23,     0,     0,    24,    25,    26,     0,     0,    27,     0,
      28,    29,     0,     0,     0,     0,    30,   144,     3,     4,
       0,     5,     0,     6,     0,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,    23,     0,     0,    24,
      25,    26,     0,     0,    27,     0,    28,    29,     0,     0,
       0,     0,    30,   186,     3,     4,     0,     5,     0,     6,
       0,     8,     9,    10,    11,     0,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,    23,     0,     0,    24,    25,    26,     0,     0,
      27,     0,    28,    29,     3,     4,     0,     5,    30,    60,
       0,     8,     9,    10,     0,     0,     0,     3,     4,     0,
       5,     0,    60,     0,     8,     9,    10,     0,     0,     0,
       0,     0,    23,     0,     0,    24,    25,    26,     0,     0,
      27,     0,    28,    29,     0,    23,     0,   182,    24,    25,
      26,     0,     0,    27,     0,    28,    29,     0,     3,     4,
     198,     5,     0,    60,    84,     8,     9,    10,     0,     0,
       3,     4,     0,     5,     0,    60,   123,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    23,     0,     0,    24,
      25,    26,     0,     0,    27,     0,    28,    29,    23,     0,
       0,    24,    25,    26,     0,     0,    27,     0,    28,    29,
       3,     4,     0,     5,     0,    60,     0,     8,     9,    10,
       0,     0,     3,     4,     0,     5,     0,    60,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    23,     0,
       0,    24,    25,    26,     0,     0,    27,   168,    28,    29,
      23,     0,     0,    24,    25,    26,     0,     0,    27,   195,
      28,    29,     3,     4,     0,     5,     0,    60,     0,     8,
       9,    10,     0,     0,     3,     4,     0,     5,     0,    60,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      23,     0,     0,    24,    25,    26,     0,     0,    27,   206,
      28,    29,    23,     0,     0,    24,    25,    26,     0,     0,
      27,   208,    28,    29,     3,     4,     0,     5,     0,    60,
       0,     8,     9,    10,     0,     0,     3,     4,     0,     5,
       0,    60,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,    23,     0,     0,    24,    25,    26,     0,     0,
      27,   218,    28,    29,    23,     0,     0,    24,    25,    26,
       0,     0,    61,     0,    28,    29,     3,     4,     0,     5,
       0,    60,     0,     8,     9,    10,     0,     0,     3,     4,
       0,     5,     0,    60,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,    23,     0,     0,    24,    25,    26,
       0,     0,    64,     0,    28,    29,    23,     0,     0,    24,
      25,    26,     0,     0,    27,     0,    28,    29
};

static const yytype_int16 yycheck[] =
{
       1,    18,    92,     1,    34,    47,    34,     3,     4,     5,
       7,     8,    30,    34,    12,    34,    17,    33,    34,    11,
      12,    13,    18,   113,    54,    34,    54,    34,   118,    27,
      34,    36,    34,    54,    34,    54,    36,    16,    54,    34,
       3,     4,    36,    40,    41,    54,    48,    54,    52,    11,
      12,    47,    14,    48,    16,    47,    18,    19,    20,    51,
      34,    53,    34,    61,    47,    66,    64,    47,   110,   111,
     112,    89,    70,    74,    48,    73,    48,    39,    76,    34,
      42,    43,    44,    81,    54,    47,    16,    49,    50,    90,
       9,    10,    54,    48,    42,    43,    94,   139,   188,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    11,    12,    34,
      14,   119,    16,    34,    18,    19,    20,    34,     5,     6,
      34,    47,    34,    48,    47,   136,    54,    48,    35,   137,
      38,    48,   143,   139,    48,    39,    48,    37,    42,    43,
      44,   100,   101,    47,    39,    49,    50,   108,   109,    16,
      54,    18,    19,    20,   102,   103,   104,   105,    15,    33,
     187,    44,    45,    46,   106,   107,   177,   178,   179,    33,
      15,    27,   180,    54,   182,    36,   184,    48,    16,    16,
      48,   187,    47,     4,   195,    54,    22,    96,    98,   197,
     198,   202,    95,    99,   205,   206,    97,   208,    89,     0,
     127,   125,   210,    -1,   215,    -1,   217,   218,    -1,    -1,
      11,    12,   223,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    -1,    -1,    47,    -1,    49,    50,
      11,    12,    -1,    14,    55,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    -1,    -1,    47,    -1,    49,    50,
      -1,    -1,    -1,    -1,    55,    56,    11,    12,    -1,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    -1,    47,    -1,    49,    50,    -1,    -1,    -1,    -1,
      55,    56,    11,    12,    -1,    14,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    -1,    47,    -1,
      49,    50,    -1,    -1,    -1,    -1,    55,    56,    11,    12,
      -1,    14,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    -1,    47,    -1,    49,    50,    -1,    -1,
      -1,    -1,    55,    56,    11,    12,    -1,    14,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
      47,    -1,    49,    50,    11,    12,    -1,    14,    55,    16,
      -1,    18,    19,    20,    -1,    -1,    -1,    11,    12,    -1,
      14,    -1,    16,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
      47,    -1,    49,    50,    -1,    39,    -1,    54,    42,    43,
      44,    -1,    -1,    47,    -1,    49,    50,    -1,    11,    12,
      54,    14,    -1,    16,    17,    18,    19,    20,    -1,    -1,
      11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    -1,    47,    -1,    49,    50,    39,    -1,
      -1,    42,    43,    44,    -1,    -1,    47,    -1,    49,    50,
      11,    12,    -1,    14,    -1,    16,    -1,    18,    19,    20,
      -1,    -1,    11,    12,    -1,    14,    -1,    16,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    -1,    -1,    47,    48,    49,    50,
      39,    -1,    -1,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    11,    12,    -1,    14,    -1,    16,    -1,    18,
      19,    20,    -1,    -1,    11,    12,    -1,    14,    -1,    16,
      -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
      47,    48,    49,    50,    11,    12,    -1,    14,    -1,    16,
      -1,    18,    19,    20,    -1,    -1,    11,    12,    -1,    14,
      -1,    16,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
      47,    48,    49,    50,    39,    -1,    -1,    42,    43,    44,
      -1,    -1,    47,    -1,    49,    50,    11,    12,    -1,    14,
      -1,    16,    -1,    18,    19,    20,    -1,    -1,    11,    12,
      -1,    14,    -1,    16,    -1,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    -1,    47,    -1,    49,    50,    39,    -1,    -1,    42,
      43,    44,    -1,    -1,    47,    -1,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,     0,    11,    12,    14,    16,    17,    18,    19,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    39,    42,    43,    44,    47,    49,    50,
      55,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    78,
      79,    83,    84,    85,    86,    89,    90,    91,    92,    93,
      16,    47,    74,    74,    47,    74,    36,    16,    80,    81,
      47,    54,    60,    47,    36,    16,    47,    60,    85,    62,
      74,    47,    54,    54,    17,    60,    56,    79,    85,    87,
      88,    33,    34,    54,    35,     3,     4,    37,    38,    39,
       5,     6,     7,     8,    40,    41,     9,    10,    42,    43,
      44,    45,    46,    15,    73,    11,    12,    13,    47,    51,
      53,    33,    33,    17,    85,    15,    82,    34,    54,    60,
      54,    60,    85,    54,    60,    27,    36,    54,    60,    48,
      48,    56,    79,    88,    56,    85,    61,    60,    64,    65,
      66,    67,    68,    69,    69,    70,    70,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    61,    16,    48,    61,
      77,    60,    16,    48,    16,    83,    81,    48,    48,    48,
      47,    85,    54,    60,    54,    73,    56,    36,    34,    48,
      52,    85,    85,    85,    60,    48,    60,    54,    54,    60,
      62,    61,    22,    48,    85,    48,    48,    60,    48,    60,
      54,    85,    54,    85,    85,    48,    85,    48,    48,    60,
      85,    85,    85,    48,    85
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
#line 70 "../src/Tp5.y"
    {printf("encontro una expresion y ta todo bn\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 71 "../src/Tp5.y"
    {printf("encontro una Declaracion y ta todo bn\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 1710 "Tp5.tab.c"
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
#line 261 "../src/Tp5.y"

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

    printf("fin del programa %d", flag);

    fclose(yyin);

    
    return flag;
}
