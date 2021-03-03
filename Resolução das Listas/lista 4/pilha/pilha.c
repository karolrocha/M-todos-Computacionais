#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <string.h>

Pilha * cria () 
{
    Pilha*p = (Pilha*)malloc (sizeof(Pilha));
    p-> topo = NULL;
}

int pilha_vazia (Pilha*p)
{
    return (p->topo == NULL);
}

void push (Pilha *p) 
{
    char v[40]; 

    Lista* no = (Lista*) malloc (sizeof(Lista));

    printf ("Digite um nome para adicioná-lo a pilha:");
    scanf ("%s", v); 
    strcpy (no->info, v);
    no -> prox = p-> topo;
    p-> topo = no;
}

void pop (Pilha* p)
{
    if (pilha_vazia(p)) 
    {
        printf ("\n pilha vazia!");
        return;
    }

    Lista* aux = p-> topo;
    p-> topo = p-> topo -> prox;
    free (aux); 

    printf ("removendo um nome da lista..\n"); 
}

void imprime (Pilha* p) {
    
    if ((p==NULL) || (p-> topo == NULL))
    {
        printf ("pilha vazia! \n");
        return;
    }
    printf ("imprimindo lista..\n"); 
    for (Lista* l= p-> topo ; l!=NULL; l=l->prox) 
    {
     printf ("%s \n", l->info); 
    }
}

void libera (Pilha**p) {
    Lista*l = (*p) -> topo;
    while (l != NULL) {
        Lista*aux = l->prox;
        free (l);
        l = aux; 
    }

    free (*p);
    *p = NULL;
}