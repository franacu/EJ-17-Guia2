//
// Created by Fran on 23/05/2024.
//

#ifndef EJ17_GUIA2_HELPER_H
#define EJ17_GUIA2_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo *sig;
}Nodo;
typedef struct Lista
{
    Nodo *cab;
}Lista;

Nodo *newNodo(int num);
Lista *newLista();
void agregarDato(Nodo *nodoAI,Lista *lista);
void buscarNro(Lista *lista,int NroAbuscar);
void imprimirLista(Lista *lista);



#endif //EJ17_GUIA2_HELPER_H
