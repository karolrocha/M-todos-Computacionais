#include <stdio.h>
#include <stdio.c> 
#include "arvore.h"


int main ()

{

	while (1) 
	{
	
		Arvore* raiz = (Arvore*) malloc (sizeof(Arvore));
		raiz = cria (esq, dir);
	}
	
	imprime (raiz); 

	
	return 0; 
}
