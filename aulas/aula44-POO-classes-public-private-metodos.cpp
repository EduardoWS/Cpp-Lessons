#include <iostream>

using namespace std;

class Carros{

public:
    int vel;
    int velMax;
    string nome;
    void init(int tipo);

};

void Carros::init(int tipo){    // 1 = Subaru (velMax: 255); 2 = Ford Mustang (velMax: 270); 3 = Porsche 911 (velMax: 320);

    if(tipo==1){
        this->velMax = 255;
        this->nome = "Subaru";
    }else if(tipo==2){
        this->velMax = 270;
        this->nome = "Ford Mustang";
    }else if(tipo==3){
        this->velMax = 320;
        this->nome = "Porsche 911";
    }

}

int main(){

    Carros *car1 = new Carros();

    car1->init(3);

    cout << "\nNome.............: " << car1->nome << endl;
    cout << "Velocidade Maxima: " << car1->velMax << "\n\n";

    return 0;
}