#ifndef __LISTA_LIG_H__
#define __LISTA_LIG_H__
#include "Nodo.h"
#include <stdbool.h>

typedef struct Lista{
    Nodo *head;
    Nodo *tail;
    int num;
}Lista;

Lista *crear_lista();
void borrar_lista(Lista *l);
void insertar(Lista *l, Data d);
void eliminar(Lista *l, Data d);
Nodo *buscar(Lista *l, Data d);
void imprimir(Lista *l);

#endif