#ifndef __LISTA_DE_H__
#define __LISTA_DE_H__
#include "Nodo.h"
#include <stdbool.h>

typedef struct Lista{
    Nodo *head;
    Nodo *tail;
    int num;
}ListaDE;

ListaDE *crear_lista();
void borrar_lista(ListaDE *l);

void insertar_head(ListaDE *l, Data d);
void insertar_tail(ListaDE *l, Data d);

void eliminar_head(ListaDE *l);
void eliminar_tail(ListaDE *l);


Nodo *buscar(ListaDE *l, Data d);
void imprimir(ListaDE *l);

#endif