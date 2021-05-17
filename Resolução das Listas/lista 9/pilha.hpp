#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include "estruturadados.hpp"


using namespace std;

class Pilha: public EstruturaDados

{

public: 

    Pilha (int max_chars);
    ~Pilha ();
    void imprime ();
    int tamanho ();
    string retira ();
    int insere (string s);


}; 
