#include <stdio.h>
#include <stdlib.h> 
#include "arvore.h"


Arvore* cria (Arvore* esq, Arvore*dir)
{	
	char c; 
	printf ("Digite um char: ");
	c = getchar();
	
	Arvore* nova = (Arvore*) malloc (sizeof(Arvore));
	
	nova -> info = c;
	nova -> esq  = esq;
	nova -> dir  = dir;
	
	return nova; 
}


int vazia (Arvore* raiz)
{
	return raiz == NULL;
}

void imprime (Arvore* raiz)
{
	if (!vazia(raiz))
	{
		printf ("%c\n", raiz -> info);
		imprime (raiz-> esq);
		imprime (raiz->dir);
	}
}

void libera (Arvore** raiz)
{	
	if (!vazia(*raiz))
	{
		libera (&((*raiz)->esq));
		libera (&((*raiz)->dir));
		free (*raiz);
		*raiz = NULL;
	}
}

int pesquisa (Arvore*raiz, char parametro_pesquisa)
{
	if (vazia(raiz))
	{
		return 0;
	}
	
	if ((raiz -> info == parametro_pesquisa) || pesquisa (raiz -> esq, parametro_pesquisa) || pesquisa (raiz -> dir, parametro_pesquisa))
	return 1;

}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
