#include "servidor.h"
#include <string.h>

int main()
{
  int s_sock = inicializa_e_espera(7891);
  char buffer[1024];
  int num[3]; 
  int contador = 0; 

  while (1)
  {
      if (recv(s_sock, buffer, 1024, 0))
          printf("Data received: %s",buffer);
          
          num[contador] = atoi(buffer); 
          contador++;
          
          if (contador==2) {
          
          if ((num[0] + num[1]) > 50) printf ("\na soma dos ultimos dois numeros é maior que 50\n\n");
           contador=0;  
         }
           
  }
	 

	
  return 0;
}
