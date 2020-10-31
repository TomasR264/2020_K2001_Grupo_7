#ifndef TP5_STRUCT
#define TP5_STRUCT


// definicion de tipos de variables

#define TYP_INT 0
#define TYP_CHAR 1
#define TYP_DOUBLE 2
#define TYP_FLOAT 3
#define TYP_VOID 4
#define TYP_AUXILIAR 5


#include <stdio.h>
#include <stdlib.h>


typedef struct symrec
{
  char *name;
  int type; // tipos de datos (TYP_INT etc)
  union
  {
    int entero;       // valores
    float real;
    double real_doble;
  } value;
  struct symrec *next; //Puntero al siguiente nodo de la lista
} symrec;

// declaracion de la tabla
symrec *sym_table = NULL;



#endif