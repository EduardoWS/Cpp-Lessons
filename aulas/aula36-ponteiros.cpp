#include <iostream>

using namespace std;

int main(){

    string veiculo = "Carro";
    string *ponteiro;       //declarando um ponteiro

    ponteiro = &veiculo;    //ponteiro recebe o endereço da variavel "veiculo"

    cout << ponteiro << "\n" << &veiculo;

    *ponteiro = "Moto";     //no endereço apontado pelo ponteiro adicione "Moto"

    cout << "\n" << veiculo << "\n" << *ponteiro << "\n";

    return 0;
}