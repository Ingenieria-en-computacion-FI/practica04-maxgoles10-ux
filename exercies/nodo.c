#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 1 */
Nodo* crearNodo(int valor){
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));

    if(nuevo == NULL){
        return NULL;
    }

    nuevo->dato = valor;
    nuevo->sig = NULL;

    return nuevo;
}

/* Ejercicio 2 */
Nodo* crearArregloNodos(int n){
    Nodo* arreglo = (Nodo*)calloc(n, sizeof(Nodo));
    return arreglo;
}

/* Ejercicio 3 */
Nodo* agregarNodo(Nodo* arreglo, int* n, int valor){
    Nodo* temp = realloc(arreglo, (*n + 1) * sizeof(Nodo));

    if(temp == NULL){
        return arreglo;
    }

    arreglo = temp;

    arreglo[*n].dato = valor;
    arreglo[*n].sig = NULL;

    (*n)++;

    return arreglo;
}

/* Ejercicio 4 */
void liberarNodos(Nodo* arreglo, int n){
    free(arreglo);
}

/* Ejercicio 5 */
Nodo* construirTresNodos(){
    Nodo* nodo1 = crearNodo(1);
    Nodo* nodo2 = crearNodo(2);
    Nodo* nodo3 = crearNodo(3);

    nodo1->sig = nodo2;
    nodo2->sig = nodo3;
    nodo3->sig = NULL;

    return nodo1;
}

/* Ejercicio 6 */
int contarNodos(Nodo* inicio){
    int contador = 0;

    while(inicio != NULL){
        contador++;
        inicio = inicio->sig;
    }

    return contador;
}

/* Ejercicio 7 */
Nodo* crearNodosPorEntrada(){
    int valor;
    Nodo* inicio = NULL;
    Nodo* actual = NULL;

    printf("Ingresa numeros (-1 para terminar): ");

    while(1){

        scanf("%d",&valor);

        if(valor == -1){
            break;
        }

        Nodo* nuevo = crearNodo(valor);

        if(inicio == NULL){
            inicio = nuevo;
            actual = nuevo;
        }
        else{
            actual->sig = nuevo;
            actual = nuevo;
        }
    }

    return inicio;
}
