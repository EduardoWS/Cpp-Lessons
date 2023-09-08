#include <iostream>

using namespace std;

int main(){

    char *nome = new char[101]; // aloca espaço para 100 caracteres + 1 para o caractere nulo '\0'

    cout << "Nome: ";
    cin.getline(nome, 100); // Lê uma linha de texto (até 100 caracteres) do teclado

    cout << "Você digitou: " << nome << "\n";

    // Lembre-se de liberar a memória alocada
    delete[] nome;


    return 0;
}