#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int nota1, nota2, total;
    char resp;

    inicio:     //label para o goto

    system("clear");

    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;

    total = nota1 + nota2;

    if(total>=70){
        cout << "\nAluno Aprovado!\n\n";
    }
    else if(total<70 and total >= 30){
        cout << "\nAluno de Recuperação!\n\n";
    }
    else{
        cout << "\nAluno Reprovado!\n\n";
    }

    cout << "Continuar? [s/n]: ";
    cin >> resp;

    if(resp=='s' or resp=='S'){
        goto inicio;
    }


    return 0;
}