#include "Nodo.h"
#include <stdlib.h>

/**
 * @brief CREAR NODO :
 * Es capaz de crear un nodo, un espacio para un elemento.
 * 
 * @param d 
 * @return Nodo* 
 */
Nodo *crear_nodo(Data d){
    Nodo *n = (Nodo*)malloc(sizeof(Nodo));
    n->dato = d;
    //elemento anterior a n
    n->ant = NULL;
    //elemento posterior a n
    n->sig = NULL;
    return n;
}

void borrar_nodo(Nodo *n){
    if(n->sig == NULL){
        free(n);
    }
}

void actualizar_nodo(Nodo *n, Data d){
    if(n != NULL){
        n->dato = d;
    }
}
