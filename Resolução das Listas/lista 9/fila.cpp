#include "fila.hpp"
#include <vector>
#include <string>
#include <queue>

Fila:: Fila (int max_chars) : EstruturaDados (max_chars) {

}

void Fila:: imprime () {

    if (fila.empty())
        return;
 
    string x = fila.front();
 
    fila.pop();

    cout << x << ' ';
 
    imprime();
 
    fila.push(x);


}

int Fila:: tamanho () {

int tam; 

tam = fila.size();

}


string Fila:: retira() {

    std:: string topo_fila; 

    topo_fila = fila.front (); 
    fila.pop(); 

    return topo_fila;

}

int Fila:: insere (std::string s) {

        int tamanho; 

    tamanho = sizeof(s);

    if (tamanho > max_chars) {
        cout << "excedido limite de caracteres"; 
    }

    else 

        fila.push (s); 



}

Fila:: ~Fila() {

}
