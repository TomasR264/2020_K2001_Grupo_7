#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int clasificarConstantes(char caracter, int estado, bool error);
int clasificarCaracter(char caracter);
void imprimirEstado(int estado);
void imprimirCaracter(char caracter);
bool hayError(int estado);

int main()
{
    char caracter;
    int estado = 0;


    // si no detecta el final del archivo, comienza a leer de a 1 caracter
    while ((caracter = fgetc(stdin)) != '\n')
    {   
        //contador para que solo señale una vez el caracter con error
        int contador = 1;

        //detecto que no este en un estado con codigo de error
        if(hayError(estado) && contador){

            printf("\"");
            imprimirCaracter(caracter);
            printf("\"");
            contador = 0;

        }else
        {
            //si no hay error

            //imprimo el numero que estoy analizando
            imprimirCaracter(caracter);

            //llamo a la funcion que los clasifica, paso el estado actual, y me devuelve un nuevo estado actualizado
            estado = clasificarConstantes(caracter, estado, hayError(estado));
        }
       
    }
    
    if(pop(pila) == '$' && (estado == 1 || estado == 2)){
        printf("\n\n");
        printf("Expresion sintácticamente correcta");
    } else
    {
        imprimirEstado(estado);
    }
    
    

    //getchar para que no se cierre el ejecutable automaticamente y se puedan ver los resultados
    getchar();
    return 0;
}

int clasificarConstantes(char caracter, int estado, bool error)
{
    int cClasificado;
    int nuevoEstado;
    int pila;
    int automata [2][3][5] = {
    /* pila $  */     { {3, 1, 4, 0, 5}, 
                        {1, 1, 0, 6, 5}, 
                        {7, 7, 0, 6, 5} },
                
    /* pila R  */     { {3, 1, 4, 0, 6}, 
                        {1, 1, 0, 6, 2}, 
                        {7, 7, 0, 6, 2} }               
          

    };

    //hay codigo de error no actualiza estado
    if(error){
        return estado;
    }


    //convierte el caracter a un entero, columna del automata
    cClasificado = clasificarCaracter(caracter);

    //Hacer los push y pop correspondientes de la pila y actualizar el valor
    pila = detectarPila(cClasificado);


    //actualizar estado segun automata
    nuevoEstado = automata[pila][estado][cClasificado];

    return nuevoEstado;
}

int clasificarCaracter(char caracter)
{ //por default tira el 6 que es un caracter no reconocido
    int cClasificado = 6;

    //luego dependiendo del rango en el que este, lo pasa a un int, para tomarlo como columna del automata
    if (caracter == '0')
    {
        cClasificado = 0;
    }
    if (caracter >= '1' && caracter <= '9')
    {
        cClasificado = 1;
    }
    if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/')
    {
        cClasificado = 2;
    }
    if (caracter == '(')
    {
        cClasificado = 3;
    }
    if (caracter == ')')
    {
        cClasificado = 4;
    }

    return cClasificado;
}

int detectarPila (int caracterClasificado){

    char cimaPila = pop ();

    if(caracterClasificado == 4){
        return clasificarPila(cimaPila);
    }

    if(caracterClasificado == 3){

        push(cimaPila);
        push('R');

        return clasificarPila(cimaPila);
    }

    push(cimaPila);

    return clasificarPila(cimaPila);
}

int clasificarPila (char cimaPila){

    int pilaClasificada = 3;

    if (cimaPila == '$')
    {
        pilaClasificada = 0;
    }

    if (cimaPila == 'R')
    {
        pilaClasificada = 1;
    }
    
    return pilaClasificada;
}

void imprimirEstado(int estado)
{
    printf("\n\n");
    switch (estado)
    {
    case 0:
        printf("Error");
        break;
    case 1:
        printf("Error");
        break;
    case 2:
        printf("Error");
        break;
    case 3:
        printf("No se puede Insertar un número comenzando con 0");
        break;
    case 4:
        printf("No se puede insertar una operacion sin 2 numeros o 2 agrupaciones con parentesis");
        break;
    case 5:
        printf("No existe el parentesis de apertura correspondiente");
        break;
    case 6:
        printf("No se puede abrir un parentesis sin estar precedido por una operacion o ser el comienzo de la expresion");
        break;
    case 7:
        printf("No se puede escribir un numero luego de un parentesis");
        break;
    case 8:
        printf("No es posible abrir y cerrar parentesis sin contenido o luego de haber ingresado una operacion");
        break;

    default:
        break;
    }
    printf("\n");
}

void imprimirCaracter(char caracter)
{
    printf("%C", caracter);
}

bool hayError(int estado){
    bool error = false;
    switch (estado)
    {
    case 3:
        error = true;
        break;
    case 4:
        error = true;
        break;
    case 5:
        error = true;
        break;
    case 6:
        error = true;
        break;
    case 7:
        error = true;
        break;
    case 8:
        error = true;
        break;
    case 9:
        error = true;
        break;
    
    default:
        break;
    }
    return error;
}
