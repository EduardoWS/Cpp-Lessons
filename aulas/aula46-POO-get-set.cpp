#include <iostream>
#include <string>

#include "aula46-POO-Guns.h"

using namespace std;

int main(){

    Guns *arma = new Guns();

    int dinheiro = 5000;

    cout << "\nMeu dinheiro: $" << dinheiro << "\n"; 

    arma->comprar(2, dinheiro);

    cout << "Meu dinheiro: $" << dinheiro << "\n\n"; 

    arma->getArma();

    arma->setMunicao(2, dinheiro, 3);
    arma->getArma();
    cout << "Meu dinheiro: $" << dinheiro << "\n\n"; 

    return 0;
}