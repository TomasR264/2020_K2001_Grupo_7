
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <conio.h>
    #include <stdbool.h>
    #include <string.h>
    #include <math.h>
    #include <malloc.h>
    #include "Tp4.tab.y"


%}




PALABRA_RESERVADA_TIPO_DATO (char|double|enum|float|int|long|short|signed|unsigned)
PALABRA_RESERVADA_CONTROL (break|case|continue|default|do|else|for|goto|if|return|struct|switch|void|while)
PALABRA_RESERVADA_OTRO (auto|const|extern|register|sizeof|static|typedef|union|volatile)



CADENA_CARACTERES [^"\\]
CARACTERES_COMENTARIO_MULTIPLES_LINEAS [^(*/)]
CARACTERES_UNA_LINEA [^\n]
CARACTERES_INCLUDE [^"\n]
IDENTIFICADOR [a-zA-Z_][a-zA-Z0-9_]*
ESPACIOS ([ ])+
ESPACIOS_OPCIONALES ([ ])*




ENTERA_DECIMAL [1-9][0-9]*
ENTERA_OCTAL 0[0-7]*
ENTERA_HEXA 0[xX][0-9a-fA-F]+
SUFIJO_ENTERO ([Uu][Ll]?|[Ll][Uu]?)



CONSTANTE_REAL ({CONSTANTE_FRACCION}{PARTE_EXPONENTE}?{SUFIJO_REAL}?|{SECUENCIA_DIGITOS}{PARTE_EXPONENTE}{SUFIJO_REAL}?)
CONSTANTE_FRACCION ({SECUENCIA_DIGITOS}?\.{SECUENCIA_DIGITOS}|{SECUENCIA_DIGITOS}\.)
SECUENCIA_DIGITOS [0-9]+
PARTE_EXPONENTE [Ee][+-]?{SECUENCIA_DIGITOS}
SUFIJO_REAL [FfLl]



CARACTER ([^'\\]|{SECUENCIA_ESCAPE})
SECUENCIA_ESCAPE ({ESCAPE_SIMPLE}|{ESCAPE_OCTAL}|{ESCAPE_HEXA})
ESCAPE_SIMPLE (\\'|\\\"|\\\?|\\\\|\\a|\\b|\\f|\\n|\\r|\\t|\\v)
ESCAPE_OCTAL \\[0-7]{1,3}
ESCAPE_HEXA \\x[0-9a-fA-F]{1,2}

CARACTER_PUNTUACION (\[|\]|\(|\)|\{|\}|\.|->|\+\+|--|&|\*|\+|-|!|\/|%|<<|>>|<|>|<=|>=|==|!=|\ˆ|\||&&|\|\||=|\*=|\/=|%=|\+=|-=|<<=|>>=|&=|\ˆ=|\|=|\?|:|;|\.\.\.|,|#|##)




%%


'{CARACTER}'/.* {strcpy(yylval.caracter,yytext); return CCARACTER;}

{CONSTANTE_REAL}/.* {}

{PALABRA_RESERVADA_TIPO_DATO}/.* {strcpy(yylval.cadena,yytext); return TIPODATO;}
{PALABRA_RESERVADA_CONTROL}/.* {}
{PALABRA_RESERVADA_OTRO}/.* {}

{IDENTIFICADOR}/.* {strcpy(yylval.cadena,yytext); return IDENTIFICADOR;}

{ENTERA_DECIMAL}{SUFIJO_ENTERO}?/.* {yylval.entero=atoi(yytext); return NUM; }
{ENTERA_OCTAL}{SUFIJO_ENTERO}?/.* {}
{ENTERA_HEXA}{SUFIJO_ENTERO}?/.* {}

\"({CADENA_CARACTERES}|{SECUENCIA_ESCAPE})+\"/.* {strcpy(yylval.cadena,yytext); return LITERALESCADENA;}

(\[|\]|\(|\)|\{|\}|\.|->|\+\+|--|&|\*|\+|-|!|\/|%|<<|>>|<|>|<=|>=|==|!=|\ˆ|\||&&|\|\||=|\*=|\/=|%=|\+=|-=|<<=|>>=|&=|\ˆ=|\|=|\?|:|;|\.\.\.|,|#|##) {return yytext}

\/\/{CARACTERES_UNA_LINEA}*/.* {}
\/\*{CARACTERES_COMENTARIO_MULTIPLES_LINEAS}*\*\//.* {}


#include{ESPACIOS}(\"|<){CARACTERES_INCLUDE}*(\"|>)/.* {}

#define{ESPACIOS}{IDENTIFICADOR}\({ESPACIOS_OPCIONALES}{IDENTIFICADOR}{ESPACIOS_OPCIONALES}(,{ESPACIOS_OPCIONALES}{IDENTIFICADOR}{ESPACIOS_OPCIONALES}*\)){ESPACIOS_OPCIONALES}[^\n ](\n)?.*/.* {}

#define{ESPACIOS}{IDENTIFICADOR}{ESPACIOS}.+/.* {}

\n {}


[^\n \[\]\(\)\{\}\.(\->)(\+\+)(\-\-)&\*\+\-!\/%(<<)(>>)<>(<=)(>=)(==)(!=)\ˆ\|(&&)(\|\|)=(\*=)(\/=)(%=)(\+=)(\-=)(<<=)(>>=)(&=)(\ˆ=)(\|=)\?:;(\.\.\.),#(##)]+/(\[|\]|\(|\)|\{|\}|\.|->|\+\+|--|&|\*|\+|-|!|\/|%|<<|>>|<|>|<=|>=|==|!=|\ˆ|\||&&|\|\||=|\*=|\/=|%=|\+=|-=|<<=|>>=|&=|\ˆ=|\|=|\?|:|;|\.\.\.|,|#|##) {}


%%
