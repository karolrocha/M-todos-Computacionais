#include <stdio.h>
#include<stdlib.h>
#include "fila.h"


int main ()

{

Fila* f = (Fila*) malloc (sizeof(Fila));

f = cria (); 

inserir (f);

imprimir (f);

remover (f);

imprimir (f);

liberar (&f); 


    return 0; 
}