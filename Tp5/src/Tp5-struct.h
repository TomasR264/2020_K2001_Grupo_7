#ifndef TP5_STRUCT
#define TP5_STRUCT


// definicion de tipos de variables

#define TYP_INT 0
#define TYP_CHAR 1
#define TYP_DOUBLE 2
#define TYP_FLOAT 3
#define TYP_VOID 4
#define TYP_AUXILIAR 5
#define TYP_FUNC 6


#include <stdio.h>
#include <stdlib.h>


typedef double (*func_t) (double);

typedef struct nodo{
  char *id;
  struct nodo *sig;
}ListaDeParametros;



typedef struct symrec
{
  char *name;
  int type; // tipos de datos (TYP_INT etc) o tipo de la funcion
  func_t fnctptr; //Si es una función, se almacena un puntero a una función // Aca??
  union
  {
    int entero;       // valores
    float real;
    double real_doble;
    struct symrec *lista_parametros;
  } value;

  struct symrec *next; //Puntero al siguiente nodo de la lista
} symrec;

// declaracion de la tabla
symrec *sym_table = NULL;
symrec *sym_tabla_parametros_aux = NULL;

//Estructura para el manejo de errores:
typedef struct Error {
    char* error;
    struct Error *sig;
} Error;

Error *arrayErrores = NULL;

#endif