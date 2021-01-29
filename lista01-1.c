#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float maior (float* v, int n) {

float maior_elemento; 
int contador = 0; 
int maior_indice = 0; 

for (contador=0; contador< n; contador ++)
{
 if (v[contador] > maior_elemento) 
 { maior_elemento =  v[contador]; }
}

for (contador=0; contador<n; contador ++ ){
    if (v[contador] == maior_elemento) {maior_indice = contador;} }

return maior_indice; 
} 


int main () {

float v[6] = {3, 6, 7, 5, 2};
int n = 5; 

int maior_indice = maior(v, n) +1;


printf ("\n\nmaior indice é: %d \n\n",maior_indice); 

return 0; 

}