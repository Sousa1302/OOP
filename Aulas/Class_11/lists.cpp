#include <iostream>
#include <list>
#include <vector>

using namespace std;

list<int> lista = {1, 2, 3, 4, 5};  // igual ao vector soq n da pa acessar os indices como fazemos num vector

int main(){
    lista.push_back(11);

    return 0;
}