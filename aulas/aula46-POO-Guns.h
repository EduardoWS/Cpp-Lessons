#ifndef GUNS_H
#define GUNS_H

#include <iostream>
#include <string>

// Definir a estrutura ArmaInfo
struct ArmaInfo {
    std::string nome;
    std::string categoria;
    bool adquirida;
    int custo;
    int municaoGuardada;
    int municaoPente;
    int dano;
    int alcance;
};



class Guns {
public:
    int municaoPente;
    int id;
    void comprar(int id, int &dinheiro);
    void getArma();
    void setMunicao(int id, int &dinheiro, int quantidade);
    Guns(); // Construtor

private:
    //ArmaInfo armasDisponiveis[3]; // 3 armas
    ArmaInfo armas[3];
};





Guns::Guns() {

    /* ArmaInfo armasDisponiveis[] = {
    {"Desert Eagle", "Pistola", false, 700, 0, 7, 45, 150},
    {"AK-47", "Rifle", false, 2700, 0, 30, 35, 250},
    {"M4A4", "Rifle", false, 3100, 0, 30, 33, 240}
    }; */

    armas[0].nome = "Desert Eagle";
    armas[0].categoria = "Pistola";
    armas[0].adquirida = false;
    armas[0].custo = 700;
    armas[0].municaoGuardada = 0;
    armas[0].municaoPente = 7;
    armas[0].dano = 45;
    armas[0].alcance = 150;

    armas[1].nome = "AK-47";
    armas[1].categoria = "Rifle";
    armas[1].adquirida = false;
    armas[1].custo = 2700;
    armas[1].municaoGuardada = 0;
    armas[1].municaoPente = 30;
    armas[1].dano = 35;
    armas[1].alcance = 250;

    armas[2].nome = "M4A4";
    armas[2].categoria = "Rifle";
    armas[2].adquirida = false;
    armas[2].custo = 3100;
    armas[2].municaoGuardada = 0;
    armas[2].municaoPente = 30;
    armas[2].dano = 33;
    armas[2].alcance = 240;


}

void Guns::comprar(int id, int &dinheiro) {

    // Verificar se o ID é válido
    if (id >= 1 && id <= 3) { // 3 armas válidas

        ArmaInfo &arma = armas[id - 1]; // Acessa as informações da arma

        // Verificar se o jogador tem dinheiro suficiente
        if (dinheiro >= arma.custo) {
            dinheiro -= arma.custo;
            arma.adquirida = true; 
            std::cout << "Compra bem-sucedida: " << arma.nome << " por $" << arma.custo << std::endl;
        } else {
            std::cout << "Dinheiro insuficiente para comprar " << arma.nome << std::endl;
        }
    } else {
        std::cout << "ID de arma inválido" << std::endl;
    }
}

void Guns::getArma(){
    std::cout << "Armas Adquiridas:\n\n";
    for(int i=0; i<3; i++){
        if(armas[i].adquirida){
            std::cout << "ID: " << i+1 << " | " << armas[i].nome << " | " << "Munições: " << armas[i].municaoPente << "/" << armas[i].municaoGuardada << "\n\n";
        }
    }
}

void Guns::setMunicao(int id, int &dinheiro, int quantidade){

    // Verificar se o ID é válido
    if (id >= 1 && id <= 3) { // 3 armas válidas

        ArmaInfo &arma = armas[id - 1]; // Acessa as informações da arma

        if(arma.adquirida){
            if(quantidade >= 1 && quantidade <= 3){

                // Verificar se o jogador tem dinheiro suficiente
                if (dinheiro >= quantidade*(arma.custo/10)) {
                    dinheiro -= quantidade*(arma.custo/10);

                    //alerta gambiarra:
                    arma.municaoGuardada = arma.municaoPente * quantidade;
                    //fim gambiarra

                    std::cout << "Compra bem-sucedida: " << quantidade << " pentes por $" << quantidade*(arma.custo/10) << "\n\n";
                } else {
                    std::cout << "Dinheiro insuficiente para comprar " << quantidade << "pentes." << std::endl;
                }

            }else{
                std::cout << "Você só pode comprar de 1 a 3 pentes." << std::endl;
            }

        }else{
            std::cout << "Você não possui esta arma." << std::endl;
        }


        
    } else {
        std::cout << "ID de arma inválido" << std::endl;
    }

}


#endif
