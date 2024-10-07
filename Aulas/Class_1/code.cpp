#include <iostream>

class Carro{    // sempre em maisculas
    public:
        string marca;
        string modelo;
        int ano;
        string cor;
        int velocidade;
        int velocidadeMaxima;

        void acelerar(){
            if(velocidade < velocidadeMaxima){
                velocidade++;
            }
        }

        
};



using namespace std;

int main(){
    Carro carro_1;      // instancear Objetos
    return 0;
}