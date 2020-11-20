
%{
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


%}

%union {
  char* identificador;
  double constante;
  char caracter;
  struct symrec *listaDeParametros;
  //listaDeclaracionesMultiples* listaDeclaraciones;
}


%type <constante> constante
%type <constante> inicial
%type <listaDeParametros> listaParametrosDeclaracion
%type <listaDeParametros> listaParametrosInvocacion

%token OLOGICO
%token YLOGICO
%token IGUAL
%token DESIGUAL
%token MAYOIGUAL
%token MENOIGUAL
%token OUTPUT
%token INPUT
%token INCREMENTO
%token DECREMENTO
%token FLECHA
%token SIZEOF
%token OPERADOR_ASIGNACION
%token <identificador> IDENTIFICADOR
%token <identificador> TIPODATO
%token <constante> CONSTANTE_REAL
%token <constante> CONSTANTE_ENTERA
%token <constante> CONSTANTE_CARACTER
%token IF
%token ELSE
%token RETURN
%token SWITCH
%token DEFAULT
%token GOTO
%token WHILE
%token DO
%token CASE
%token FOR
%token BREAK
%token CONTINUE
%token ERROR_LEXICO

%start         entrada

%%



entrada:  /* vacio */
          |entrada linea
;

linea:    expresion   ';'{printf("encontro una expresion y ta todo bn\n");}
        | declaracion  {printf("encontro una Declaracion y ta todo bn\n");}
        | sentencia   {printf("encontro una sentencia y ta todo bn\n");}
        | ERROR_LEXICO  '\n' {printf("encontro un error lexico bn\n");}
;

////////////////////////////////  EXPRESIONES //////////////////////////////////////


expresion:    expresionAsignacion                 
            | expresion ',' expresionAsignacion   
;

expresionAsignacion:    expresionCondicional
                      | expresionUnaria OPERADOR_ASIGNACION expresionAsignacion 
;

expresionCondicional:     expresionOLogico
                        | expresionOLogico '?' expresion ':' expresionCondicional
;

expresionOLogico:     expresionYLogico
                    | expresionYLogico OLOGICO expresionYLogico
;

expresionYLogico:     expresionOInclusivo
                    | expresionYLogico YLOGICO expresionOInclusivo
;

expresionOInclusivo:      expresionOExcluyente
                        | expresionOInclusivo '|' expresionOExcluyente
;

expresionOExcluyente:     expresionY
                        | expresionOExcluyente '^' expresionY
;

expresionY:     expresionIgualdad
              | expresionY '&' expresionIgualdad
;

expresionIgualdad:      expresionRelacional
                      | expresionIgualdad IGUAL expresionRelacional
                      | expresionIgualdad DESIGUAL expresionRelacional
;

expresionRelacional:      expresionCorrimiento
                        | expresionRelacional '<' expresionCorrimiento
                        | expresionRelacional '>' expresionCorrimiento
                        | expresionRelacional MENOIGUAL expresionCorrimiento
                        | expresionRelacional MAYOIGUAL expresionCorrimiento
;

expresionCorrimiento:     expresionAditiva
                        | expresionCorrimiento OUTPUT expresionAditiva
                        | expresionCorrimiento INPUT expresionAditiva
;

expresionAditiva:     expresionMultiplicativa
                    | expresionAditiva '+' expresionMultiplicativa
                    | expresionAditiva '-' expresionMultiplicativa
;

expresionMultiplicativa:      expresionConversion
                            | expresionMultiplicativa '*' expresionConversion
                            | expresionMultiplicativa '/' expresionConversion
                            | expresionMultiplicativa '%' expresionConversion
;

expresionConversion:      expresionUnaria
                        | '(' TIPODATO ')' expresionConversion /* poner el ( en flex */
;

expresionUnaria:      expresionSufijo
                    | INCREMENTO expresionUnaria
                    | DECREMENTO expresionUnaria
                    | operadorUnario expresionConversion
                    | SIZEOF expresionUnaria
                    | SIZEOF '(' TIPODATO ')' /* ver bien la definicion de tipodato despues*/
;

operadorUnario:     '&' | '*' | '+' | '-' | '~' | '!'
;

expresionSufijo:      expresionPrimaria
                    | expresionSufijo '[' expresion ']'
                    | expresionSufijo '(' listaArgumentos ')'
                    | expresionSufijo '(' ')'
                    | expresionSufijo '.' IDENTIFICADOR /* definir bien IDENTIFICADOR */
                    | expresionSufijo FLECHA IDENTIFICADOR
                    | expresionSufijo INCREMENTO
                    | expresionSufijo DECREMENTO
;

listaArgumentos:      expresionAsignacion
                    | listaArgumentos ',' expresionAsignacion
;

expresionPrimaria:      IDENTIFICADOR       /* definir bien todos estos */
                      | constante      
                      | '(' expresion ')'
                      
;


