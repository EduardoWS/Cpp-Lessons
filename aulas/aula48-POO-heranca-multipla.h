#ifndef HERANCA_H
#define HERANCA_H

#include <iostream>

class Base1{

public:
    void impBase1();
};

void Base1::impBase1(){
    std::cout << "Imp Classe Base1\n";
}




class Base2{

public:
    void impBase2();
};

void Base2::impBase2(){
    std::cout << "Imp Classe Base2\n";
}




class Base3:public Base1, public Base2{

};



#endif