#include <stdio.h>
#include "../include/calc.h"


int main () {

  float n1, n2; 

  printf ("\nBem vindo à calculadora simples. Digite dois números :)\n\n"); 
  scanf ("%f %f", &n1, &n2); 
  
  printf("\n\n soma: %f\n subtração: %f\n divisão: %f\n multiplicação: %f\n", soma( n1, n2),subtracao (n1, n2), divisao (n1, n2), multiplicacao (n1, n2)); 

 return 0; }

//A utilidade de separar o código em source e hearder está em poder proteger a propriedade intelectual do desenvolvedor da biblioteca. 
//o usuário poderá utilizá-la, porém não terá acesso à todo o código. 
//Além disso, o arquivo header é o intermediário entre o desenvolvedor da biblioteca, que irá declarar as funções e poderá arescentar 
//informações e/ou explicações, e o usuário, que terá ali o que precisa de forma simplificada em vez de váaaarias linhas de código. No source
//é onde as funções serão desenvolvidas e esse será um arquivo privado, do desenvolvedor.  

