#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main () 
{

    Pilha*p = (Pilha*)malloc (sizeof(Pilha));

    cria (); 

    for (int i=0; i<2; i++) 
    push (p);
    
    imprime (p);

    pop (p);

    imprime (p); 

    libera (&p); 


    return 0; 
}