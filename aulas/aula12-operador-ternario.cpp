#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int nota1, nota2, total;
    string resp;

    system("clear");

    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;

    total = nota1 + nota2;

    //(total >= 5) ? resp="Aprovado!\n" : resp="Reprovado!\n";    //Operador Ternario 1ª forma

    resp = (total>=5) ? "Aprovado\n" : "Reprovado\n";             //Operador Ternario 2ª forma

    cout << "\nSituação: " << resp;

    return 0;
}