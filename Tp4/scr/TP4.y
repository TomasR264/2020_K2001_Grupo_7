%{
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int flag_error = 0,  flag_sentDeclaricion = 0, flag_SentCompuesta = 0, flag_sentIteracion = 0, flag_sentControl = 0 , flag_sentExpression = 0;
%}

%%


/////////////////////////////// EXPRESIONES Y OPERADORES ///////////////////////

expresion :   expUnaria operador expresion
            | expUnaria
            | error                            { printf ("Error al declarar la expresion\n"); }
;
operador :     '=' | '+' '=' | '-' '=' | '*' '=' | '/' '=' | '%' '=' | // Operadores de asignasion
            | '|' '|' | '&' '&' | '=' '=' | '!' '='                    // Operadores Logicos
            | '<' | '>' | '<' '=' | '>' '='                            // Operadores Relacionales
            | '+' | '-'                                                // Operadores Aditivos
            | '*' | '/' | '%'                                          // Operadores Miltiplicativos
;
expUnaria :    expPostfijo
            |  operUnario expUnaria
            |  incremento expUnaria
            |  expUnaria incremento
;
incremento :   '+' '+' | '-' '-' ;   // Operadores de incremento y Decremento
operUnario :   '&' | '*' | '!' ;     // Operadores Unarios

expPostFijo :   expPrimaria
              | expPostfijo '[' expresion ']'
              | expPostfijo '(' listaDeArgumentos ')'
;
listaDeArgumentos :  expresion
                    | listaDeArgumentos ',' expresion
                    | /* Vacio */
;
expPrimaria :    IDENTIFICADOR
              | NUM                           {printf("numero %d \n") ,$1)}
              | '(' expresion ')' 
              | CCARACTER                     {printf("const caracter %c \n") ,$1)}
              | LITERALESCADENA               {printf("caracter %c \n" ,$1)}
              | LITERALESCADENA               { /*printf("palabra %s \n" ,$1)}
;

/////////////////////////////// SENTENCIAS ///////////////////////

sentencia :   sentCompuesta                  /*(Aca irian los if's)*/       {printf("Se encontro una sentencia compuesta %d \n") ,$1)}
            | sentExpresion                                                 {printf("Se encontro una sentencia expresion %d \n") ,$1)}
            | sentSeleccion                                                 {printf("Se encontro una sentencia seleccion%d \n") ,$1)}
            | sentIteracion                                                 {printf("Se encontro una sentencia iteracion %d \n") ,$1)}
            | sentenciaDeclaracion                                          {printf("Se encontro una sentencia declaracion %d \n") ,$1)}
;

/////////////////////////////// SENTENCIAS COMPUESTAS ///////////////////////

 sentCompuesta : '{' listaSentencias '}'     { if(flag_SentCompuesta == 0) { printf("Se detecto una sentencia compuesta")}}
;
listaSentencias :  listaSentencias sentencia
                  | sentencia
                  | /* vacío*/
                  | error                   { printf("Error al definir una sentencia \n"); flag_SentCompuesta}                  
;

/////////////////////////////// SENTENCIAS COMPUESTAS ///////////////////////

 sentExpresion :  expresion ';'
                 | error ';'             { printf("Error al definir una sentencia de expresion\n"); flag_SentCompuesta }   







%%


main()
{

yyparse();

}
