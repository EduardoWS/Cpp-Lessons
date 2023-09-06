#include <iostream>

using namespace std;

void contador(int num, int cont=0);
int fatorial(int num);
int fatorial_result(int num);
int fibonacci(int num);

int main(){

    //contador(10);

    //fatorial(5);

    int val = 8;
    for (int i=1; i<=val; i++){
        cout << fibonacci(i) << " ";
    }
    cout << "\n";
    

    return 0;
}

void contador(int num, int cont){
    cout << cont << "\n";
    if(num > cont){
        contador(num, ++cont);
    }
}

int fatorial(int num){
    if(num < 0){
        cout << "Numeros negativos nao sao validos!\n";
        return 0;
    }
    else{
        cout << num << "! = ";
        if(num != 1){
            for(int i=num; i>0; i--){
                if(i==1){
                    cout << i << " = ";
                }
                else{
                    cout << i << "*";
                }
            }
        }
        int resultado = fatorial_result(num);
        cout << resultado << "\n";
        return 1;

    }
}

int fatorial_result(int num){
    
    if(num > 1){
        return num = num * fatorial_result(num - 1);
    }
    else{
        return 1;
    }
    
}

int fibonacci(int num){

    if(num==1 or num==2){
        return 1;
    }
    else{
        return fibonacci(num-1) + fibonacci(num-2);
    }

}