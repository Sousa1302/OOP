#include "carro.cpp"

int main(){
    Carro carro_1("Fiat","Uno");
    carro_1.acelerar();
    carro_1.travar();       // Because it is protected 


    return 0;
}