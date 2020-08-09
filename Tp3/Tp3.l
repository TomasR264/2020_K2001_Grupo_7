%option noyywrap

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <conio.h>
    #include <stdbool.h>
    #include <string.h>
    #include <math.h>
    #include <malloc.h>

/************* definiciones de nodos ****************************/ 

    struct nodo_identificador {
        char *identificador;
        int apariciones;
        struct nodo_identificador *siguiente;
    };
    typedef struct nodo_identificador nodo_identificador;


    struct nodo_literalCadena {
        char *literalCadena;
        int longitud;
        struct nodo_literalCadena *siguiente;
    };
    typedef struct nodo_literalCadena nodo_literalCadena;


    struct nodo_palabraReservada {
        char *palabraReservada;
        char *tipo;
        struct nodo_palabraReservada *siguiente;
    };
    typedef struct nodo_palabraReservada nodo_palabraReservada;


    struct nodo_constante_decimal {
        char *constante;
        struct nodo_constante_decimal *siguiente;
    };
    typedef struct nodo_constante_decimal nodo_constante_decimal;


    struct nodo_constante_octal {
        char *constante;
        struct nodo_constante_octal *siguiente;
    };
    typedef struct nodo_constante_octal nodo_constante_octal;


    struct nodo_constante_hexadecimal {
        char *constante;
        struct nodo_constante_hexadecimal *siguiente;
    };
    typedef struct nodo_constante_hexadecimal nodo_constante_hexadecimal;


    struct nodo_constante_real {
        char *constante;
        struct nodo_constante_real *siguiente;
    };
    typedef struct nodo_constante_real nodo_constante_real;

    
    struct nodo_constante_caracter {
        char *constante;
        struct nodo_constante_caracter *siguiente;
    };
    typedef struct nodo_constante_caracter nodo_constante_caracter;


    typedef struct nodo_operador_caracter {
        char *operador_caracter;
        int apariciones;
        struct nodo_operador_caracter *siguiente;
    }nodo_operador_caracter;


    struct nodo_comentario {
        char *comentario;
        bool unaLinea;
        struct nodo_comentario *siguiente;
    };
    typedef struct nodo_comentario nodo_comentario;


    struct nodo_noReconocido {
        char *noReconocido;
        int linea;
        struct nodo_noReconocido *siguiente;
    };
    typedef struct nodo_noReconocido nodo_noReconocido;


    struct nodo_include {
        char *include;
        struct nodo_include *siguiente;
    };
    typedef struct nodo_include nodo_include;


    struct nodo_define {
        char *define;
        struct nodo_define *siguiente;
    };
    typedef struct nodo_define nodo_define;

    /******************************** declaraciones de funciones **************************************/

    /*** iniciar lista ***/
    nodo_identificador * iniciar_identificador(nodo_identificador *Lista);
    nodo_literalCadena * iniciar_literalCadena(nodo_literalCadena *Lista);
    nodo_palabraReservada * iniciar_palabraReservada(nodo_palabraReservada *Lista);
    nodo_constante_decimal * iniciar_constante_decimal(nodo_constante_decimal *Lista);
    nodo_constante_octal * iniciar_constante_octal(nodo_constante_octal *Lista);
    nodo_constante_hexadecimal * iniciar_constante_hexadecimal(nodo_constante_hexadecimal *Lista);
    nodo_constante_real * iniciar_constante_real(nodo_constante_real *Lista);
    nodo_constante_caracter * iniciar_constante_caracter(nodo_constante_caracter *Lista);
    nodo_operador_caracter * iniciar_operador(nodo_operador_caracter *Lista);
    nodo_comentario * iniciar_comentario(nodo_comentario *Lista);
    nodo_noReconocido * iniciar_noReconocido(nodo_noReconocido *Lista);
    nodo_include *iniciar_include(nodo_include *Lista);
    nodo_define * iniciar_define(nodo_define *Lista);

    /*** insertar nodo ***/
    nodo_identificador *insertar_identificador(nodo_identificador *Lista, char *identificador);
    nodo_literalCadena *insertar_literalCadena(nodo_literalCadena *Lista, char *literalCadena, int longitud);
    nodo_palabraReservada *insertar_palabraReservada(nodo_palabraReservada *Lista, char *palabraReservada, char *tipo );
    nodo_constante_decimal *insertar_constante_decimal(nodo_constante_decimal *Lista, char *constante);
    nodo_constante_octal *insertar_constante_octal(nodo_constante_octal *Lista, char *constante);
    nodo_constante_hexadecimal *insertar_constante_hexadecimal(nodo_constante_hexadecimal *Lista, char *constante);
    nodo_constante_real *insertar_constante_real(nodo_constante_real *Lista, char *constante);
    nodo_constante_caracter *insertar_constante_caracter(nodo_constante_caracter *Lista, char *constante);
    nodo_operador_caracter *insertar_operador_caracter(nodo_operador_caracter *Lista, char *operador_caracter);
    nodo_comentario *insertar_comentario(nodo_comentario *Lista, char *comentario, bool unaLinea);
    nodo_noReconocido *insertar_noReconocido(nodo_noReconocido *Lista, char *noReconocido, int linea);
    nodo_include *insertar_include(nodo_include *Lista, char *include);
    nodo_define *insertar_define(nodo_define *Lista, char *define);



    /********************************* funciones listas *********************/

    /*** auxiliares ***/
    int longitudListaIdentificador(nodo_identificador *Lista){
        int contador = 0;
        while(Lista != NULL){
            contador ++;
            Lista = Lista->siguiente;
        }
        return contador;
    }

    int saltosDeLineaEnComentario(char* comentario){
        int saltosDeLinea=0;
        int i =0;
        while(comentario[i]){
            if(comentario[i]== '\n'){
                saltosDeLinea++;
            }
            i++;
        }
        return saltosDeLinea;
    }

    /*** inicializar ***/

    nodo_identificador * iniciar_identificador(nodo_identificador *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_literalCadena * iniciar_literalCadena(nodo_literalCadena *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_palabraReservada * iniciar_palabraReservada(nodo_palabraReservada *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_constante_decimal * iniciar_constante_decimal(nodo_constante_decimal *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_constante_octal * iniciar_constante_octal(nodo_constante_octal *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_constante_real * iniciar_constante_real(nodo_constante_real *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_constante_hexadecimal * iniciar_constante_hexadecimal(nodo_constante_hexadecimal *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_constante_caracter * iniciar_constante_caracter(nodo_constante_caracter *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_operador_caracter * iniciar_operador_caracter(nodo_operador_caracter *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_comentario * iniciar_comentario(nodo_comentario *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_noReconocido * iniciar_noReconocido(nodo_noReconocido *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_include * iniciar_include(nodo_include *Lista){
        
        Lista = NULL;
        return Lista;
    }
    nodo_define * iniciar_define(nodo_define *Lista){
        
        Lista = NULL;
        return Lista;
    }

    /*** insertar ***/
    
    nodo_identificador *insertar_identificador(nodo_identificador *Lista, char *identificador){
        nodo_identificador *nuevoNodo, *auxiliar;
        bool aparicionPrevia = false;
        int comparacion;
        bool corte = false;
        nuevoNodo = (nodo_identificador*) malloc(sizeof(nodo_identificador));
        auxiliar = (nodo_identificador*) malloc(sizeof(nodo_identificador));
        
        
        nuevoNodo->identificador = (char *) calloc(strlen(identificador), sizeof(char));
        auxiliar->identificador = (char *) calloc(strlen(identificador), sizeof(char));
        strcpy(nuevoNodo->identificador,identificador);
        nuevoNodo->apariciones = 1;
        nuevoNodo->siguiente = NULL;

        
        
        
        if (Lista == NULL){
            Lista = nuevoNodo;
            return Lista;
        }else{
            comparacion = strcasecmp(Lista->identificador, identificador);
            
            auxiliar = Lista;


            if(comparacion == 0){
                Lista->apariciones++;
                return Lista;
            }

            if(comparacion > 0){
                nuevoNodo->siguiente = Lista;
                return nuevoNodo;
            }

            if(comparacion < 0 && longitudListaIdentificador(Lista)==1){
                Lista->siguiente = nuevoNodo;
                return Lista;
            }


            while(auxiliar->siguiente != NULL && !aparicionPrevia && !corte){
                comparacion = strcasecmp(auxiliar->siguiente->identificador, identificador);
                
                if(comparacion == 0){ // aca se detecta que no haya otra aparicion previa
                    aparicionPrevia = true;
                }else{
                    if(comparacion > 0){ // aca se detecta que esten ordenados alfabeticamente
                        
                        corte = true;
                    }else{
                        
                        auxiliar = auxiliar->siguiente;
                    }
                }
            }
            
            if(comparacion == 0){
                auxiliar->apariciones++;
            }else{
                
                if(comparacion > 0){
                    
                    nuevoNodo->siguiente = auxiliar->siguiente;
                    auxiliar->siguiente = nuevoNodo;
                }else{
                    auxiliar->siguiente = nuevoNodo;
                }
                
                
            }
        }

        return Lista;
    
    }


    nodo_literalCadena *insertar_literalCadena(nodo_literalCadena *Lista, char *literalCadena, int longitud){

        nodo_literalCadena *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_literalCadena*) malloc(sizeof(nodo_literalCadena));
        auxiliar = (nodo_literalCadena*) malloc(sizeof(nodo_literalCadena));

        nuevoNodo->literalCadena = (char *) calloc(strlen(literalCadena), sizeof(char));
        auxiliar->literalCadena = (char *) calloc(strlen(literalCadena), sizeof(char));
        strcpy(nuevoNodo->literalCadena,literalCadena);
        nuevoNodo->longitud = longitud;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_palabraReservada *insertar_palabraReservada(nodo_palabraReservada *Lista, char *palabraReservada, char *tipo){

        nodo_palabraReservada *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_palabraReservada*) malloc(sizeof(nodo_palabraReservada));
        auxiliar = (nodo_palabraReservada*) malloc(sizeof(nodo_palabraReservada));

        nuevoNodo->palabraReservada = (char *) calloc(strlen(palabraReservada), sizeof(char));
        auxiliar->palabraReservada = (char *) calloc(strlen(palabraReservada), sizeof(char));
        strcpy(nuevoNodo->palabraReservada,palabraReservada);
        nuevoNodo->tipo = (char *) calloc(strlen(tipo), sizeof(char));
        strcpy(nuevoNodo->tipo,tipo);
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_constante_decimal *insertar_constante_decimal(nodo_constante_decimal *Lista, char *constante){

        nodo_constante_decimal *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_constante_decimal*) malloc(sizeof(nodo_constante_decimal));
        auxiliar = (nodo_constante_decimal*) malloc(sizeof(nodo_constante_decimal));

        nuevoNodo->constante = (char *) calloc(strlen(constante), sizeof(char));
        auxiliar->constante = (char *) calloc(strlen(constante), sizeof(char));
        strcpy(nuevoNodo->constante,constante);
        
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_constante_octal *insertar_constante_octal(nodo_constante_octal *Lista, char *constante){

        nodo_constante_octal *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_constante_octal*) malloc(sizeof(nodo_constante_octal));
        auxiliar = (nodo_constante_octal*) malloc(sizeof(nodo_constante_octal));

        nuevoNodo->constante = (char *) calloc(strlen(constante), sizeof(char));
        auxiliar->constante = (char *) calloc(strlen(constante), sizeof(char));
        strcpy(nuevoNodo->constante,constante);
        
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_constante_hexadecimal *insertar_constante_hexadecimal(nodo_constante_hexadecimal *Lista, char *constante){

        nodo_constante_hexadecimal *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_constante_hexadecimal*) malloc(sizeof(nodo_constante_hexadecimal));
        auxiliar = (nodo_constante_hexadecimal*) malloc(sizeof(nodo_constante_hexadecimal));

        nuevoNodo->constante = (char *) calloc(strlen(constante), sizeof(char));
        auxiliar->constante = (char *) calloc(strlen(constante), sizeof(char));
        strcpy(nuevoNodo->constante,constante);
        
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_constante_real *insertar_constante_real(nodo_constante_real *Lista, char *constante){

        nodo_constante_real *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_constante_real*) malloc(sizeof(nodo_constante_real));

        nuevoNodo->constante = (char *) calloc(strlen(constante), sizeof(char));
        strcpy(nuevoNodo->constante,constante);
        
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_constante_caracter *insertar_constante_caracter(nodo_constante_caracter *Lista, char *constante){

        nodo_constante_caracter *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_constante_caracter*) malloc(sizeof(nodo_constante_caracter));
        auxiliar = (nodo_constante_caracter*) malloc(sizeof(nodo_constante_caracter));

        nuevoNodo->constante = (char *) calloc(strlen(constante), sizeof(char));
        auxiliar->constante = (char *) calloc(strlen(constante), sizeof(char));
        strcpy(nuevoNodo->constante,constante);
        
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_operador_caracter *insertar_operador_caracter(nodo_operador_caracter *Lista, char *operador_caracter){

        

        nodo_operador_caracter *nuevoNodo;
        nodo_operador_caracter *auxiliar;
        nuevoNodo = (nodo_operador_caracter*) malloc(sizeof(nodo_operador_caracter)+10);
        auxiliar = (nodo_operador_caracter*) malloc(sizeof(nodo_operador_caracter)+10);
        bool aparicionPrevia = false;
        int comparacion;
        bool corte = false;
        
        
        nuevoNodo->operador_caracter = (char *) calloc(strlen(operador_caracter), sizeof(char));
        auxiliar->operador_caracter = (char *) calloc(strlen(operador_caracter), sizeof(char));
        strcpy(nuevoNodo->operador_caracter,operador_caracter);
        nuevoNodo->apariciones = 1;
        nuevoNodo->siguiente = NULL;

        
        
        
        if (Lista == NULL){
            Lista = nuevoNodo;
            return Lista;
        }else{
            comparacion = strcasecmp(Lista->operador_caracter, operador_caracter);
            
            auxiliar = Lista;


            if(comparacion == 0){
                Lista->apariciones++;
                return Lista;
            }



            while(auxiliar->siguiente != NULL && !aparicionPrevia && !corte){
                comparacion = strcasecmp(auxiliar->siguiente->operador_caracter, operador_caracter);
                
                if(comparacion == 0){ // aca se detecta que no haya otra aparicion previa
                    aparicionPrevia = true;
                }else{
                    if(comparacion > 0){ // aca se detecta que esten ordenados alfabeticamente
                        
                        corte = true;
                    }else{
                        
                        auxiliar = auxiliar->siguiente;
                    }
                }
            }
            
            if(comparacion == 0){
                auxiliar->apariciones++;
            }else{
                
                if(comparacion > 0){
                    
                    nuevoNodo->siguiente = auxiliar->siguiente;
                    auxiliar->siguiente = nuevoNodo;
                }else{
                    auxiliar->siguiente = nuevoNodo;
                }
                
                
            }
        }

        return Lista;


        
    
    }


    nodo_comentario *insertar_comentario(nodo_comentario *Lista, char *comentario, bool unaLinea){

        nodo_comentario *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_comentario*) malloc(sizeof(nodo_comentario));
        auxiliar = (nodo_comentario*) malloc(sizeof(nodo_comentario));

        nuevoNodo->comentario = (char *) calloc(strlen(comentario), sizeof(char));
        auxiliar->comentario = (char *) calloc(strlen(comentario), sizeof(char));
        strcpy(nuevoNodo->comentario,comentario);
        nuevoNodo->unaLinea = unaLinea;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_noReconocido *insertar_noReconocido(nodo_noReconocido *Lista, char *noReconocido, int linea){

        nodo_noReconocido *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_noReconocido*) malloc(sizeof(nodo_noReconocido));
        auxiliar = (nodo_noReconocido*) malloc(sizeof(nodo_noReconocido));
        nuevoNodo->noReconocido = (char *) calloc(strlen(noReconocido), sizeof(char));
        auxiliar->noReconocido = (char *) calloc(strlen(noReconocido), sizeof(char));
        strcpy(nuevoNodo->noReconocido,noReconocido);
        nuevoNodo->linea = linea;
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_include *insertar_include(nodo_include *Lista, char *include){

        nodo_include *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_include*) malloc(sizeof(nodo_include));
        auxiliar = (nodo_include*) malloc(sizeof(nodo_include));
        nuevoNodo->include = (char *) calloc(strlen(include), sizeof(char));
        auxiliar->include = (char *) calloc(strlen(include), sizeof(char));
        strcpy(nuevoNodo->include,include);
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }


    nodo_define *insertar_define(nodo_define *Lista, char *define){

        nodo_define *nuevoNodo, *auxiliar;
        nuevoNodo = (nodo_define*) malloc(sizeof(nodo_define));
        auxiliar = (nodo_define*) malloc(sizeof(nodo_define));
        nuevoNodo->define = (char *) calloc(strlen(define), sizeof(char));
        auxiliar->define = (char *) calloc(strlen(define), sizeof(char));
        strcpy(nuevoNodo->define,define);
        nuevoNodo->siguiente = NULL;
        

        if (Lista == NULL){
            Lista = nuevoNodo;
        }else{
            auxiliar = Lista;
            while(auxiliar->siguiente != NULL){
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevoNodo;
            
        }

        return Lista;
    
    }

    /*** mostrar listas por pantalla **/
    void mostrarIdentificadores(nodo_identificador *ListaIdentificadores){
        
        nodo_identificador *auxiliar;
        if (ListaIdentificadores == NULL){
            printf("No hay identificadores para mostrar\n");
        }else{
            printf("Listado de identificadores: \n\n");
            auxiliar = ListaIdentificadores;
            while(auxiliar->siguiente != NULL){
                printf("Identificador: %s \n", auxiliar->identificador);
                printf("apariciones: %d \n", auxiliar->apariciones);
                auxiliar = auxiliar->siguiente;
            }
            printf("Identificador: %s \n", auxiliar->identificador);
            printf("apariciones: %d \n \n \n", auxiliar->apariciones);
        }
        
        return;
    }
    void mostrarLiteralCadena(nodo_literalCadena *ListaLiteralCadena){

        nodo_literalCadena *auxiliar;

        if (ListaLiteralCadena == NULL){
            printf("No hay LiteralCadena para mostrar \n");
        }else{
            printf("Listado de literales cadena:\n \n");
            auxiliar = ListaLiteralCadena;
            while(auxiliar->siguiente != NULL){
                printf("Literal Cadena: %s \n", auxiliar->literalCadena);
                printf("Longitud: %d \n", auxiliar->longitud);
                auxiliar = auxiliar->siguiente;
            }
            printf("Literal Cadena: %s \n", auxiliar->literalCadena);
            printf("Longitud: %d \n \n \n", auxiliar->longitud);
        }

        return;
    }
    void mostrarPalabraReservada(nodo_palabraReservada *ListaPalabraReservada){
        
        nodo_palabraReservada *auxiliar;
        if (ListaPalabraReservada == NULL){
            printf("No hay PalabraReservada para mostrar \n");
        }else{
            printf("Listado de palabras Reservadas: \n \n");
            auxiliar = ListaPalabraReservada;
            while(auxiliar->siguiente != NULL){
                printf("PalabraReservada: %s \n", auxiliar->palabraReservada);
                printf("Tipo: %s \n", auxiliar->tipo);
                auxiliar = auxiliar->siguiente;
            }
            printf("PalabraReservada: %s \n", auxiliar->palabraReservada);
            printf("Tipo: %s \n \n \n", auxiliar->tipo);
        }

        return;
    }
    void mostrarConstanteDecimal(nodo_constante_decimal *ListaConstanteDecimal){
        nodo_constante_decimal *auxiliar;
        int suma = 0;
        if (ListaConstanteDecimal == NULL){
            printf("No hay Constantes Decimales para mostrar \n");
        }else{
            printf("Listado de constantes decimales \n \n");
            auxiliar = ListaConstanteDecimal;
            while(auxiliar->siguiente != NULL){
                printf("Constante Decimal: %s \n", auxiliar->constante);
                suma += atoi(auxiliar->constante);
                auxiliar = auxiliar->siguiente;
            }
            printf("ConstanteDecimal: %s \n", auxiliar->constante);
            suma += atoi(auxiliar->constante);
            printf("sumatoria de las constantes: %d \n \n \n", suma);
        }

        return;
    }
    void mostrarConstanteOctal(nodo_constante_octal *ListaConstantesOctales){
        nodo_constante_octal *auxiliar;
        
        if (ListaConstantesOctales == NULL){
            printf("No hay Constantes Octales para mostrar \n");
        }else{
            printf("Listado de constantes octales: \n \n");
            auxiliar = ListaConstantesOctales;
            while(auxiliar->siguiente != NULL){
                printf("Constante Octal: %d \n", strtol(auxiliar->constante, NULL, 8));
                
                auxiliar = auxiliar->siguiente;
            }
            printf("Constante Octal: %d \n \n \n", strtol(auxiliar->constante, NULL, 8));
        }

        return;
    }
    void mostrarConstanteHexadecimal(nodo_constante_hexadecimal *ListaConstantesOctales){
        nodo_constante_hexadecimal *auxiliar;
        
        if (ListaConstantesOctales == NULL){
            printf("No hay Constantes Hexadecimales para mostrar \n");
        }else{
            printf("Listado de constantes hexadecimales \n \n");
            auxiliar = ListaConstantesOctales;
            while(auxiliar->siguiente != NULL){
                printf("Constante Hexadecimal original: %s \n", auxiliar->constante);
                printf("Constante Hexadecimal en valor decimal: %d \n", strtol(auxiliar->constante, NULL, 16));
                auxiliar = auxiliar->siguiente;
            }
            printf("Constante Hexadecimal original: %s \n", auxiliar->constante);
            printf("Constante Hexadecimal en valor decimal: %d \n \n \n", strtol(auxiliar->constante, NULL, 16));
        }

        return;
    }
    void mostrarConstanteReal(nodo_constante_real *ListaConstantesOctales){
        nodo_constante_real *auxiliar;
        double constante_real;
        int parte_entera;
        double mantisa;
        
        if (ListaConstantesOctales == NULL){
            printf("No hay Constantes Reales para mostrar \n");
        }else{
            printf("Listado de constantes reales \n \n");
            auxiliar = ListaConstantesOctales;
            while(auxiliar->siguiente != NULL){
                constante_real = atof(auxiliar->constante);
                parte_entera = (int) parte_entera;
                mantisa = constante_real - parte_entera;
                printf("Constante Real original: %f \n", constante_real);
                printf("Mantisa de la constante: %f \n", mantisa);
                printf("Parte entera: %d \n", parte_entera);
                auxiliar = auxiliar->siguiente;
            }
            constante_real = atof(auxiliar->constante);
            parte_entera = (int) constante_real;
            mantisa = constante_real - parte_entera;
            printf("Constante Real original: %f \n", constante_real);
            printf("Mantisa de la constante: %f \n", mantisa);
            printf("Parte entera: %d \n \n \n", parte_entera);
        }

        return;
    }
    void mostrarConstanteCaracter(nodo_constante_caracter *ListaConstantesCaracteres){
        nodo_constante_caracter *auxiliar;
        int contador = 0;
        printf("Lista de constantes Caracter: \n\n");
        if (ListaConstantesCaracteres == NULL){
            printf("No hay Constantes Caracter para mostrar \n");
        }else{
            printf("Listado de constantes caracter: \n \n");
            auxiliar = ListaConstantesCaracteres;
            while(auxiliar->siguiente != NULL){
                contador ++;
                printf("%d_  %s \n", contador, auxiliar->constante);
                auxiliar = auxiliar->siguiente;
            }
            contador++;
            printf("%d_  %s \n \n \n", contador, auxiliar->constante);
        }

        return;
    }
    void mostrarOperadorCaracter(nodo_operador_caracter *ListaOperadores){
        nodo_operador_caracter *auxiliar;
        
        if (ListaOperadores == NULL){
            printf("No hay Caracteres de Puntuacion para mostrar \n");
        }else{
            printf("Listado de caracteres de puntuacion \n \n");
            auxiliar = ListaOperadores;
            while(auxiliar->siguiente != NULL){
                
                printf("Caracter de Puntuacion: %s \n", auxiliar->operador_caracter);
                printf("Repeticiones: %d \n", auxiliar->apariciones);
                auxiliar = auxiliar->siguiente;
            }

            printf("Caracter de Puntuacion: %s \n", auxiliar->operador_caracter);
            printf("Repeticiones: %d \n\n\n", auxiliar->apariciones);
        }

        return;
    }
    void mostrarComentario(nodo_comentario *ListaComentarios){
        nodo_comentario *auxiliar;

        if (ListaComentarios == NULL){
            printf("No hay Comentarios para mostrar \n");
        }else{
            printf("Listado de comentarios: \n \n");
            auxiliar = ListaComentarios;
            while(auxiliar->siguiente != NULL){
                if(auxiliar->unaLinea){
                    printf("Comentario de una Linea \n");
                }else{
                    printf("Comentario de Multiples Lineas: \n");
                }
                
                printf("%s \n", auxiliar->comentario);
                auxiliar = auxiliar->siguiente;
            }

            if(auxiliar->unaLinea){
                    printf("Comentario de una Linea \n");
            }else{
                printf("Comentario de Multiples Lineas: \n");
            }
            
            printf("%s \n \n \n", auxiliar->comentario);
        }

        return;
    }
    void mostrarNoReconocido(nodo_noReconocido *ListaNoReconocidos){
        nodo_noReconocido *auxiliar;

        if (ListaNoReconocidos == NULL){
            printf("No hay cadenas no reconocidas para mostrar \n");
        }else{
            printf("Listado de caracteres no reconocidos:\n \n");
            auxiliar = ListaNoReconocidos;
            while(auxiliar->siguiente != NULL){
                
                
                printf("Cadena No reconocida: %s \n", auxiliar->noReconocido);
                printf("encontrada en linea: %d \n", auxiliar->linea);
                auxiliar = auxiliar->siguiente;
            }

            printf("Cadena No reconocida: %s \n", auxiliar->noReconocido);
            printf("encontrada en linea: %d \n\n \n", auxiliar->linea);
        }

        return;
    }
    void mostrarInclude(nodo_include *ListaInclude){
        nodo_include *auxiliar;

        if (ListaInclude == NULL){
            printf("No hay #includes para mostrar \n");
        }else{
            printf("Lista de directivas #include:\n \n");
            auxiliar = ListaInclude;
            while(auxiliar->siguiente != NULL){

                printf("#Include: %s \n", auxiliar->include);

                auxiliar = auxiliar->siguiente;
            }

            printf("#Include: %s \n\n \n", auxiliar->include);
        }

        return;
    }
    void mostrarDefine(nodo_define *ListaDefine){
        nodo_define *auxiliar;

        if (ListaDefine == NULL){
            printf("No hay #defines para mostrar \n");
        }else{
            printf("Lista de directivas #define");
            auxiliar = ListaDefine;
            while(auxiliar->siguiente != NULL){

                printf("#Define: %s \n", auxiliar->define);

                auxiliar = auxiliar->siguiente;
            }

            printf("#Define: %s \n", auxiliar->define);
        }

        return;
    }
    /*************************************** GENERAR INFORME **********************************/


    void generarInforme(nodo_identificador *ListaIdentificadores, nodo_literalCadena *ListaLiteralesCadena, nodo_palabraReservada *ListaPalabrasReservadas, nodo_constante_decimal *ListaConstanteDecimal, nodo_constante_octal *ListaConstantesOctales, nodo_constante_hexadecimal *ListaConstantesHexaDecimales, nodo_constante_real *ListaConstantesReales, nodo_constante_caracter *ListaConstantesCaracteres, nodo_operador_caracter *ListaOperadores, nodo_comentario *ListaComentarios, nodo_noReconocido *ListaNoReconocidos, nodo_include *ListaInclude, nodo_define *ListaDefine){
        
        printf("\n************************** Reporte *************************\n\n\n");
        
        mostrarIdentificadores (ListaIdentificadores);
        printf("**************************************\n");
        mostrarLiteralCadena( ListaLiteralesCadena);
        printf("**************************************\n");
        mostrarPalabraReservada(ListaPalabrasReservadas);
        printf("**************************************\n");
        mostrarConstanteDecimal(ListaConstanteDecimal);
        printf("**************************************\n");
        mostrarConstanteOctal(ListaConstantesOctales);
        printf("**************************************\n");
        mostrarConstanteHexadecimal(ListaConstantesHexaDecimales);
        printf("**************************************\n");
        mostrarConstanteReal(ListaConstantesReales);
        printf("**************************************\n");
        mostrarConstanteCaracter(ListaConstantesCaracteres);
        printf("**************************************\n");
        mostrarOperadorCaracter(ListaOperadores);
        printf("**************************************\n");
        mostrarComentario(ListaComentarios);
        printf("**************************************\n");
        mostrarDefine(ListaDefine);
        printf("**************************************\n");
        mostrarInclude(ListaInclude);
        printf("**************************************\n");
        mostrarNoReconocido(ListaNoReconocidos);
        printf("**************************************\n");



        return;
    }


    /*************************************** VARIABLES GLOBALES ******************************/
    /* inicia listas */
    nodo_identificador *ListaIdentificadores;
    nodo_literalCadena *ListaLiteralesCadena;
    nodo_palabraReservada *ListaPalabrasReservadas;
    nodo_constante_decimal *ListaConstantesDecimales;
    nodo_constante_octal *ListaConstantesOctales;
    nodo_constante_hexadecimal *ListaConstantesHexaDecimales;
    nodo_constante_real *ListaConstantesReales;
    nodo_constante_caracter *ListaConstantesCaracteres;
    nodo_operador_caracter *ListaOperadores;
    nodo_comentario *ListaComentarios;
    nodo_noReconocido *ListaNoReconocidos;
    nodo_include *ListaInclude;
    nodo_define *ListaDefine;

    int linea = 1;

%}





PALABRA_RESERVADA_TIPO_DATO (char|double|enum|float|int|long|short|signed|unsigned)
PALABRA_RESERVADA_CONTROL (break|case|continue|default|do|else|for|goto|if|return|struct|switch|void|while)
PALABRA_RESERVADA_OTRO (auto|const|extern|register|sizeof|static|typedef|union|volatile)



CADENA_CARACTERES [^"\\]
CARACTERES_COMENTARIO_MULTIPLES_LINEAS [^(*/)]
CARACTERES_UNA_LINEA [^\n]
CARACTERES_INCLUDE [^"\n]
IDENTIFICADOR [a-zA-Z_][a-zA-Z0-9_]*
ESPACIOS ([ ])+
ESPACIOS_OPCIONALES ([ ])*




ENTERA_DECIMAL [1-9][0-9]*
ENTERA_OCTAL 0[0-7]*
ENTERA_HEXA 0[xX][0-9a-fA-F]+
SUFIJO_ENTERO ([Uu][Ll]?|[Ll][Uu]?)



CONSTANTE_REAL ({CONSTANTE_FRACCION}{PARTE_EXPONENTE}?{SUFIJO_REAL}?|{SECUENCIA_DIGITOS}{PARTE_EXPONENTE}{SUFIJO_REAL}?)
CONSTANTE_FRACCION ({SECUENCIA_DIGITOS}?\.{SECUENCIA_DIGITOS}|{SECUENCIA_DIGITOS}\.)
SECUENCIA_DIGITOS [0-9]+
PARTE_EXPONENTE [Ee][+-]?{SECUENCIA_DIGITOS}
SUFIJO_REAL [FfLl]



CARACTER ([^'\\]|{SECUENCIA_ESCAPE})
SECUENCIA_ESCAPE ({ESCAPE_SIMPLE}|{ESCAPE_OCTAL}|{ESCAPE_HEXA})
ESCAPE_SIMPLE (\\'|\\\"|\\\?|\\\\|\\a|\\b|\\f|\\n|\\r|\\t|\\v)
ESCAPE_OCTAL \\[0-7]{1,3}
ESCAPE_HEXA \\x[0-9a-fA-F]{1,2}

CARACTER_PUNTUACION (\[|\]|\(|\)|\{|\}|\.|->|\+\+|--|&|\*|\+|-|!|\/|%|<<|>>|<|>|<=|>=|==|!=|\ˆ|\||&&|\|\||=|\*=|\/=|%=|\+=|-=|<<=|>>=|&=|\ˆ=|\|=|\?|:|;|\.\.\.|,|#|##)






%%


'{CARACTER}'/.* {ListaConstantesCaracteres = insertar_constante_caracter(ListaConstantesCaracteres, yytext);}

{CONSTANTE_REAL}/.* {ListaConstantesReales = insertar_constante_real(ListaConstantesReales, yytext);}

{PALABRA_RESERVADA_TIPO_DATO}/.* {ListaPalabrasReservadas = insertar_palabraReservada(ListaPalabrasReservadas, yytext, "Dato");}
{PALABRA_RESERVADA_CONTROL}/.* {ListaPalabrasReservadas = insertar_palabraReservada(ListaPalabrasReservadas, yytext, "Control");}
{PALABRA_RESERVADA_OTRO}/.* {ListaPalabrasReservadas = insertar_palabraReservada(ListaPalabrasReservadas, yytext, "Otros");}

{IDENTIFICADOR}/.* {ListaIdentificadores = insertar_identificador(ListaIdentificadores, yytext);}

{ENTERA_DECIMAL}{SUFIJO_ENTERO}?/.* {ListaConstantesDecimales = insertar_constante_decimal(ListaConstantesDecimales, yytext);}
{ENTERA_OCTAL}{SUFIJO_ENTERO}?/.* {ListaConstantesOctales = insertar_constante_octal(ListaConstantesOctales, yytext);}
{ENTERA_HEXA}{SUFIJO_ENTERO}?/.* {ListaConstantesHexaDecimales = insertar_constante_hexadecimal(ListaConstantesHexaDecimales, yytext);}

\"({CADENA_CARACTERES}|{SECUENCIA_ESCAPE})+\"/.* {ListaLiteralesCadena = insertar_literalCadena(ListaLiteralesCadena, yytext, yyleng);}

(\[|\]|\(|\)|\{|\}|\.|->|\+\+|--|&|\*|\+|-|!|\/|%|<<|>>|<|>|<=|>=|==|!=|\ˆ|\||&&|\|\||=|\*=|\/=|%=|\+=|-=|<<=|>>=|&=|\ˆ=|\|=|\?|:|;|\.\.\.|,|#|##) {ListaOperadores = insertar_operador_caracter(ListaOperadores, yytext);}

\/\/{CARACTERES_UNA_LINEA}*/.* {ListaComentarios = insertar_comentario(ListaComentarios, yytext, true);}
\/\*{CARACTERES_COMENTARIO_MULTIPLES_LINEAS}*\*\//.* {ListaComentarios = insertar_comentario(ListaComentarios, yytext, false); linea = saltosDeLineaEnComentario(yytext) + linea;}


#include{ESPACIOS}(\"|<){CARACTERES_INCLUDE}*(\"|>)/.* {ListaInclude = insertar_include(ListaInclude, yytext);}

#define{ESPACIOS}{IDENTIFICADOR}\({ESPACIOS_OPCIONALES}{IDENTIFICADOR}{ESPACIOS_OPCIONALES}(,{ESPACIOS_OPCIONALES}{IDENTIFICADOR}{ESPACIOS_OPCIONALES}*\)){ESPACIOS_OPCIONALES}[^\n ](\n)?.*/.* {ListaDefine = insertar_define(ListaDefine, yytext);linea = saltosDeLineaEnComentario(yytext) + linea;}

#define{ESPACIOS}{IDENTIFICADOR}{ESPACIOS}.+/.* {ListaDefine = insertar_define(ListaDefine, yytext);}

\n {linea++;}


[^\n \[\]\(\)\{\}\.(\->)(\+\+)(\-\-)&\*\+\-!\/%(<<)(>>)<>(<=)(>=)(==)(!=)\ˆ\|(&&)(\|\|)=(\*=)(\/=)(%=)(\+=)(\-=)(<<=)(>>=)(&=)(\ˆ=)(\|=)\?:;(\.\.\.),#(##)]+/(\[|\]|\(|\)|\{|\}|\.|->|\+\+|--|&|\*|\+|-|!|\/|%|<<|>>|<|>|<=|>=|==|!=|\ˆ|\||&&|\|\||=|\*=|\/=|%=|\+=|-=|<<=|>>=|&=|\ˆ=|\|=|\?|:|;|\.\.\.|,|#|##) {ListaNoReconocidos = insertar_noReconocido(ListaNoReconocidos, yytext, linea);}


%%


int main (){

    /* inicia listas */
    ListaIdentificadores = iniciar_identificador(ListaIdentificadores);
    ListaLiteralesCadena = iniciar_literalCadena(ListaLiteralesCadena);
    ListaPalabrasReservadas = iniciar_palabraReservada(ListaPalabrasReservadas);
    ListaConstantesDecimales = iniciar_constante_decimal(ListaConstantesDecimales);
    ListaConstantesOctales = iniciar_constante_octal(ListaConstantesOctales);
    ListaConstantesHexaDecimales = iniciar_constante_hexadecimal(ListaConstantesHexaDecimales);
    ListaConstantesReales = iniciar_constante_real(ListaConstantesReales);
    ListaConstantesCaracteres = iniciar_constante_caracter(ListaConstantesCaracteres);
    ListaOperadores = iniciar_operador_caracter(ListaOperadores);
    ListaComentarios = iniciar_comentario(ListaComentarios);
    ListaNoReconocidos = iniciar_noReconocido(ListaNoReconocidos);
    ListaInclude = iniciar_include(ListaInclude);



    yyin = fopen("archivo.c", "r");
    yylex();
    generarInforme(ListaIdentificadores, ListaLiteralesCadena, ListaPalabrasReservadas, ListaConstantesDecimales, ListaConstantesOctales, ListaConstantesHexaDecimales, ListaConstantesReales, ListaConstantesCaracteres, ListaOperadores, ListaComentarios, ListaNoReconocidos, ListaInclude, ListaDefine);

    return 0;
}
