#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int clasificarConstantes(char caracter, int estado);
int clasificarCaracter(char caracter);
void imprimirEstado(int estado);
void imprimirCaracter(char caracter);

int main()
{
    FILE *archivo;
    char caracter;
    int estado = 1;

    archivo = fopen("entrada.txt", "r");

    //primero detecta que exista el archivo
    if (archivo == NULL)
    {
        printf("\nError de apertura del archivo. \n\n");
    }
    else
    {
        //si existe comienza el programa
        printf("\nLas variables enteras del archivo, clasificadas, son:  \n\n");

        // si no detecta el final del archivo, comienza a leer de a 1 caracter
        while ((caracter = fgetc(archivo)) != EOF)
        {
            //si detecta una "," salta de linea, y cambia de palabra
            if (caracter == ',')
            {

                imprimirEstado(estado);

                //resetear estado
                estado = 1;
            }
            else
            { //imprimo el numero que estoy analizando
                imprimirCaracter(caracter);

                //llamo a la funcion que los clasifica, paso el estado actual, y me devuelve un nuevo estado actualizado
                estado = clasificarConstantes(caracter, estado);
            }
        }
    }
    fclose(archivo);
    return 0;
}

int clasificarConstantes(char caracter, int estado)
{
    int cClasificado;
    int nuevoEstado;
    int automata[7][7] = {
        //                      De terminar en este estado, seria
        /*Q1*/ {2, 4, 4, 7, 7, 7, 7}, //palabra vacia
        /*Q2*/ {3, 3, 7, 7, 7, 5, 7}, //0 por lo tanto octal
        /*Q3*/ {3, 3, 7, 7, 7, 7, 7}, //octal mayor a cero
        /*Q4*/ {4, 4, 4, 7, 7, 7, 7}, //decimal
        /*Q5*/ {6, 6, 6, 6, 6, 7, 7}, //hexa incompleto (0xx) por lo tanto palabra no reconocida
        /*Q6*/ {6, 6, 6, 6, 6, 7, 7}, //hexa
        /*Q7*/ {7, 7, 7, 7, 7, 7, 7}  //palabra no reconocida

    };

    //convierte el caracter a un entero, columna del automata
    cClasificado = clasificarCaracter(caracter);

    //actualizar estado segun automata
    nuevoEstado = automata[estado - 1][cClasificado];

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
    if (caracter >= '1' && caracter <= '7')
    {
        cClasificado = 1;
    }
    if (caracter >= '8' && caracter <= '9')
    {
        cClasificado = 2;
    }
    if (caracter >= 'a' && caracter <= 'f')
    {
        cClasificado = 3;
    }
    if (caracter >= 'A' && caracter <= 'F')
    {
        cClasificado = 4;
    }
    if (caracter == 'x' || caracter == 'X')
    {
        cClasificado = 5;
    }

    return cClasificado;
}

void imprimirEstado(int estado)
{
    printf("             ");
    switch (estado)
    {
    case 1:
        printf("Palabra vacia!");
        break;
    case 2:
        printf("Octal");
        break;
    case 3:
        printf("Octal");
        break;
    case 4:
        printf("Decimal");
        break;
    case 5:
        printf("Palabra no reconocida (Hexadecimal incompleto)!");
        break;
    case 6:
        printf("Hexadecimal");
        break;
    case 7:
        printf("Palabra no reconocida");
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
