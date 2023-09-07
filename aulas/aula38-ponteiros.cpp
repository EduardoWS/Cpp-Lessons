#include <iostream>

using namespace std;

void somar(int *num, int val);
void init(int *v);

int main(){

    int num = 0;
    int vetor[3];

    somar(&num, 15);
    init(vetor);

    cout << num << "\n\n";

    for(int i=0; i<3; i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}

void somar(int *num, int val){
    *num += val;
}

void init(int *v){
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
}