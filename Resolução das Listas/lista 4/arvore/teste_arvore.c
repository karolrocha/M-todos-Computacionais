#include <stdio.h>
#include <stdio.h> 
#include "arvore.h"


int main ()

{


	Arvore* nova = (Arvore*) malloc (sizeof(Arvore));
	Arvore* esquerda = (Arvore*) malloc (sizeof(Arvore));
	Arvore* direita = (Arvore*) malloc (sizeof(Arvore));
	
	nova = cria (esquerda, direita); 
	
	imprime (nova); 
	
	if (pesquisa (nova, 'k') == 1)
	{
	printf ("Elemento k está na lista sim! \n"); 
	}
	
	return 0; 
}


