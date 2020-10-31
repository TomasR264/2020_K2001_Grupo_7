#ifndef TP5_FUNCIONES
#define TP5_FUNCIONES


#include "Tp5-struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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




#endif