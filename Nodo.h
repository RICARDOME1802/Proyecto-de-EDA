#ifndef __NODO_H__
#define __NODO_H__

typedef int Data;

typedef struct Nodo{
    Data dato;
    struct Nodo *sig;
    struct Nodo *ant;
} Nodo;
//Definida en una sola instruccion la estructura;

Nodo *crear_nodo(Data d);
void borrar_nodo(Nodo *n);
void actualizar_nodo(Nodo *n, Data d);

#endif