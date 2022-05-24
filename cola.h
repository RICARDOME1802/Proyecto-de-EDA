#ifndef __COLA_H__
#define __COLA_H__
#include "Nodo.h"
#include <stdbool.h>

struct _cola
{
    Nodo* _frente;
    Nodo* _final;
    int lon;
};
typedef struct _cola cola;

cola* cola_vacia();
bool encolar(cola*,Data);//RECIBE UN APUNTADOR A LA `PILA
Data desencolar(cola*);
Data primero(cola*);
bool es_vacia(cola *);
int cuantos(cola*);
bool anular(cola*);

#endif 