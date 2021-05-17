#include "pilha.hpp"
#include <vector>
#include <string>
#include <stack>

Pilha:: Pilha (int max_chars) {

    this -> max_chars = 10;
}

void Pilha:: imprime () {

    if (dados.empty())
        return;
 
    string x = dados.top();
 
    dados.pop();
 
    // Print the current top
    // of the stack i.e., x
    cout << x << ' ';
 
    imprime();
 
    dados.push(x);


}

int Pilha:: tamanho () {

int tam; 

tam = dados.size();

}


string Pilha:: retira() {

    std:: string topo_pilha; 

    topo_pilha = dados.top (); 
    dados.pop(); 

    return topo_pilha;

}

int Pilha:: insere (std::string s) {

    int tamanho; 

    tamanho = sizeof(s);

    if (tamanho > max_chars) {
        cout << "excedido limite de caracteres"; 
    }

    else 

        dados.push (s); 


}

Pilha:: ~Pilha() {}
