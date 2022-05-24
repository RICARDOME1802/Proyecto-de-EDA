#include "ListaDE.h"
#include "Nodo.h"
#include <stdio.h>
#include <stdlib.h>

ListaDE *crear_lista(){
    ListaDE *l = (ListaDE*)malloc(sizeof(ListaDE));
    l->head = NULL;
    l->tail = NULL;
    l->num = 0;
    return l;
}

void borrar_lista(ListaDE *l){
    Nodo *tmp = l->head;
    while(l->head != 0){
        l->head = l->head->sig;
        free(tmp); 
        tmp = l->head;
        l->num--;
    }
    free(l);
}

void insertar_head(ListaDE *l, Data d){
    Nodo* newnodo = crear_nodo(d);
    newnodo->sig = l->head;
    l->head = newnodo;
    return;
}

void insertar_tail(ListaDE *l, Data d){
    Nodo* newnodo = crear_nodo(d);
    newnodo = l->tail;
    l->tail = newnodo;
    return;
}


void eliminar_head(ListaDE *l){
    Nodo *tmp = l->head;
    if(tmp != NULL) {
        l->head = l->head->sig;
        borrar_nodo(tmp);
    }
}

void eliminar_tail(ListaDE *l){
    Nodo *tmp = l->head->sig;
    if(tmp != NULL){
        l->head->sig = l->head->sig->sig;
        borrar_nodo(tmp);
    }
}

Nodo *buscar(ListaDE *l, Data d){
    Nodo *tmp = l->head;
    while(tmp != NULL){
        if(tmp->dato==d) return tmp;
        tmp = tmp->sig;
    }
    return NULL;
}

void imprimir(ListaDE *l){
    if(l != NULL){
        printf("[ ");
        for(Nodo *tmp=l->head; tmp!=NULL; tmp =tmp->sig){
            printf("%d ", tmp->dato);
        }
        printf("]\n");
    }else{
        printf("NO HAY LISTA QUE MOSTRAR\n");
    }
}