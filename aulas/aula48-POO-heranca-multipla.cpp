#include <iostream>
#include "aula48-POO-heranca-multipla.h"

using namespace std;

int main(){

    Base1 *b1 = new Base1();
    Base2 *b2 = new Base2();

    b1->impBase1();
    b2->impBase2();

    Base3 *b3 = new Base3();

    b3->impBase1();
    b3->impBase2();

    return 0;
}