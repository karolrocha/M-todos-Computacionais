#include <stdio.h>
#include <stdlib.h>
#include "../include/lista.h"


int main ()

{
    Lista* ref = (Lista*) malloc(sizeof(Lista));
    Lista** lista = (Lista**) malloc(sizeof(Lista));
    int valor; 

    criaLista (); 

    printf ("Informe um valor para adicionar no começo e no fim da lista: \n");
    scanf ("%d", &valor); 

    ref = insere (ref, valor);
    ref = insere_fim (ref, valor);
    imprime (ref);
    remover (ref, valor);
    libera (lista);
    imprime (ref);


}