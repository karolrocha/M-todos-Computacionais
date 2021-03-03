#include <stdio.h>
#include <stdlib.h>


typedef struct lista 
{
    int info;
    struct lista* prox; 

}Lista; 

Lista* criaLista (); 
Lista* insere (Lista*ref, int valor);
void imprime (Lista* ref);
Lista* remover (Lista*ref, int valor);
void libera (Lista** lista);
Lista* insere_fim (Lista* ref, int valor); 