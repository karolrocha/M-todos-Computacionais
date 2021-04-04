#include <iostream>
#include <vector>
#include <string>

void maior_palavra (std::string &frase){
    std::string vetor = "";
    std::string num_max_palavras = "";

    for (int i = 0; i < frase.size(); i++){
        if(frase[i] != ' ')
            vetor += frase[i];
        else
            vetor = "";
        if (vetor.size() > num_max_palavras.size())
            num_max_palavras = vetor;
    }

    std::cout << num_max_palavras;
}

int main(){
    std::string frase;
    std::cout << "Digite uma frase:";
    getline(std::cin, frase);

    maior_palavra(frase);
    std::cout << std::endl;
    return 0;
}