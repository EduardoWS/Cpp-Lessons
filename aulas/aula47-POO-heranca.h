#ifndef HERANCA_H
#define HERANCA_H

#include <iostream>

class Veiculo{

public:
    int vel;
    int rodas;
    bool blindagem;
    void setVelMax(int vm);
    void setTipo(int tp);
    void setArma(bool ar);
    void imp();
private:
    int velMax;
    int tipo;   // 1=moto; 2=carro;
    bool arma;

};

void Veiculo::imp(){
    std::cout << "Tipo.............: " << tipo << "\n";
    std::cout << "Velocidade Máxima: " << velMax << "\n";
    std::cout << "Velocidade.......: " << vel << "\n";
    std::cout << "Qntd rodas.......: " << rodas << "\n";
    std::cout << "Armamento........: " << arma << "\n";
    std::cout << "Blindagem........: " << blindagem << "\n\n";
}

void Veiculo::setVelMax(int vm){
    velMax=vm;
}

void Veiculo::setTipo(int tp){
    tipo=tp;
}

void Veiculo::setArma(bool ar){
    arma=ar;
}

class Moto:public Veiculo{  // HERDANDO OS ATRIBUTOS DA CLASSE MÃE "VEICULO"
public:
    Moto();
};

Moto::Moto(){
    vel = 0;
    blindagem = false;
    rodas = 2;
    setVelMax(120);
    setTipo(1);
    setArma(true);
}

class Carro:public Veiculo{  // HERDANDO OS ATRIBUTOS DA CLASSE MÃE "VEICULO"
public:
    Carro();
};

Carro::Carro(){
    vel = 0;
    blindagem = true;
    rodas = 4;
    setVelMax(180);
    setTipo(2);
    setArma(false);
}



#endif