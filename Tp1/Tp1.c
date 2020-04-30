#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int clasificarConstantes(char caracter, int estado);
int clasificarCaracter(char caracter);
void imprimirEstado(int estado, FILE *salida);
void imprimirCaracter(char caracter, FILE *salida);

int main()
{
    FILE *entrada;
    FILE *salida;
    char caracter;
    int estado = 1;

    salida = fopen("salida.txt", "wt");
    entrada = fopen("entrada.txt", "r");

    //primero detecta que exista el archivo
    if (entrada == NULL)
    {
        printf("\nError de apertura del archivo. \n\n");
    }
    else
    {
        //si existe comienza el programa
        printf("\nLas variables enteras del archivo, clasificadas, son:  \n\n");

        // si no detecta el final del archivo, comienza a leer de a 1 caracter
        while ((caracter = fgetc(entrada)) != EOF)
        {
            //si detecta una "," salta de linea, y cambia de palabra
            if (caracter == ',')
            {

                imprimirEstado(estado, salida);

                //resetear estado
                estado = 1;
            }
            else
            { //imprimo el numero que estoy analizando
                imprimirCaracter(caracter, salida);

                //llamo a la funcion que los clasifica, paso el estado actual, y me devuelve un nuevo estado actualizado
                estado = clasificarConstantes(caracter, estado);
            }
        }
    }
    fclose(entrada);

    //getchar para que no se cierre el ejecutable automaticamente y se puedan ver los resultados
    getchar();
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

void imprimirEstado(int estado, FILE *salida)
{
    printf("             ");
    fputs("             ", salida);
    switch (estado)
    {
    case 1:
        printf("Palabra vacia!");
        fputs("Palabra vacia!", salida);
        break;
    case 2:
        printf("Octal");
        fputs("Octal", salida);
        break;
    case 3:
        printf("Octal");
        fputs("Octal", salida);
        break;
    case 4:
        printf("Decimal");
        fputs("Decimal", salida);
        break;
    case 5:
        printf("Palabra no reconocida (Hexadecimal incompleto)!");
        fputs("Palabra no reconocida (Hexadecimal incompleto)!", salida);
        break;
    case 6:
        printf("Hexadecimal");
        fputs("Hexadecimal", salida);
        break;
    case 7:
        printf("Palabra no reconocida");
        fputs("Palabra no reconocida", salida);
        break;

    default:
        break;
    }
    printf("\n");
    fputs("\n", salida);
}

void imprimirCaracter(char caracter, FILE *salida)
{
    printf("%C", caracter);
    fputc(caracter, salida);
}
