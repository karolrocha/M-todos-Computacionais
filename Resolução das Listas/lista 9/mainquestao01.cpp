#include "pilha.hpp"
#include <stack>
#include <iostream>

using namespace std;

int main() {

Pilha pilhinha (10); 

string nova_string; 
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

pilhinha.insere(nova_string);

break;

case 'b': 
cout << pilhinha.tamanho() << endl;
break;

case 'c': 
pilhinha.retira();
break;

case 'd': 
pilhinha.imprime ();
break;

}

} while (opt != 'e');


return 0; 
}


