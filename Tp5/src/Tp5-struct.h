
// definicion de tipos de variables

#define TYP_INT 0
#define TYP_CHAR 1
#define TYP_DOUBLE 2
#define TYP_FLOAT 3
#define TYP_VOID 4

#include <stdio.h>
#include <stdlib.h>


typedef struct symrec
{
  char *name;
  int type; //Tenemos dos tipos: Variable (TYP_VAR) o Función (TYP_FNCT)
  union
  {
    double var; //Si es una variable, se guarda su valor    
    
  } value;
  struct symrec *next; //Puntero al siguiente nodo de la lista
} symrec;

// declaracion de la tabla
symrec *sym_table  = NULL;