#ifndef TP5_FUNCIONES
#define TP5_FUNCIONES


#include "Tp5-struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definición de la función putsym

symrec *putsym (char const *sym_name, int sym_type, symrec *listaAUtilizar)
{
  symrec *ptr = (symrec *) malloc (sizeof (symrec));
  ptr->name = (char *) malloc (strlen (sym_name) + 1);
  strcpy (ptr->name,sym_name);
  ptr->type = sym_type;
  ptr->value.real_doble = 0;
  ptr->next = (struct symrec *)listaAUtilizar;
  listaAUtilizar = ptr;
  
  return ptr;
}



//Definición de la función getsym

symrec *getsym (char const *sym_name, symrec *listaAUtilizar)
{
  symrec *ptr;
  for (ptr = listaAUtilizar; ptr != (symrec *) 0;
       ptr = (symrec *)ptr->next)
    if (strcmp (ptr->name, sym_name) == 0)
      return ptr;
  return 0;
}

void tiparDeclaraciones (char* tipo) {
    symrec *aux = sym_table;
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

void mostrarLista(){ // funcion provisional para debuggear
    symrec *aux = sym_table;
    while (aux)
    {
        printf("variable definida: %s \n", aux->name);
        int a = aux->value.real_doble;
        printf("valor: %d \n", a);
        printf("tipo: %d \n", aux->type);
        aux=aux->next;

    }
    
    
    return;
}

void agregarError(Error** arrayErrores, char* error) {
    Error* nuevoError = (Error*)malloc(sizeof(Error));
    nuevoError->error = strdup(error);
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

#endif