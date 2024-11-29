#include <map>
#include <iostream>

using namespace std;

// Works as a dictionary
// key -> value

map<string, int> dicionario = {{"jardim" , 1}, 
                               {"cozinha" , 2}, 
                               {"salao" , 3}};

int main(){
    cout << dicionario["salao"] << endl;    // Diz qual o "significado" associado neste caso o int associado 
    return 0;
}