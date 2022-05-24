#include "lista_lig.h"
#include <stdio.h>
#include <stdlib.h>

Lista *crear_lista(){
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->head = NULL;
    l->tail = NULL;
    l->num = 0;
    return l;
}

void borrar_lista(Lista *l){
    Nodo *tmp = l->head;
    while(l->num != 0){
        l->head = l->head->sig;
        free(tmp); 
        tmp = l->head;
        l->num--;
    }
    free(l);
}

void insertar(Lista *l, Data d){
    // - DEBE DE SER INSERTADO AL INICIO DE LA LISTA
    // - head (como apuntador) debe apuntar al nodo que se quiere insertar.
    Nodo* newnodo = crear_nodo(d);
    newnodo->sig = l->head;
    l->head = newnodo;
    l->num++;
    return;
}

void eliminar(Lista *l, Data d){
    Nodo *tmp = l->head;
    Nodo *ant = NULL;
    while(tmp != NULL){
        if(tmp->dato==d){
            //Cuando se borra el primer nodo ant = NULL
            ant = NULL;
            return;
        }
        ant = tmp;
        tmp = tmp->sig;
    }
    return;
}

Nodo *buscar(Lista *l, Data d){
    Nodo *tmp = l->head;
    while(tmp != NULL){
        if(tmp->dato==d) return tmp;
        tmp = tmp->sig;
    }
    return NULL;
}

void imprimir(Lista *l){
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
