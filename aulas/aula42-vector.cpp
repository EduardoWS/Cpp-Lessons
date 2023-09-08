#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> num1;
    vector <int> num2;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    num2.push_back(4);
    num2.push_back(4);
    num2.push_back(4);
    num2.push_back(4);
    num2[3] = 0;

    cout << "\nPrimeiro valor do num1: " << num1.front() << "\n";
    cout << "Ultimo valor do num1..: " << num1.back() << "\n";
    cout << "num1[2]...............: " << num1.at(2) << "\n";
    cout << "Valor do meio.........: " << num1[num1.size()/2] << "\n";

    num1.swap(num2); //troca os elementos de num1 pelos elementos de num2

    cout << "\nTamanho do vetor: " << num1.size() << "\n\n";


    //impressao dos vetores:
    for(int i=0; i<num1.size(); i++){
        cout << num1[i] << " ";
    }
    cout << "\n\n";

    num2.insert(num2.begin()+1, 888);
    //num2.erase(num2.begin()+1);

    for(int i=0; i<num2.size(); i++){
        cout << num2[i] << " ";
    }
    cout << "\n\n";

    return 0;
}