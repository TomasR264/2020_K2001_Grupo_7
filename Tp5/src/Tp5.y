
%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>

extern FILE* yyin;

int yylex();

int yyerror (char*);
int yywrap(){
return(1);
}



%}

%union {


}

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
%token IDENTIFICADOR
%token TIPODATO
%token CONSTANTE_REAL
%token CONSTANTE_ENTERA
%token CONSTANTE_CARACTER
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

%start         entrada

%%



entrada:  /* vacio */
          |entrada linea
;

linea:  
        | expresion   {printf("encontro una expresion y ta todo bn\n");}
        | declaracion  {printf("encontro una Declaracion y ta todo bn\n");}
        | sentencia   {printf("encontro una sentencia y ta todo bn\n");}
        /*| definicionesExternas        
        | sentenciasPreprocesador     */
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
                      | constante      /* esto seria una constante */
                      | '(' expresion ')'
                      
;


////////////////////////////////  DECLARACIONES //////////////////////////////////////

declaracion:      declaracionVarSimples
                | declaracionFunciones
;

declaracionVarSimples:        TIPODATO listaVarSimples ';'
;

declaracionFunciones:     TIPODATO IDENTIFICADOR '(' listaParametros ')' sentenciaCompuesta
;

listaParametros:      /*vacio*/
                    | listaParametros
;

listaParametros:      IDENTIFICADOR
                    | listaParametros ',' IDENTIFICADOR
;

listaVarSimples:      unaVarSimple
                    | listaVarSimples ',' unaVarSimple
;

unaVarSimple:     IDENTIFICADOR
                | IDENTIFICADOR inicial
;

inicial:      OPERADOR_ASIGNACION constante
;

constante:      CONSTANTE_REAL
              | CONSTANTE_ENTERA
              | constanteEnumeracion
              | CONSTANTE_CARACTER
;

constanteEnumeracion:     IDENTIFICADOR
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

    printf("fin del programa %d", flag);

    fclose(yyin);

    
    return flag;
}