
#include "helper.h"


int main()
{
    Nodo *n1= newNodo(1);
    Nodo *n2= newNodo(4);
    Nodo *n3= newNodo(5);
    Nodo *n4= newNodo(3);
    Nodo *n5= newNodo(5);
    Nodo *n6= newNodo(6);

    Lista *lista1=newLista();


    agregarDato(n1,lista1);
    agregarDato(n2,lista1);
    agregarDato(n3,lista1);
    agregarDato(n4,lista1);
    agregarDato(n5,lista1);
    agregarDato(n6,lista1);
    imprimirLista(lista1);

    buscarNro(lista1,5);




    return 0;
}