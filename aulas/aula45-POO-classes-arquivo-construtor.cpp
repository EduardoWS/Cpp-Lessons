#include <iostream>
#include "aula45-POO-classe.h"

using namespace std;

int main(){

    Carros *car1 = new Carros(1);
    Carros *car2 = new Carros(2);
    Carros *car3 = new Carros(3);

    car1->imprimir();
    car2->imprimir();
    car3->imprimir();

    return 0;
}