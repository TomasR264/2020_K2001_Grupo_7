
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

CONSTANTE_REAL ({CONSTANTE_FRACCION}{PARTE_EXPONENTE}?{SUFIJO_REAL}?|{SECUENCIA_DIGITOS}{PARTE_EXPONENTE}{SUFIJO_REAL}?)
CONSTANTE_FRACCION ({SECUENCIA_DIGITOS}?\.{SECUENCIA_DIGITOS}|{SECUENCIA_DIGITOS}\.)
SECUENCIA_DIGITOS [0-9]+
PARTE_EXPONENTE [Ee][+-]?{SECUENCIA_DIGITOS}
SUFIJO_REAL [FfLl]






IDENTIFICADOR [a-zA-Z_][a-zA-Z0-9_]*
ENTERA_DECIMAL [1-9][0-9]*
ENTERA_OCTAL 0[0-7]*
ENTERA_HEXA 0[xX][0-9a-fA-F]+
SUFIJO_ENTERO ([Uu][Ll]?|[Ll][Uu]?)

CARACTER ([^'\\]|{SECUENCIA_ESCAPE})
SECUENCIA_ESCAPE ({ESCAPE_SIMPLE}|{ESCAPE_OCTAL}|{ESCAPE_HEXA})
ESCAPE_SIMPLE (\\'|\\\"|\\\?|\\\\|\\a|\\b|\\f|\\n|\\r|\\t|\\v)
ESCAPE_OCTAL \\[0-7]{1,3}
ESCAPE_HEXA \\x[0-9a-fA-F]{1,2}


%%

'{CARACTER}' {yylval.constante = yytext[1]; return CONSTANTE_CARACTER;}

{TIPODATO} {yylval.identificador=strdup(yytext);return TIPODATO;}

"sizeof" {return SIZEOF;}
"if" {return IF;}
"else" {return ELSE;}
"switch" {return SWITCH;}
"return" {return RETURN;}
"default" {return DEFAULT;}
"goto" {return GOTO;}
"while" {return WHILE;}
"do" {return DO;}
"case" {return CASE;}
"for" {return FOR;}
"break" {return BREAK;}
"continue" {return CONTINUE;}


{OPERADOR_ASIGNACION} {return OPERADOR_ASIGNACION;}


{CONSTANTE_REAL} {yylval.constante = atof(yytext); return CONSTANTE_REAL;}
{ENTERA_DECIMAL}{SUFIJO_ENTERO}? {yylval.constante = atof(yytext); return CONSTANTE_ENTERA;}
{ENTERA_OCTAL}{SUFIJO_ENTERO}? {yylval.constante = atof(yytext); return CONSTANTE_ENTERA;}
{ENTERA_HEXA}{SUFIJO_ENTERO}? {yylval.constante = atof(yytext); return CONSTANTE_ENTERA;}

{IDENTIFICADOR} {yylval.identificador=strdup(yytext);return IDENTIFICADOR;}





"\?" {return '?';}
"," {return ',';}
":" {return ':';}
";" {return ';';}
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
"{" {return '{';}
"}" {return '}';}
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



" " 

"\n" {}

[^\n ;\(\)\{\}]+/(\n|;) {printf("Se encontro un error lexico, con la cadena no reconocida:   \"%s\"  \n\n\n\n", yytext);}

%%