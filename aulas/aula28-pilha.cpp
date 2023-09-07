#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;

    cartas.push("Rei de Ouros");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Paus");
    cartas.push("Rei de Copas");

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Carta do topo: " << cartas.top() << "\n";

    cartas.pop();

    cout << "Carta do topo: " << cartas.top() << "\n";

    while(!cartas.empty()){
        cartas.pop();
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";


    return 0;
}