#include "pilha.hpp"
#include <vector>
#include <string>
#include <stack>

Pilha:: Pilha (int max_chars) : EstruturaDados (max_chars) {

}

void Pilha:: imprime () {

    if (pilha.empty())
        return;
 
    string x = pilha.top();
 
    pilha.pop();

    cout << x << ' ';
 
    imprime();
 
    pilha.push(x);


}

int Pilha:: tamanho () {

int tam; 

tam = pilha.size();

}


string Pilha:: retira() {

    std:: string topo_pilha; 

    topo_pilha = pilha.top (); 
    pilha.pop(); 

    return topo_pilha;

}

int Pilha:: insere (std::string s) {

      int tamanho; 

    tamanho = sizeof(s);

    if (tamanho > max_chars) {
        cout << "excedido limite de caracteres"; 
    }

    else 

        pilha.push (s); 

}

Pilha:: ~Pilha() {

}
