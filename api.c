#include "api.h"

typedef struct cel TCelula;

struct numero
{
    int numero;
};

struct cel
{
    Numero *numeroItem;
    TCelula *prox;
};

struct listacircular
{
    TCelula *ini;
};

ListaCircular *inicializaLista()
{
    ListaCircular *lista = (ListaCircular *)malloc(sizeof(ListaCircular));

    lista->ini = NULL;

    return lista;
}

Numero *inicializaNumero(int numero)
{
    Numero *numeroItem = (Numero *)malloc(sizeof(Numero));
    numeroItem->numero = numero;

    return numeroItem;
}

void insereNumero(Numero *num, ListaCircular *lista)
{
    ListaCircular *aux = inicializaLista();
    TCelula *novoNum = (TCelula *)malloc(sizeof(TCelula));

    novoNum->numeroItem = num;
    aux->ini = novoNum;

    if (lista->ini == NULL)
    {
        lista->ini = aux->ini;
        lista->ini->prox = lista->ini;
    }
    else
    {
        aux->ini->prox = lista->ini->prox;
        lista->ini->prox = aux->ini;
        lista->ini = aux->ini;
    }
}

void imprime(ListaCircular *lista)
{
    TCelula *numeroCelula = lista->ini;

    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);

    numeroCelula = numeroCelula->prox;
    printf("%d ", numeroCelula->numeroItem->numero);
}

int definirLider(int M, ListaCircular *lista)
{
    //TCelula* numeroEncontrado = buscarNumero(M);
}

ListaCircular *liberaLista(ListaCircular *lista)
{
    TCelula *numeroCelula = lista->ini;

    while (numeroCelula != NULL)
    {
        TCelula *numeroCelulaAtual = numeroCelula->prox;
        liberaNumero(numeroCelula->numeroItem);
        free(numeroCelula);
        numeroCelula = numeroCelulaAtual;
    }

    free(lista);
}

void liberaNumero(Numero *numeroItem)
{
    if (numeroItem != NULL)
        free(numeroItem);
}