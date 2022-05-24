#ifndef __PILA_H__
#define __PILA_H__
#include "Nodo.h"

struct _pila
{
    Nodo* cima; //head o tail
    Nodo* fondo; //head o tail
    int lon;//Longitud y numero de datos de la pila
};

typedef struct _pila pila;

pila* pila_vacia();
bool push(pila*,DATA);//RECIBE UN APUNTADOR A LA `PILA
DATA pop(pila*);
DATA top(pila*);
bool es_vacia(pila *);
int cuantos(pila*);
bool anular(pila*);


#endif 