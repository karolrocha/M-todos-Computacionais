#include <stdio.h>
#include<stdlib.h>
#include "fila.h"

Fila* cria () 
{
    Fila* fila = (Fila*) malloc (sizeof(Fila));
    fila -> frente = NULL;
    fila -> fundo = NULL; 

    return fila; 
}

int fila_vazia (Fila*f) 
{
    return (f-> frente == NULL || (f == NULL));
}

void inserir (Fila *f)
{
   
    float v;
    printf ("Digite o número que você quer adicionar à fila:\n");
    scanf ("%f", &v);
    printf ("Inserindo novo numero..\n");
    Lista* novo = (Lista*) malloc (sizeof(Lista));
    novo -> info = v;
    novo -> prox = NULL;

    if (fila_vazia(f))
    f -> frente = novo; 

    else
    f->fundo->prox = novo; 
    f-> fundo = novo;
}

void remover (Fila* f)
{
    Lista* aux;

    if (fila_vazia(f))
    {
        printf ("Fila vazia!\n");
        return;
    }

    printf ("Removendo..\n");

    aux = f-> frente;
    f-> frente = aux -> prox;
    if (f-> frente == NULL)
    f-> fundo = NULL;

    free (aux);
}

void imprimir (Fila* f)
{
    if (fila_vazia(f))
    {
        printf ("Fila vazia! \n");
        return;
    }

    printf ("Imprimindo fila.. \n");
    for (Lista* l = f->frente; l!= NULL; l = l-> prox)
    printf ("%f\n", l-> info);
}

void liberar (Fila** f) 
{
    if (fila_vazia (*f))
    return;

    Lista* l = (*f) -> frente;
    while (l != NULL)
    {
        Lista* aux = l -> prox;
        free (l);
        l = aux; 
    }

    free (*f);
    (*f) = NULL; 
}