////////////////////////////////  DECLARACIONES //////////////////////////////////////

declaracion:      declaracionVarSimples 
                | declaracionFunciones
                | invocacionFunciones
;

declaracionVarSimples:        TIPODATO listaVarSimples ';'  {tiparDeclaraciones($<identificador>1);}
;


declaracionFunciones:     TIPODATO IDENTIFICADOR '(' listaParametrosDeclaracion ')' sentenciaCompuesta {aux=getsym($<identificador>2, &sym_tabla_parametros_aux); if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!", $<listaDeParametros>1 );} else {  aux=putsym(strdup($<identificador>2),TYP_AUXILIAR, &sym_table);};tiparDeclaraciones($<identificador>1); aux->value.lista_parametros = sym_tabla_parametros_aux; sym_tabla_parametros_aux = NULL;}
;

invocacionFunciones:     TIPODATO IDENTIFICADOR '(' listaParametrosInvocacion ')'
;

listaParametrosDeclaracion:      TIPODATO IDENTIFICADOR                   {aux=getsym($<identificador>1, &sym_tabla_parametros_aux); if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!");} else {  aux=putsym(strdup($<identificador>1),TYP_AUXILIAR, &sym_tabla_parametros_aux);}}   
                    | listaParametrosDeclaracion ',' TIPODATO IDENTIFICADOR  {aux=getsym($<identificador>3, &sym_tabla_parametros_aux); if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!");} else {  aux=putsym(strdup($<identificador>3),TYP_AUXILIAR, &sym_tabla_parametros_aux);}}
;

listaParametrosInvocacion:      IDENTIFICADOR
                    |  listaParametrosInvocacion ',' IDENTIFICADOR
; 

listaVarSimples:      unaVarSimple                      
                    | listaVarSimples ',' unaVarSimple
;

unaVarSimple:     IDENTIFICADOR           {aux=getsym($<identificador>1, &sym_table); if (aux) { agregarError(&arrayErrores, "Redeclaracion de variable", $<identificador>1);} else {  aux=putsym(strdup($<identificador>1),TYP_AUXILIAR, &sym_table);}}
                | IDENTIFICADOR inicial   { aux=getsym($<identificador>1, &sym_table); if (aux) { agregarError(&arrayErrores, "Redeclaracion de variable");} else {  aux=putsym(strdup($<identificador>1),TYP_AUXILIAR, &sym_table);(aux->value.real_doble)=$<constante>2 ;}}
;

inicial:      OPERADOR_ASIGNACION constante {$$ = $<constante>2;}  /* cambiar operador asignacion por igual solo y revisar donde mas cambiar*/
;

constante:      CONSTANTE_REAL        {$$ = $<constante>1;}
              | CONSTANTE_ENTERA      {$$ = $<constante>1; }
              | CONSTANTE_CARACTER    {$$ = $<constante>1;}
;

////////////////////////////////  SENTENCIAS //////////////////////////////////////

sentencia:      sentenciaCompuesta  
              | sentenciaExpresion  
              | sentenciaSeleccion  
              | sentenciaIteracion  
              | sentenciaSalto  
              | sentenciaEtiquetada 
;

sentenciaCompuesta:     '{' listaDeclaraciones listaSentencias '}'
                      | '{' listaSentencias listaDeclaraciones '}'
                      | '{' listaDeclaraciones '}'
                      | '{' listaSentencias '}'
                      | '{' '}'
;

listaDeclaraciones:     declaracion
                      | listaDeclaraciones declaracion
;

listaSentencias:      sentencia
                    | listaSentencias sentencia
;

sentenciaExpresion:     expresion ';'
;

sentenciaSeleccion:     IF '(' expresion ')' sentencia
                      | IF '(' expresion ')' sentencia ELSE sentencia
                      | SWITCH '(' expresion ')' sentencia
;

sentenciaIteracion:     WHILE '(' expresion ')' sentencia
                      | DO sentencia WHILE '(' expresion ')' ';'
                      | FOR '(' expresion ';' expresion ';' expresion ')' sentencia
                      | FOR '('  ';' expresion ';' expresion ')' sentencia
                      | FOR '(' expresion ';'  ';' expresion ')' sentencia
                      | FOR '('  ';'  ';' expresion ')' sentencia
                      | FOR '(' expresion ';' expresion ';'  ')' sentencia
                      | FOR '('  ';' expresion ';'  ')' sentencia
                      | FOR '(' expresion ';'  ';'  ')' sentencia
                      | FOR '('  ';'  ';'  ')' sentencia
;

sentenciaSalto:     CONTINUE ';'
                  | BREAK ';'
                  | RETURN expresion ';'
                  | RETURN ';'
                  | GOTO IDENTIFICADOR ';'
;

sentenciaEtiquetada:      CASE expresionCondicional ':' sentencia
                        | DEFAULT ':' sentencia
                        | IDENTIFICADOR ':' sentencia
;





%%
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