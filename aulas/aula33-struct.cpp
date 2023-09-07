#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelMax){
        nome = stnome;
        cor = stcor;
        potencia = stpot;
        velMax = stvelMax;
        vel = 0;
    }

    void mostra(){
        cout << "\nNome.............: " << nome << "\n";
        cout << "Cor..............: " << cor << "\n";
        cout << "Potencia.........: " << potencia << "\n";
        cout << "Velocidade Maxima: " << velMax << "\n";
        cout << "Velocidade.......: " << vel << "\n\n";
    }

    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax) vel = velMax;
        if(vel < 0) vel = 0;
    }
};

int main(){

    Carro car1;

    car1.nome = "Civic";
    car1.cor = "Preto";
    car1.potencia = 365;
    car1.velMax = 270;

    cout << "\nNome: " << car1.nome << "\n";
    cout << "Cor: " << car1.cor << "\n";
    cout << "Potencia: " << car1.potencia << "\n";
    cout << "Velocidade Maxima: " << car1.velMax << "\n";



    Carro car2;

    car2.insere("Subaru", "Branco", 465, 355);
    car2.mostra();
    car2.mudaVel(450);
    car2.mostra();

    return 0;
}