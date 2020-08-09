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


