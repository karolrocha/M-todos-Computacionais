#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include "estruturadados.hpp"


using namespace std;

class Fila: public EstruturaDados

{

public: 

    Fila (int max_chars);
    ~Fila ();
    void imprime ();
    int tamanho ();
    string retira ();
    int insere (string s);


}; 
