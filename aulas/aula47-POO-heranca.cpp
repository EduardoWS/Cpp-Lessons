#include <iostream>
#include "aula47-POO-heranca.h"

using namespace std;

int main(){

    Moto *v1 = new Moto();
    Carro *v2 = new Carro();

    v1->imp();
    v2->imp();

    return 0;
}