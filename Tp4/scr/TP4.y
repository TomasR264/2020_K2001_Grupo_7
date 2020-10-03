%{
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int flag_error = 0,  flag_sentDeclaricion = 0, flag_SentCompuesta = 0, flag_sentIteracion = 0, flag_sentControl = 0 , flag_sentExpresion = 0;
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

sentencia :   SENTENCIA
            |  sentCompuesta          {if(flag_SentCompuesta == 0){printf("Se encontro una sentencia compuesta %d \n") ,$1)}}
            | sentExpresion          {if(flag_sentExpresion = 0){printf("Se encontro una sentencia expresion %d \n") ,$1)}}
            | sentSeleccion          {if(flag_sentControl = 0){printf("Se encontro una sentencia seleccion%d \n") ,$1)}}
            | sentIteracion          {if(flag_sentIteracion = 0){printf("Se encontro una sentencia iteracion %d \n") ,$1)}}
            | sentenciaDeclaracion   {if(flag_sentDeclaricion = 0){printf("Se encontro una sentencia declaracion %d \n") ,$1)}}
;

/////////////////////////////// SENTENCIAS COMPUESTAS ///////////////////////

 sentCompuesta : '{' listaSentencias '}'     { if(flag_SentCompuesta == 0) { printf("Se detecto una sentencia compuesta")}}
;

listaSentencias :  listaSentencias sentencia
                  | sentencia
                  | /* vacío*/
                  | error                   { printf("Error al definir una sentencia \n"); flag_SentCompuesta}                  
;

/////////////////////////////// SENTENCIAS EXPRESIONES ///////////////////////

 sentExpresion :  expresion ';'
                 | error ';'             { printf("Error al definir una sentencia de expresion\n"); flag_SentCompuesta }   

;
/////////////////////////////// SENTENCIAS CONTROL IF Y ELSE ///////////////////////
sentSeleccion : SENTENCIADECONTROL '(' expresion ')' sentCompuesta then1         {if(flag_SentCompuesta == 0){printf("Se detecto una sentencia compuesta %d \n") ,$1)}}
            |  SENTENCIADECONTROL '(' error ')' sentCompuesta then1             {printf("No se pudo reconocer la expresion \n"); flag_SentCompuesta} 
            |  SENTENCIADECONTROL '(' expresion ')' '{' error '}' then1         {printf("No se pudo reconocer la expresion \n"); flag_SentCompuesta} 
            |  SENTENCIADECONTROL '(' ')' '{' error '}' sentCompuesta then1     {printf("No se pudo reconocer la expresion \n"); flag_SentCompuesta} 
;

then1 : SENTENCIADECONTROL sentCompuesta
    | sentSeleccion
    | error sentCompuesta                 {flag_SentCompuesta = 1}
    | SENTENCIADECONTROL '{' error'}'    {printf("No se pudo reconocer la expresion \n"); flag_sentIteracion = 1}
    | /* vacio */

;

/////////////////////////////// SENTENCIAS BUCLES ///////////////////////
sentIteracion : SENTENCIADEITERACION then2
;git 

then2 : '(' expresion ')' sentCompuesta                             {if(flag_sentIteracion == 0){ printf("Se declaro una sentencia while")}}
    |sentCompuesta SENTENCIADEITERACION '(' expresion ')' ';'       {if(flag_sentIteracion == 0){ printf("Se declaro una sentencia do while")}}
    | '(' expOrDeclaracion ';' expOp ';' expOp ')' sentCompuesta    {if(flag_sentIteracion == 0){ printf("Se declaro una sentencia for");}}
    | error                                                         {printf("Error al reconocer la sentencia repetitiva"); flag_sentIteracion =1;}

;

expOrDeclaracion    TIPODATO IDENTIFICADOR '=' expresion  {if(flag_sentIteracion == 0){ printf("Se encontro una sentencia iteracion")}}
    | expOp                                              
    | error IDENTIFICADOR '=' expresion                   {printf("No se pudo reconocer el identificador"); flag_sentIteracion =1;}
    | TIPODATO error '=' expresion                        {printf("No se pudo reconocer el tipo de dato"); flag_sentIteracion =1;}
    | error                                               {printf("Error al reconocer la sentencia repetitiva"); flag_sentIteracion =1;}
;
expOp :
    expresion
    | /* vacio */
;


%%


main()
{

yyparse();

}
