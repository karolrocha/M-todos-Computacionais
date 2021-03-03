#include <stdio.h>
#include <stdlib.h>


// arquivo pilha.h

typedef struct lista 
{
    char info[40];
    struct lista* prox;

} Lista; 

typedef struct pilha 
{
    Lista* topo;
} Pilha;

Pilha* cria ();

int pilha_vazia (Pilha* p);
void push (Pilha*p);
void pop (Pilha* p);
void imprime (Pilha* p);
void libera (Pilha** p); 



