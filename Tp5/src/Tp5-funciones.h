#ifndef TP5_FUNCIONES
#define TP5_FUNCIONES


#include "Tp5-struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
// declaracion de la tabla
symrec *sym_table = NULL;
symrec *sym_tabla_parametros_aux = NULL;
Error *arrayErrores = NULL;
void agregarError(Error** arrayErrores, int cantidadParametros, char* error, ...);


//Definición de la función putsym

symrec *putsym (char const *sym_name, int sym_type)
{
  symrec *ptr = (symrec *) malloc (sizeof (symrec));
  ptr->name = (char *) malloc (strlen (sym_name) + 1);
  strcpy (ptr->name,sym_name);
  ptr->type = sym_type;
  ptr->value.real_doble = 0;
  ptr->next = (struct symrec *)sym_table;
  sym_table = ptr;
  
  return ptr;
}



symrec *putsym_tabla_parametros_aux (char const *sym_name, int sym_type)
{
  symrec *ptr = (symrec *) malloc (sizeof (symrec));
  ptr->name = (char *) malloc (strlen (sym_name) + 1);
  strcpy (ptr->name,sym_name);
  ptr->type = sym_type;
  ptr->value.real_doble = 0;
  ptr->next = (struct symrec *)sym_tabla_parametros_aux;
  sym_tabla_parametros_aux = ptr;
  
  return ptr;
}



//Definición de la función getsym

symrec *getsym (char const *sym_name)
{
  symrec *ptr;
  for (ptr = sym_table; ptr != (symrec *) 0;
       ptr = (symrec *)ptr->next)
    if (strcmp (ptr->name, sym_name) == 0)
      return ptr;
  return 0;
}


symrec *getsym_tabla_parametros_aux (char const *sym_name)
{
  symrec *ptr;
  for (ptr = sym_tabla_parametros_aux; ptr != (symrec *) 0;
       ptr = (symrec *)ptr->next)
    if (strcmp (ptr->name, sym_name) == 0)
      return ptr;
  return 0;
}

int conversionExpresiones(char* tipo){

    int tipoVariable = TYP_AUXILIAR;
    if(strcmp (tipo, "int") == 0){
        tipoVariable = TYP_INT;
    }
    if(strcmp (tipo, "char") == 0){
        tipoVariable = TYP_CHAR;
    }
    if(strcmp (tipo, "float") == 0){
        tipoVariable = TYP_FLOAT;
    }
    if(strcmp (tipo, "double") == 0){
        tipoVariable = TYP_DOUBLE;
    }
    if(strcmp (tipo, "void") == 0){
        tipoVariable = TYP_VOID;
    }
    return tipoVariable;
}

void tiparDeclaraciones (char* tipo) {

    symrec *aux = sym_table;
    int tipoVariable = conversionExpresiones(tipo);

    while (aux)
    {
        if(aux->type == TYP_AUXILIAR){
            aux->type = tipoVariable;
        }
        aux=aux->next;
    }

    return;
}

void tiparDeclaracionesAux (char* tipo) {
    symrec *aux = sym_tabla_parametros_aux;
    int tipoVariable = TYP_AUXILIAR;
    if(strcmp (tipo, "int") == 0){
        tipoVariable = TYP_INT;
    }
    if(strcmp (tipo, "char") == 0){
        tipoVariable = TYP_CHAR;
    }
    if(strcmp (tipo, "float") == 0){
        tipoVariable = TYP_FLOAT;
    }
    if(strcmp (tipo, "double") == 0){
        tipoVariable = TYP_DOUBLE;
    }
    if(strcmp (tipo, "void") == 0){
        tipoVariable = TYP_VOID;
    }
    while (aux)
    {
        if(aux->type == TYP_AUXILIAR){
            aux->type = tipoVariable;
        }
        aux=aux->next;
    }

    return;
}

int compararTipos(int tipo1, int tipo2){
    if(tipo1 == tipo2){
        return tipo1;
    }else{
        agregarError(&arrayErrores, 0, "WARNING intento operar con tipos distintos\n\n\n");
        return TYP_AUXILIAR;
    }
}




void mostrarLista(){ // funcion provisional para debuggear
    symrec *aux = sym_table;
    while (aux)
    {
        printf("Se definio la variable: %s ", aux->name);
        switch (aux->type)
        {
        case 0:
            printf(", de tipo: int \n");
            break;
        case 1:
            printf(", de tipo: char \n");
            break;
        case 2:
            printf(", de tipo: double \n");
            break;
        case 3:
            printf(", de tipo: float \n");
            break;
        case 4:
            printf(", de tipo: void \n");
            break;
        case 5:
            printf(", con un error de tipo: auxiliar \n");
            break;
        case 6:
            printf(", de tipo: funcion \n");
            break;
        
        default:
            break;
        }
        
        aux=aux->next;

    }
    
    
    return;
}

void mostrarTablaAux(symrec *aux){ // funcion provisional para debuggear
    
    while (aux)
    {
        printf("Se definio la variable: %s ", aux->name);
        int a = aux->value.entero;
        printf(", con valor: %d", a);
        printf(", de tipo: %d \n", aux->type);
        aux=aux->next;

    }
    
    
    return;
}

void compararParametros(symrec *funcionAInvocar) {
    symrec *aux = sym_tabla_parametros_aux;
    symrec *aux2 = funcionAInvocar->value.lista_parametros;
    int enteroAuxiliar;
    while (aux)
    {   if (!aux2) {
            agregarError(&arrayErrores, 0, "Se estan invocando menos parametros de los que se deberian \n");
        }
        if(aux2->type == aux->type) {
            printf("El tipo de los parametros es correcto\n");
        } else {
            char* error1 = malloc(strlen("Tipo declarado : %d  ") + 5) ;
            sprintf(error1, "Tipo declarado : %d  ", aux2->type);
            
            char* error2 = malloc(strlen("Tipo declarado : %d  ") + 5);
            sprintf(error2, "Tipo a invocar : %d  ", aux->type);
            agregarError(&arrayErrores, 2, "El tipo de los parametros no es correcto \n", error1, error2);
        }
        
        aux=aux->next;
        aux2=aux2->next;

    }
    if (aux2) {
            agregarError(&arrayErrores, 0, "Se estan invocando mas parametros de los que se deberian \n");
    }
    
    return;
}


void agregarError(Error** arrayErrores, int cantidadParametros, char* error, ...) {
    
    char errorDesarrollado[400] = "";
    strcat(errorDesarrollado, error); 
    va_list p; 
    va_start(p, error); 
    

    for (int i=0; i < cantidadParametros; i++){
        strcat(errorDesarrollado, va_arg(p, char *));
    }
    va_end(p); 
    
    Error* nuevoError = (Error*)malloc(sizeof(Error));
    nuevoError->error = strdup(errorDesarrollado);
    nuevoError->sig = NULL;
    
    //caso base
    if(*arrayErrores == NULL){
        *arrayErrores = nuevoError;
    }
    else{
        //Busco el ultimo error que su siguiente sea null
        Error* aux = *arrayErrores;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevoError;
    }
}

void mostrarErrores(Error** arrayErrores) {
    Error* aux = *arrayErrores;
    if(aux){
        printf("Lista de errores: \n\n");
    }else{
       printf("No hay errores\n");
    }
    while (aux != NULL){
        printf("%s \n", aux->error);
        aux = aux->sig;
    }
}


#endif