//
// Created by Fran on 23/05/2024.
//
#include "stdio.h"
#include "stdlib.h"
#include "helper.h"
#include "string.h"
Nodo *newNodo(int num)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Error\n");
        return NULL;
    }else
    {
        aux->num=num;
        aux->sig=NULL;
        return aux;
    }

}
Lista *newLista()
{
    Lista *aux=malloc(sizeof(Lista));
    if(aux==NULL)
    {
        printf("Error\n");
        return NULL;
    }else
    {
        aux->cab=NULL;
        return aux;
    }
}
void agregarDato(Nodo *nodoAI,Lista *lista)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
    {
        Nodo *aux=lista->cab;
        while (aux->sig!=NULL)
        {
            aux=aux->sig;
        }
        aux->sig=nodoAI;
    }
}
void imprimirLista(Lista *lista)
{

    Nodo *aux=lista->cab;
    printf("\nLista:\n");
    while(aux!=NULL)
    {
        printf("%d,",aux->num);
        aux=aux->sig;
    }
}
void buscarNro(Lista *lista,int NroAbuscar)
{
    Nodo *act=lista->cab;
    int cont=0;
    while (act!=NULL)
    {
        if (act->num==NroAbuscar)
        {
            if(cont==0)
            {
                printf("\nExiste el nro en lista\n");
            }
            cont++;
        }
        act=act->sig;
    }
    printf("\nAparece el nro buscado %d veces\n",cont);
}