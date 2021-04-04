#include <stdio.h>
#include <stdlib.h>


typedef struct arvore 
{
	char info;
	struct arvore* esq;
	struct arvore* dir;
} Arvore; 

Arvore* cria (Arvore* esq, Arvore*dir); 

int vazia (Arvore* raiz);

void imprime (Arvore*raiz);

void libera (Arvore**raiz); 

int pesquisa (Arvore* raiz, char parametro_pesquisa);

