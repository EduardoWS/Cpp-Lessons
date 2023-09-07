#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> aula;
    list <int>::iterator it;
    int tam;

    tam=10;
    for(int i=1; i<=tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 5);
    aula.insert(it, 0);
    aula.erase(--it); //remove o elemento inserido

    aula.sort(); //ordena
    aula.reverse(); //inverte a ordem
    //aula.clear(); //limpa a lista
    //aula.merge(lista2); //passa os elementos da lista2 para a lista aula

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for(int i=1; i<=tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    return 0;
}