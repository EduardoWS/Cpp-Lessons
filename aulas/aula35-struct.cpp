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

    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4; carros[4]=car5;

    carros[0].insere("Subaru", "Branco", 465, 255);
    carros[1].insere("Ford Mustang", "Vermelho", 450, 270);
    carros[2].insere("Toyota Prius", "Prata", 121, 180);
    carros[3].insere("Porsche 911", "Preto", 580, 320);
    carros[4].insere("Tesla Model S", "Preto", 762, 250);

    for(int i=0; i<5; i++){
        carros[i].mostra();
    }


    return 0;
}