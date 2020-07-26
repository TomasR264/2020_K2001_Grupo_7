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
        char *identificador;
        int apariciones;
        struct nodo_identificador *siguiente;
    };
    typedef struct nodo_identificador nodo_identificador;


    struct nodo_literalCadena {
        char *literalCadena;
        int longitud;
        struct nodo_literalCadena *siguiente;
    };
    typedef struct nodo_literalCadena nodo_literalCadena;


    struct nodo_palabraReservada {
        char *palabraReservada;
        struct nodo_palabraReservada *siguiente;
    };
    typedef struct nodo_palabraReservada nodo_palabraReservada;


    struct nodo_constante {
        char *constante;
        char *tipo;
        int valor;
        bool caracter; 
        struct nodo_constante *siguiente;
    };/*bool en el nodo de caracter con el objetivo de que en ese caso "valor" pase a representar el orden de aparicion*/
    typedef struct nodo_constante nodo_constante;


    struct nodo_operador_caracter {
        char *operador_caracter;
        int apariciones;
        struct nodo_operador_caracter *siguiente;
    };
    typedef struct nodo_operador_caracter nodo_operador_caracter;


    struct nodo_comentario {
        char *comentario;
        bool unaLinea;
        struct nodo_comentario *siguiente;
    };
    typedef struct nodo_comentario nodo_comentario;


    struct nodo_noReconocido {
        char *noReconocido;
        int linea;
        struct nodo_noReconocido *siguiente;
    };
    typedef struct nodo_noReconocido nodo_noReconocido;


    /********************************* funciones listas *********************/


    /***inicializar ***/

    nodo_identificador * iniciar_identificador(nodo_identificador *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_literalCadena * iniciar_literalCadena(nodo_literalCadena *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_palabraReservada * iniciar_palabraReservada(nodo_palabraReservada *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_constante * iniciar_constante(nodo_constante *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_operador_caracter * iniciar_operador(nodo_operador_caracter *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_comentario * iniciar_comentario(nodo_comentario *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_noReconocido * iniciar_noReconocido(nodo_noReconocido *Lista){
        
        Lista = NULL;
        return Lista;
    }

    /*** insertar ***/
    
    nodo_identificador *insertar_identificador(nodo_identificador *Lista, char *identificador, int apariciones){

        nodo_identificador *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_identificador*) malloc(sizeof(nodo_identificador));

        nuevoNodo->identificador = identificador;
        nuevoNodo->apariciones = apariciones;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_literalCadena *insertar_literalCadena(nodo_literalCadena *Lista, char *literalCadena, int longitud){

        nodo_literalCadena *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_literalCadena*) malloc(sizeof(nodo_literalCadena));

        nuevoNodo->literalCadena = literalCadena;
        nuevoNodo->longitud = longitud;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_palabraReservada *insertar_palabraReservada(nodo_palabraReservada *Lista, char *palabraReservada){

        nodo_palabraReservada *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_palabraReservada*) malloc(sizeof(nodo_palabraReservada));

        nuevoNodo->palabraReservada = palabraReservada;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_constante *insertar_constante(nodo_constante *Lista, char *constante, char *tipo, int valor, bool caracter){

        nodo_constante *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_constante*) malloc(sizeof(nodo_constante));

        nuevoNodo->constante = constante;
        nuevoNodo->tipo = tipo;
        nuevoNodo->valor = valor;
        nuevoNodo->caracter = caracter;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_operador_caracter *insertar_operador_caracter(nodo_operador_caracter *Lista, char *operador_caracter int apariciones){

        nodo_operador_caracter *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_operador_caracter*) malloc(sizeof(nodo_operador_caracter));

        nuevoNodo->operador_caracter = operador_caracter;
        nuevoNodo->apariciones = apariciones;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_comentario *insertar_comentario(nodo_comentario *Lista, char *comentario bool unaLinea){

        nodo_comentario *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_comentario*) malloc(sizeof(nodo_comentario));

        nuevoNodo->comentario = comentario;
        nuevoNodo->unaLinea = unaLinea;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }

    nodo_noReconocido *insertar_comentario(nodo_noReconocido *Lista, char *noReconocido int linea){

        nodo_noReconocido *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_noReconocido*) malloc(sizeof(nodo_noReconocido));

        nuevoNodo->noReconocido = noReconocido;
        nuevoNodo->linea = linea;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }

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
    nodo_identificador *Lista = iniciar_identificador(Lista);

    
    Lista = insertar_identificador (Lista, "un string", 3);
    printf("lista: %p \n", Lista);

    printf("null: %p \n", NULL);

    if(Lista == NULL){
        printf("hola");
    }
    yylex();

    return 0;
}
