%code requires {
  #include "Tp5-struct.h"
}
%{

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Tp5-funciones.h"


extern FILE* yyin;

int yylex();

int yyerror (char*);
int yywrap(){
return(1);
}
symrec *aux;





%}

%union {
  char* identificador;
  double constante;
  char caracter;
  int entero;
  float real;
  argumento argumentoFunciones;
  struct symrec *listaDeParametros;
}


%type <constante> constante
%type <constante> inicial
%type <listaDeParametros> listaParametrosDeclaracion
%type <listaDeParametros> listaArgumentos
%type <argumentoFunciones> argumento2
%type <entero> expresionPrimaria
%type <entero> expresionSufijo
%type <entero> expresionUnaria
%type <entero> expresionConversion
%type <entero> expresionMultiplicativa
%type <entero> expresionAditiva
%type <entero> expresionCorrimiento
%type <entero> expresionRelacional
%type <entero> expresionIgualdad
%type <entero> expresionY
%type <entero> expresionOExcluyente
%type <entero> expresionOInclusivo
%type <entero> expresionYLogico
%type <entero> expresionOLogico
%type <entero> expresionCondicional
%type <entero> expresionAsignacion
%type <entero> expresion

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
          |entrada '\n'
;

linea:    expresion   ';' {printf("Se encontro una expresion\n");}
        | declaracion  {printf("Se encontro una declaracion\n");}
        | sentencia   {printf("Se encontro una sentencia\n");}
        | ERROR_LEXICO finDeLinea ';' {printf("Se encontro un error lexico\n");}
        | ERROR_LEXICO finDeLinea '\n' {printf("Se encontro un error lexico\n");}
;

finDeLinea: /* vacio */
            | finDeLinea ERROR_LEXICO

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
                    | IDENTIFICADOR '(' listaArgumentos ')' { aux = getsym($<identificador>1); if (aux) { printf("esta todo bien \n"); compararParametros(aux);} else { printf("Se quiere invocar una funcion que no está declarada"); }}
                    | expresionSufijo '(' ')'
                    | expresionSufijo '.' IDENTIFICADOR /* definir bien IDENTIFICADOR */
                    | expresionSufijo FLECHA IDENTIFICADOR
                    | expresionSufijo INCREMENTO
                    | expresionSufijo DECREMENTO
;

listaArgumentos:      argumento2                     {}
                    | listaArgumentos ',' argumento2 {}
;

argumento2:      CONSTANTE_REAL        {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_FLOAT); aux->value.real = $1; }
              | CONSTANTE_ENTERA      {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_INT); (aux->value.entero) = $1;}
              | CONSTANTE_CARACTER    {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_CHAR); aux->value.caracter = $1; }
;

expresionPrimaria:      IDENTIFICADOR       /* definir bien todos estos */
                      | constante      
                      | '(' expresion ')'
                      
;


////////////////////////////////  DECLARACIONES //////////////////////////////////////

declaracion:      declaracionVarSimples 
                | declaracionFunciones
;

declaracionVarSimples:        TIPODATO listaVarSimples ';'  {tiparDeclaraciones($<identificador>1);}
;


declaracionFunciones:     TIPODATO IDENTIFICADOR '(' listaParametrosDeclaracion ')' sentenciaCompuesta {aux=getsym($<identificador>2); if (aux) { printf("redeclaracion de variable \n"); agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!", $<listaDeParametros>2 );} else {  aux=putsym(strdup($<identificador>2),TYP_AUXILIAR);};tiparDeclaraciones($<identificador>1); aux->value.lista_parametros = sym_tabla_parametros_aux; sym_tabla_parametros_aux = NULL;}
;



listaParametrosDeclaracion:      TIPODATO IDENTIFICADOR                   {aux=getsym_tabla_parametros_aux($<identificador>2);  if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!");} else {  aux=putsym_tabla_parametros_aux(strdup($<identificador>2),TYP_AUXILIAR); tiparDeclaracionesAux($<identificador>1);} }   
                    | listaParametrosDeclaracion ',' TIPODATO IDENTIFICADOR  {aux=getsym_tabla_parametros_aux($<identificador>4); if (aux) { agregarError(&arrayErrores, "Cantidad o tipado de parametros incorrecto!!");} else {  aux=putsym_tabla_parametros_aux(strdup($<identificador>4),TYP_AUXILIAR); tiparDeclaracionesAux($<identificador>3);}}
;



listaVarSimples:      unaVarSimple                      
                    | listaVarSimples ',' unaVarSimple
;

unaVarSimple:     IDENTIFICADOR           {aux=getsym($<identificador>1); if (aux) { printf("redeclaracion de variable \n"); agregarError(&arrayErrores, "Redeclaracion de variable", $<identificador>1);} else {  aux=putsym(strdup($<identificador>1),TYP_AUXILIAR);}}
                | IDENTIFICADOR inicial   { aux=getsym($<identificador>1); if (aux) { printf("redeclaracion de variable \n"); agregarError(&arrayErrores, "Redeclaracion de variable");} else {  aux=putsym(strdup($<identificador>1),TYP_AUXILIAR);(aux->value.real_doble)=$<constante>2 ;}}
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

   /* mostrarLista();
    mostrarErrores(&arrayErrores);
    
    symrec *aux = getsym("unafuncion")->value.lista_parametros;
    while (aux)
    {
        printf("variable definida: %s \n", aux->name);
        int a = aux->value.real_doble;
        printf("valor: %d \n", a);
        printf("tipo: %d \n", aux->type);
        aux=aux->next;

    }*/
    printf("\n\n\nFinal del programa, codigo: %d", flag);

    fclose(yyin);

    return flag;
}