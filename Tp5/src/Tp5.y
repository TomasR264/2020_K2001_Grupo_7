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
  struct symrec *listaDeParametros;
}


%type <constante> constante
%type <constante> inicial
%type <listaDeParametros> listaParametrosDeclaracion
%type <listaDeParametros> listaArgumentos
%type <entero> argumento2
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


expresion:    expresionAsignacion                  {$$ = $<entero>1}
            | expresion ',' expresionAsignacion    {$$ = $<entero>1}
;

expresionAsignacion:    expresionCondicional                                      {$$ = $<entero>1}
                      | expresionUnaria OPERADOR_ASIGNACION expresionAsignacion   {$$ = $<entero>1}
;

expresionCondicional:     expresionOLogico                                        {$$ = $<entero>1}
                        | expresionOLogico '?' expresion ':' expresionCondicional {$$ = $<entero>1}
;

expresionOLogico:     expresionYLogico                            {$$ = $<entero>1}
                    | expresionYLogico OLOGICO expresionYLogico   {$$ = $<entero>1}
;

expresionYLogico:     expresionOInclusivo                           {$$ = $<entero>1}
                    | expresionYLogico YLOGICO expresionOInclusivo  {$$ = $<entero>1}
;

expresionOInclusivo:      expresionOExcluyente                          {$$ = $<entero>1}
                        | expresionOInclusivo '|' expresionOExcluyente  {$$ = $<entero>1}
;

expresionOExcluyente:     expresionY                            {$$ = $<entero>1}
                        | expresionOExcluyente '^' expresionY   {$$ = $<entero>1}
;

expresionY:     expresionIgualdad                   {$$ = $<entero>1}
              | expresionY '&' expresionIgualdad    {$$ = $<entero>1}
;

expresionIgualdad:      expresionRelacional                             {$$ = $<entero>1}
                      | expresionIgualdad IGUAL expresionRelacional     {$$ = $<entero>1}
                      | expresionIgualdad DESIGUAL expresionRelacional  {$$ = $<entero>1}
;

expresionRelacional:      expresionCorrimiento                                  {$$ = $<entero>1}
                        | expresionRelacional '<' expresionCorrimiento          {$$ = $<entero>1}
                        | expresionRelacional '>' expresionCorrimiento          {$$ = $<entero>1}
                        | expresionRelacional MENOIGUAL expresionCorrimiento    {$$ = $<entero>1}
                        | expresionRelacional MAYOIGUAL expresionCorrimiento    {$$ = $<entero>1}
;

expresionCorrimiento:     expresionAditiva                            {$$ = $<entero>1}
                        | expresionCorrimiento OUTPUT expresionAditiva {$$ = $<entero>1}
                        | expresionCorrimiento INPUT expresionAditiva {$$ = $<entero>1}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
expresionAditiva:     expresionMultiplicativa                       {$$ = $<entero>1}
                    | expresionAditiva '+' expresionMultiplicativa  {$$ = compararTipos($<entero>1, $<entero>3);}
                    | expresionAditiva '-' expresionMultiplicativa  {$$ = compararTipos($<entero>1, $<entero>3);}
;

expresionMultiplicativa:      expresionConversion                               {$$ = $<entero>1}
                            | expresionMultiplicativa '*' expresionConversion   {$$ = compararTipos($<entero>1, $<entero>3);}
                            | expresionMultiplicativa '/' expresionConversion   {$$ = compararTipos($<entero>1, $<entero>3);}
                            | expresionMultiplicativa '%' expresionConversion   {$$ = compararTipos($<entero>1, $<entero>3);}
;

expresionConversion:      expresionUnaria                       {$$ = $<entero>1}
                        | '(' TIPODATO ')' expresionConversion  {$$ = conversionExpresiones($<identificador>2);}
;

expresionUnaria:      expresionSufijo         {$$ = $<entero>1}
                    | INCREMENTO expresionUnaria  {$$ = $<entero>2}
                    | DECREMENTO expresionUnaria  {$$ = $<entero>2}
                    | operadorUnario expresionConversion  {$$ = $<entero>2}
                    | SIZEOF expresionUnaria  {$$ = TYP_INT}
                    | SIZEOF '(' TIPODATO ')' {$$ = TYP_INT}
;

operadorUnario:     '&' | '*' | '+' | '-' | '~' | '!'
;

expresionSufijo:      expresionPrimaria   {$$ = $<entero>1}
                    | expresionSufijo '[' expresion ']' {$$ = $<entero>1}
                    | IDENTIFICADOR '(' listaArgumentos ')' { aux = getsym($<identificador>1); if (aux) { printf("esta todo bien \n"); compararParametros(aux);} else { printf("Se quiere invocar una funcion que no está declarada"); }}
                    | expresionSufijo '(' ')'     {$$ = $<entero>1}
                    | expresionSufijo '.' IDENTIFICADOR {$$ = $<entero>1}
                    | expresionSufijo FLECHA IDENTIFICADOR    {$$ = $<entero>1}
                    | expresionSufijo INCREMENTO    {$$ = $<entero>1}
                    | expresionSufijo DECREMENTO    {$$ = $<entero>1}
;

listaArgumentos:      argumento2                     {}
                    | listaArgumentos ',' argumento2 {}
;

argumento2:      CONSTANTE_REAL        {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_FLOAT); aux->value.real = $1; $$ = TYP_FLOAT;}
              | CONSTANTE_ENTERA      {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_INT); (aux->value.entero) = $1; $$ = TYP_INT;}
              | CONSTANTE_CARACTER    {aux = putsym_tabla_parametros_aux(strdup("temp"),TYP_CHAR); aux->value.caracter = $1; $$ = TYP_CHAR;}
;

expresionPrimaria:      IDENTIFICADOR       {aux = getsym($<identificador>1); if (aux) { $$ = aux->type;} else { printf("Se quiere utilizar una variable que no está declarada");}}
                      | argumento2          {$$ = $<entero>1}
                      | '(' expresion ')'   {$$ = $<entero>1}
                      
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

inicial:        OPERADOR_ASIGNACION constante {$$ = $<constante>2;}  /* cambiar operador asignacion por igual solo y revisar donde mas cambiar*/
              | OPERADOR_ASIGNACION expresionAsignacion;
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