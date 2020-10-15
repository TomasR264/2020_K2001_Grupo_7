# 2020_K2001_Grupo_7

Comandos a utilizar 

-> Paso 1: De los archivos de especificación a los archivos: y.tab.c , y.tab.h , lex.yy.c

 

bison -d archivo.y

flex archivo.l

 

Recordar que en archivo .l debe estar referenciado el archivo y.tab.h a través de #include <y.tab.h> en la sección de declaraciones.

 

-> Paso 2: Del archivo y.tab.c y lex.yy.c al ejecutable

 

gcc y.tab.c lex.yy.c -L “Ruta_Librerería” -lfl -ly

 

-> Paso 3: Ejecutar analizador léxico y sintáctico

 

a.exe
