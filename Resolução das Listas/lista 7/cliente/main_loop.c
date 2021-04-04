#include "cliente.h"
#include <unistd.h>
#include <stdlib.h>
int main()
{
  int clientSocket = inicializa_e_conecta(7891);
  int i = 0;  
  char buffer [1024]; 
  int num;
  
  
  while (1)
  {
      num = rand()%100; 
      usleep(3000000);
      sprintf(buffer, "%d\n",num);
      send(clientSocket, buffer, strlen(buffer)+1, 0);
      printf("Data sent: %s", buffer);
      i++;
  }

  return 0;
}
