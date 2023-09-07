#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <string> cartas;

    cartas.push("Rei de Ouros");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Paus");
    cartas.push("Rei de Copas");

    cout << "Tamanho da fila: " << cartas.size() << "\n";
    cout << "Primeira carta: " << cartas.front() << "\n";
    cout << "Ultima carta: " << cartas.back() << "\n";

    cartas.pop();

    cout << "Primeira carta: " << cartas.front() << "\n";



    while(!cartas.empty()){
        cout << "Primeira carta: " << cartas.front() << "\n";
        cartas.pop();
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";


    return 0;
}