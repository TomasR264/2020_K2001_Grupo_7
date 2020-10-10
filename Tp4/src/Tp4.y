
%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex();
int yywrap(){
	return(1);
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
}

int flag_error = 0,  flag_sentDeclaracion = 0, flag_SentCompuesta = 0, flag_sentIteracion = 0, flag_sentControl = 0 , flag_sentExpresion = 0;

%}

%union {
char caracter;

int entero;

char* cadena;

}

%token <caracter> CCARACTER

%token <entero> NUM

%token <cadena> LITERALESCADENA

%token <cadena> TIPODATO

%token <cadena> IDENTIFICADOR

%token <cadena> SENTENCIADECONTROL

%token <cadena> SENTENCIADEITERACION

%token <cadena> RETURN

%type <cadena> declaVarSimples

%type <cadena> listaVarSimples

%type <cadena> unaVarSimple

%type <cadena> constante

%type <cadena> sentencia

%type <cadena> sentCompuesta

%type <cadena> sentIteracion

%type <cadena> sentSeleccion

%type <cadena> sentenciaDeclaracion

%type <cadena> sentExpresion



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

expPostfijo :   expPrimaria
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
              | LITERALESCADENA               {printf("palabra %s \n" ,$1)}
;

/////////////////////////////// SENTENCIAS ///////////////////////

sentencia : | sentCompuesta           {if(flag_SentCompuesta == 0){printf("Se encontro una sentencia compuesta %d \n") ,$1)}}
            | sentExpresion           {if(flag_sentExpresion == 0){printf("Se encontro una sentencia expresion %d \n") ,$1)}}
            | sentSeleccion           {if(flag_sentControl == 0){printf("Se encontro una sentencia seleccion%d \n") ,$1)}}
            | sentIteracion           {if(flag_sentIteracion == 0){printf("Se encontro una sentencia iteracion %d \n") ,$1)}}
            | sentenciaDeclaracion    {if(flag_sentDeclaracion == 0){printf("Se encontro una sentencia declaracion %d \n") ,$1)}}
            | RETURN expOp ';'        {if (flag_error ==0){       printf("Se declaro una sentencia de retorno")}} 
;

/////////////////////////////// SENTENCIAS COMPUESTAS ///////////////////////

 sentCompuesta : '{' listaSentencias '}'     { printf("Se detecto una sentencia compuesta")}
;

listaSentencias :  listaSentencias sentencia
                  | sentencia
                  | /* vacío*/
                  | error                   { printf("Error al definir una sentencia \n");}                  
;

/////////////////////////////// SENTENCIAS EXPRESIONES ///////////////////////

 sentExpresion :  expresion ';'
                 | error ';'             { printf("Error al definir una sentencia de expresion\n");}   

;
/////////////////////////////// SENTENCIAS CONTROL IF, ELSE y Switch ///////////////////////
sentSeleccion : SENTENCIADECONTROL '(' expresion ')' sentCompuesta then1        {printf("Se detecto una sentencia compuesta %d \n") ,$1)}
            |  SENTENCIADECONTROL '(' error ')' sentCompuesta then1             {printf("No se pudo reconocer la expresion \n"); } 
            |  SENTENCIADECONTROL '(' expresion ')' '{' error '}' then1         {printf("No se pudo reconocer la expresion \n"); } 
            |  SENTENCIADECONTROL '(' ')' '{' error '}' sentCompuesta then1     {printf("No se pudo reconocer la expresion \n"); } 
;

then1 : SENTENCIADECONTROL sentCompuesta
    | sentSeleccion
    | error sentCompuesta                 {printf("Error \n");}
    | SENTENCIADECONTROL '{' error'}'    {printf("No se pudo reconocer la expresion \n");}
    | /* vacio */

;

/////////////////////////////// SENTENCIAS BUCLES ///////////////////////
sentIteracion : SENTENCIADEITERACION then2
;

then2 : '(' expresion ')' sentCompuesta                             { printf("Se declaro una sentencia while");}
    |sentCompuesta SENTENCIADEITERACION '(' expresion ')' ';'       { printf("Se declaro una sentencia do while");}
    | '(' expOrDeclaracion ';' expOp ';' expOp ')' sentCompuesta    { printf("Se declaro una sentencia for");}
    | error                                                         {printf("Error al reconocer la sentencia repetitiva");}

;

expOrDeclaracion :   TIPODATO IDENTIFICADOR '=' expresion  { printf("Se encontro una sentencia iteracion");}
    | expOp                                              
    | error IDENTIFICADOR '=' expresion                   {printf("No se pudo reconocer el identificador");}
    | TIPODATO error '=' expresion                        {printf("No se pudo reconocer el tipo de dato");}
    | error                                               {printf("Error al reconocer la sentencia repetitiva");}
;
expOp :
    expresion
    | /* vacio */
;

///////////////////////////  DELARACIONES Y DEFINICIONES ///////////////////////

declaVarSimples : TIPODATO listaVarSimples ';' {printf("De tipo %s \n\n\n\n", $<cadena>1)}
;

listaVarSimples : unaVarSimple
                | listaVarSimples ',' unaVarSimple
;

unaVarSimple : IDENTIFICADOR inicial    {printf("Se declaro e inicializo la variable %s \n", $<cadena>1);}
            | IDENTIFICADOR             {printf("Se declaro la variable %s \n", $<cadena>1);}
;

inicial : '=' constante
;

constante :    NUM                            {}
              | CCARACTER                     {}
              | LITERALESCADENA               {}
              | LITERALESCADENA               {}
;





%%

int main ()
{
    #ifdef BISON_DEBUG
        yydebug = 1;
#endif
  yyparse ();
}