#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define CHAR 31

typedef struct {

char nome [CHAR];
int idade;

} Pessoa; 

void copia(Pessoa* p1, Pessoa* p2) {

Pessoa temporaria;
strcpy(temporaria.nome, p1->nome);
temporaria.idade = p1 -> idade;

strcpy (p1->nome, p2->nome); 
p1->idade = p2->idade;

strcpy (p2->nome, temporaria.nome);
p2->idade = temporaria.idade;


    return 0; 
}


int main () {

Pessoa p1 = {"Ana", 41};
Pessoa p2 = {"Cristiano", 49}; 

printf ("\n\n ## Pessoa p1 ## \n nome: %s \n idade: %d", &p1.nome, p1.idade );
printf ("\n ## Pessoa p2 ## \n nome: %s \n idade: %d\n", &p2.nome, p2.idade );

copia (&p1, &p2);

printf ("\n\n ## Pessoa p1 ## \n nome: %s \n idade: %d", &p1.nome, p1.idade );
printf ("\n ## Pessoa p2 ## \n nome: %s \n idade: %d\n", &p2.nome, p2.idade );



    return 0;
}