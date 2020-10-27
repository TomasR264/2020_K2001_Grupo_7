
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
%token ENTERA_DECIMAL
%token IDENTIFICADOR
%token TIPODATO
%token ESPECIFICADOR_CLASE_ALMACENAMIENTO
%token CALIFICADOR_TIPO
%token STRUCT_UNION
%token ENUM

%start         entrada

%%



entrada:  /* vacio */
          |entrada linea
;

linea:  '\n'
        | expresion '\n'  {printf("encontro una expresion y ta todo bn\n");}
        /*| declaracion '\n'
        | sentencia '\n'
        | definicionesExternas '\n'       
        | sentenciasPreprocesador '\n'    */
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
                      | ENTERA_DECIMAL      /* esto seria una constante */
                      | '(' expresion ')'
                      
;


////////////////////////////////  DECLARACIONES //////////////////////////////////////








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