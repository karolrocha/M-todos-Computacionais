#include "estruturadados.hpp"
#include "fila.hpp"
#include "pilha.hpp"
#include <stack>
#include <iostream>

using namespace std;

int main() {

EstruturaDados* e;
int sel; 
int max_chars = 10;
string nova_string; 

cout << "Qual a estrutura?" << endl;
cin >> sel; 

if (sel==0){
    e = new Pilha (max_chars); 
}

else if (sel==1) {
    e = new Fila (max_chars);
}

char opt;

do {
    cout << "Opção: \n";
    cout << "a: inserir \n";
    cout << "b: ver tamanho \n";
    cout << "c: retirar \n";
    cout << "d: imprimir \n";
    cout << "e: sair \n";
    cin >> opt; 

switch (opt) {

case 'a': 
cout << "digite a palavra que quer adicionar:" << endl; 
cin >> nova_string; 

e->insere(nova_string);

break;

case 'b': 
cout << e->tamanho() << endl;
break;

case 'c': 
e->retira();
break;

case 'd': 
e->imprime ();
break;

}

} while (opt != 'e');


return 0; 
}


