#include "cliente.h"
#include <unistd.h>
#include <stdlib.h>

int main()
{
  int clientSocket = inicializa_e_conecta(7891);
  char buffer [1024]; 
  float bateria = 1; 
  char carga[1024];
  
  while (1)
  {
      
      if (recv(clientSocket, buffer, 1024, 0))
          printf("Data received: %s\n", buffer);
          
      if (recv(clientSocket, carga, 1024, 0)) 
      	 printf("Data received: %s", carga);
      	 
	 send(clientSocket, &bateria, sizeof(float), 0);
	 printf ("Data sent: %f\n", bateria);
	 
	 bateria = bateria - 0.05; 

  }

  return 0;
}
