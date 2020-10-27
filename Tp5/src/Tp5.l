
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <conio.h>
    #include <stdbool.h>
    #include <string.h>
    #include <math.h>
    #include <malloc.h>
    #include "Tp5.tab.h"
    extern FILE* yyin;
    

%}

option noyywrap



OPERADOR_ASIGNACION (=|\*=|\/=|%=|\+=|-=|<<=|>>=|&=|\^=|\|=)
TIPODATO (char|double|float|int|long|short|signed|unsigned|void)

ENUM (enum)

IDENTIFICADOR [a-zA-Z_][a-zA-Z0-9_]*
ENTERA_DECIMAL [1-9][0-9]*

%%


{OPERADOR_ASIGNACION} {return OPERADOR_ASIGNACION;}

"\?" {return '?';}
"," {return ',';}
":" {return ':';}
"^" {return '^';}
"|" {return '|';}
"&" {return '&';}
"+" {return '+';}
"-" {return '-';}
"#" {return '#';}
"<" {return '<';}
">" {return '>';}
"*" {return '*';}
"/" {return '/';}
"%" {return '%';}
")" {return ')';}
"(" {return '(';}
"[" {return '[';}
"]" {return ']';}
"." {return '.';}
"||" {return OLOGICO;}
"&&" {return YLOGICO;}
"==" {return IGUAL;}
"!=" {return DESIGUAL;}
">=" {return MAYOIGUAL;}
"<=" {return MENOIGUAL;}
"<<" {return OUTPUT;}
">>" {return INPUT;}
"++" {return INCREMENTO;}
"--" {return DECREMENTO;}
"->" {return FLECHA;}

{TIPODATO} {return TIPODATO;}

"sizeof" {return SIZEOF;}

{IDENTIFICADOR} {return IDENTIFICADOR;}
{ENTERA_DECIMAL} {return ENTERA_DECIMAL;}

" " {printf("encontro un espacio \n");}

\n {return '\n';}




%%
