#include <iostream>
#include <string>
#include <vector>


int main() {

int n = 10;
float* vec = new float[n];

int variavel; 
int contador = 1; 
int razao; 
int diferenca; 

do {

std::cout << "\nDigite um número: " << std::endl;
std::cin >> variavel;
vec[contador] = variavel; 

if (contador==1)
std::cout << "O vetor possui apenas um número. \n" << std::endl;

else if (contador == 2) 
{  
    razao = vec[contador]/ vec[contador-1]; 
    diferenca = vec[contador] - vec[contador-1];
}

else {

if ((vec[contador]/ vec[contador-1]) == razao) {
std::cout << "Há uma progressão geométrica!" << std::endl;
std::cout << razao << "é a razão.\n"; }
else std::cout << "Não há progressão geométrica! " << std::endl;


if ((vec[contador] - vec[contador-1]) == diferenca) {
std::cout << "Há uma progressão aritmética! " << std::endl;
std::cout << diferenca << " é a razão.\n"; }
else std::cout << "Não há progressão aritmética! " << std::endl;
}

std::cout << "vetor:  " << std::endl;
for (int i=1; i<=contador; i++) {
   std::cout << vec[i] << " " ; } 


contador = contador +1; 

} while (variavel>0);



delete vec;


return 0;

}
