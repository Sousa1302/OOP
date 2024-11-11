#include <iostream>
#include <fstream>

using namespace std;

string nome_ficheiro;


int main(){

    cout << "Nome do ficheiro: ";
    cin >> nome_ficheiro; 

    try{
        ifstream file(nome_ficheiro);
        if(!file.is_open()){
            throw "O ficheiro nao existe !\n";
        }
        throw "O ficheiro foi aberto com sucesso !\n";
    }
    catch(const char* e){
        cout << e << endl;
    }

    return 0;
}



