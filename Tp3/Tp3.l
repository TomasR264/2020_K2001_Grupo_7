%option noyywrap

%{
    #include <stdio.h>


%}


PALABRA_RESERVADA_TIPO_DATO (char|double|enum|float|int|long|short|signed|unsigned)
PALABRA_RESERVADA_CONTROL (break|case|continue|default|do|else|for|goto|if|return|struct|switch|void|while)
PALABRA_RESERVADA_OTRO (auto|const|extern|register|sizeof|static|typedef|union|volatile)




CADENA_CARACTERES [^"\\]



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


OPERADORES

PUNTUADORES




%%


'{CARACTER}' {printf("constante caracter %s \n", yytext);}

{CONSTANTE_REAL} {printf("constante real \n");}

{PALABRA_RESERVADA_TIPO_DATO} {printf("palabra reservada dato \n");}
{PALABRA_RESERVADA_CONTROL} {printf("palabra reservada control \n");}
{PALABRA_RESERVADA_OTRO} {printf("palabra reservada otro \n");}

[a-zA-Z_][a-zA-Z0-9_]* {printf("identificador \n");}

{ENTERA_DECIMAL}{SUFIJO_ENTERO}? {printf("constante entera decimal \n");}
{ENTERA_OCTAL}{SUFIJO_ENTERO}? {printf("constante entera octal \n");}
{ENTERA_HEXA}{SUFIJO_ENTERO}? {printf("constante entera hexa \n");}

\"({CADENA_CARACTERES}|{SECUENCIA_ESCAPE})+\" {printf("literal cadena \n");}



. {printf("No reconocido: %s \n", yytext);}


%%


int main (){
yylex();
/*
["auto""break""case""char""const""continue""default""do""double""else""enum""extern""float""for""goto""if""int""long""register""return""short""signed""sizeof""static""struct""switch""typedef""union""unsigned""void""volatile""while"]
*/
return 0;
}
