#include <stdio.h>
#include <stdlib.h>


int main () {

int linhas, colunas; 
int **matriz; 

printf ("\n Digite quantas linhas e colunas você deseja em sua matriz, respectivamente: \n"); 
scanf ("%d %d", &linhas, &colunas); 

matriz = malloc (linhas* sizeof(int*)); 

for (int i=0; i < linhas; i++) {
matriz[i] = malloc (colunas* sizeof(int)); 
}

for (int j=0; j < linhas; j++) {
    for (int k=0; k < colunas; k++) {
        matriz[j][k] = (j + 1) - (k + 1); 
    } }

for (int j=0; j < linhas; j++) {
    printf ("\n"); 
    for (int k=0; k < colunas; k++) {
       
    printf ("  %d  ", matriz[j][k]);
        }}

printf ("\n");

return 0; 

}



