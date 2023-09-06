#include <iostream>
#include <string.h>

using namespace std;

//argc -> quantidade de argumentos 
//argv -> matriz com os argumentos
int main(int argc, char *argv[]){       

    cout << argv[1] << "\n";

    if(argc > 1){
        if(strcmp(argv[1], "sol")==0){
            cout << "Vou ao clube!\n";
        }
        else if(strcmp(argv[1], "nublado")==0){
            cout << "Vou ao cinema!\n";
        }
        else{
            cout << "Vou ficar em casa!\n";
        }
    }

    return 0;
}