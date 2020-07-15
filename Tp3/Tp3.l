%option noyywrap

%{
    #include <stdio.h>

    #include <stdlib.h>
    #include <stdio.h>
    #include <conio.h>
    #include <stdbool.h>
    #include <string.h>

/************* definiciones de nodos ****************************/ 

    struct nodo_identificador {
        char* identificador;
        int apariciones;
    };
    typedef struct nodo_identificador nodo_identificador;


    struct nodo_literalCadena {
        char* literalCadena;
        int longitud;
    };
    typedef struct nodo_literalCadena nodo_literalCadena;


    struct nodo_palabraReservada {
        char* palabraReservada;
    };
    typedef struct nodo_palabraReservada nodo_palabraReservada;


    struct nodo_constrante {
        char* constrante;
        char* tipo;
        int valor;
        bool caracter; 
    };/*bool en el nodo de caracter con el objetivo de que en ese caso "valor" pase a representar el orden de aparicion*/
    typedef struct nodo_constrante nodo_constrante;


    struct nodo_operador_caracter {
        char* operador_caracter;
        int apariciones;
    };
    typedef struct nodo_operador_caracter nodo_operador_caracter;


    struct nodo_comentario {
        char* comentario;
        bool unaLinea;
    };
    typedef struct nodo_comentario nodo_comentario;


    struct nodo_noReconocido {
        char* noReconocido;
        int linea;
    };
    typedef struct nodo_noReconocido nodo_noReconocido;




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


OPERADORES operador

PUNTUADORES puntuador




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

return 0;
}
