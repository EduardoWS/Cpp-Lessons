#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

int main(){

    string palavra, dica;
    string tentativa;
    int vidas, t_palavra;
    char resp='s';
    char alfabeto[26]; // Um array de 26 caracteres para o alfabeto
    

    string verde = "\x1b[32m";
    string vermelho = "\x1b[31m";
    string cor = "\x1b[0m";

    int ganhou=0;

    int led = 0;
    int led2 = 0;

    while(resp!='n'){
        system("clear");
        cout << "Escolha uma palavra: ";
        cin >> palavra;
        t_palavra = palavra.size();

        cout << "Escolha uma dica: ";
        cin >> dica;

        system("clear");

        
        vidas = 5;

        // Preencha o array com as letras do alfabeto
        for (char letra = 'a'; letra <= 'z'; letra++) {
            alfabeto[letra - 'a'] = letra;
        }

        int *alfa = (int*)calloc(26, sizeof(int));
        char *t = (char *)calloc(t_palavra, sizeof(char));

        while(vidas>0){
            cout << "Dica: " << dica << "\n\n";
            cout << "Vidas: " << vidas << "\n\n";
            for(int i=0; i<t_palavra; i++){
                if(t[i] == '\0'){
                    cout << "_";
                }
                else{
                    cout << t[i];
                }
            }


            cout << "\n\nDigite uma letra: ";
            cin >> tentativa;

            if(tentativa.size() > 1 && tentativa != "ç"){       //chute

                // Compare o array de caracteres com a string
                if (strcmp(palavra.c_str(), tentativa.c_str()) == 0) {
                    ganhou=1;
                    break;
                }
                else{
                    ganhou=0;
                    break;
                }
            }

            for(int i=0; i<t_palavra; i++){
                if(tentativa[0] == palavra[i]){    //se acertou a letra
                    t[i] = tentativa[0];
                    
                    for(int j=0; j<26; j++){
                        if(alfabeto[j] == tentativa[0]){
                            alfa[j] = 1;
                        }
                    }
                    led = 1;
                }
            }

            if(strcmp(t, palavra.c_str()) == 0){
                ganhou=1;
                break;
            }


            if (led == 0){
                vidas--;
                for(int j=0; j<26; j++){
                    if(alfabeto[j] == tentativa[0]){
                        alfa[j] = 2;
                    }
                }
            }

            led = 0;

            
            system("clear");
            

            // Agora, o array "alfabeto" contém todas as letras do alfabeto minúsculas

            // Exibindo as letras
            cout << "Tentativas: ";
            for (int i = 0; i < 26; i++) {      
                
                if(alfa[i] == 1){
                    cout << verde << alfabeto[i] << cor << " ";
                }
                else if(alfa[i]==2){
                    cout << vermelho << alfabeto[i] << cor << " ";
                }
                else{
                    cout << alfabeto[i] << " ";
                }      
                
            }
            cout << "\n\n";
            

            


        }

        
        
        
        if(ganhou){
            system("clear");
            cout << verde << "VOCE VENCEU!!!\n\n" << cor;
            cout << "A palavra certa era: " << palavra << "\n\n";
            cout << "Jogar novamente? [s/n]: ";
            cin >> resp;
            
        }
        else{
            system("clear");
            cout << vermelho << "VOCE PERDEU!!!\n\n" << cor;
            cout << "A palavra certa era: " << palavra << "\n\n";
            cout << "Jogar novamente? [s/n]: ";
            cin >> resp;
        }

        free(t);
        free(alfa);

    }

    


    return 0;
}