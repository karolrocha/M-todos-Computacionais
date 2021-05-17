#include <iostream>
#include <string>
#include <vector>
#include <stack>


using namespace std;

class Pilha

{

public: 

    Pilha (int max_chars);
    ~Pilha ();
    void imprime ();
    int tamanho ();
    string retira ();
    int insere (string s);

private: 

   stack<string> dados; 
    int max_chars; 


}; 
