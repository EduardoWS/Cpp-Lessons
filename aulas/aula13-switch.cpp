#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    system("clear");

    int valor;

    cout << "Digite um valor para selecionar uma cor:\n";
    cout << "[1] Verde, [2] Azul, [3] Preto\n\n> ";
    cin >> valor;

    switch (valor){

        case 1:
            cout << "Cor selecionada: Verde\n";
            break;
        
        case 2:
            cout << "Cor selecionada: Azul\n";
            break;

        case 3:
            cout << "Cor selecionada: Preto\n";
            break;

        default:
            cout << "Valor inválido!\n";
    }

    return 0;
}