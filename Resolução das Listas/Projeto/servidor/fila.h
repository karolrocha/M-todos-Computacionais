#include <stdio.h>
#include<stdlib.h>

typedef struct lista 
{
    float info;
    struct lista* prox;
} Lista; 

typedef struct fila 
{
    Lista* frente;
    Lista* fundo;
} Fila; 

Fila* cria (); 
int fila_vazia (Fila* f);
void inserir (Fila* f, float bateria);
void remover (Fila* f);
void imprimir (Fila* f);
void liberar (Fila**f); 
int verificar_bateria (Fila*f, float limiar);

