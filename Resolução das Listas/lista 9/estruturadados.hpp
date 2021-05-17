#ifndef ESTRUTURADADOS_H
#define ESTRUTURADADOS_H
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>


using namespace std;

class EstruturaDados
{

public: 

    EstruturaDados (int max_chars);
    ~EstruturaDados();
    virtual void imprime ();
    virtual int tamanho ();
    virtual string retira ();
    virtual int insere (string s);

protected: 

   stack <string> pilha; 
   queue <string> fila; 
    int max_chars; 


}; 

#endif
