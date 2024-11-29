#include <iostream>
#include <vector>

using namespace std;

vector<int> numeros = {1 ,2 ,3 ,4 , 5};


int main(){

    for(int num : numeros){     // nao importa o tamanho do array, agr pode-se iterar sobre todos os elementos sem nos preocuparmos
        cout << num << endl;    
    }

    cout << endl;

    cout << numeros.at(0) << endl;      // acessar indices do vector 

    numeros.pop_back();     // deletes the last value of the vector 

    for(int num : numeros){     
        cout << num << endl;    
    }

    numeros.push_back(10);  // adds a value to the end of the vector 

    for(int num : numeros){     
        cout << num << endl;    
    }

    numeros.insert(numeros.begin() + 2, 25);  // Adiciona o valor 25, comeca no indice 0 (begin) e adiciona mais 2 indices e coloca-o la 
    
    cout << endl;

    for(int num : numeros){     
        cout << num << endl;    
    }

    numeros.clear();       // Apaga todo o vector 

    return 0;
}