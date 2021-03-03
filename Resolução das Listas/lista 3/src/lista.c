#include <stdio.h>
#include <stdlib.h>
#include "../include/lista.h"

Lista* criaLista ()
{
    return NULL;
}

Lista* insere (Lista* ref, int valor)
{
    Lista* novoNo = (Lista*) malloc(sizeof(Lista));
    novoNo -> info = valor;
    novoNo -> prox = ref;
    ref = novoNo;
    return ref;
}

Lista* insere_fim (Lista* ref, int valor) 
{
    Lista* novoNo = (Lista*) malloc(sizeof(Lista));

    novoNo-> prox = NULL;


        if (ref == NULL)
        ref -> prox = novoNo;
     else {

        Lista * tmp = ref -> prox;

        while (tmp != NULL) {
            tmp = tmp-> prox;
        }
        tmp-> prox = novoNo;
    }
}

void imprime (Lista*ref)
{
    Lista* p;
    printf ("imprimindo a lista:\n");
    if (ref == NULL)
    {
        printf ("Lista vazia! \n");
        return;
    }

    for (p= ref; p!=NULL; p->prox)
    {
        printf ("%d", p->info);
    }
}

Lista* remover (Lista*ref, int valor)
{
    Lista*p = ref;
    Lista* ant = NULL; 
    while ((p != NULL) && (p-> info != valor))
    {
        ant = p;
        p = p->prox;

    }

    if (p==NULL) return ref;
    if (p==ref) 
    ref = p-> prox; 

    else 
    ant -> prox = p-> prox; 

    free (p);
    return ref; 
}

Lista* libera (Lista** lista)
{
    Lista* l = *lista;
    while (l!= NULL)
    {
        Lista* aux = l->prox;
        free (l);
        l = aux;
    }

    *lista = NULL;

}