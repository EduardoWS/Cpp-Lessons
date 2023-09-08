#ifndef CARROS_H
#define CARROS_H

#include <iostream>
#include <string>

class Carros{

public:
    int vel;
    int velMax;
    std::string nome;
    Carros(int tipo);   // MÉTODO CONSTRUTOR: sua função é inicializar automaticamente quando um objeto é criado.
    void imprimir();
};

Carros::Carros(int tipo){

    switch(tipo){
        case 1:
            this->velMax = 255;
            this->nome = "Subaru";
            break;
        case 2:
            this->velMax = 270;
            this->nome = "Ford Mustang";
            break;
        case 3:
            this->velMax = 320;
            this->nome = "Porsche 911";
            break;
    }

}

void Carros::imprimir(){

    std::cout << "\nNome.............: " << this->nome << "\n";
    std::cout << "Velocidade.......: " << this->vel << "\n";
    std::cout << "Velocidade Maxima: " << this->velMax << "\n\n";

}

#endif