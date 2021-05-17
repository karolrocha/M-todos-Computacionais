#include "servidor.h"
#include "fila.h"
#include <string.h>

int main ( )
{

  int ciclo; 
  float limiar; 
  float num; 
  float bateria;
  
	
  printf ("Ciclo:");
  scanf ("%i", &ciclo);
  
  printf ("Limiar:");
  scanf ("%f", &limiar);
  
  

  int s_sock = inicializa_e_espera(7891);
  char buffer[1024];
  strcpy(buffer, "Vivo?\n");
  
  char carga[1024];
  strcpy(carga, "Carga?\n");
  
  
  

  while (1)
  {
  
  	 Fila* f = (Fila*) malloc (sizeof(Fila));
 	 f = cria (); 
  
  	for (int contador = 0; contador < 5 ; contador ++) {
      usleep((ciclo*1000000));
      
      send(s_sock, buffer, strlen(buffer)+1, 0);
      printf ("Data sent: %s\n", buffer);
      
      send(s_sock, buffer, strlen(carga)+1, 0);
      printf ("Data sent: %s\n", carga);
      
      recv(s_sock, &bateria, sizeof (bateria) , 0);
      printf ("Data received: %f\n", bateria);
      inserir (f, bateria); 
      
      }
     
      imprimir (f);
      
      if (verificar_bateria (f, limiar)) printf ("BATERIA ACABANDO!!\n");
      
      liberar (&f); 
      
   
      }
      
	
      
	
  return 0;
}
