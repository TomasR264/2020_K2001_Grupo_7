
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* "%code requires" blocks.  */

/* Line 1676 of yacc.c  */
#line 1 "../src/Tp5.y"

  #include "Tp5-struct.h"



/* Line 1676 of yacc.c  */
#line 46 "Tp5.tab.h"

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

/* Line 1676 of yacc.c  */
#line 28 "../src/Tp5.y"

  char* identificador;
  double constante;
  char caracter;
  int entero;
  float real;
  struct symrec *listaDeParametros;



/* Line 1676 of yacc.c  */
#line 107 "Tp5.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


