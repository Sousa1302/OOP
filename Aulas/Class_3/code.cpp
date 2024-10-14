#include <iostream>

using namespace std;

class Sumo{
    private:
        string brand;
        string ingredientes;
        bool   material_reciclavel;
        string qrcode;
        string codigo_barras;
        string nutricao;
        string sabor;
        float preco;
        string cor_embalagem;

    public:
        int capacidade;
        bool state;

        void comprarLata(){
            state = false;
            cout << "Compraste uma lata de fanta !\n";
        }

        void abrirLata(){
            if(state == false){
                cout << "A lata foi aberta !\n";
                state = true;
            }
            else{
                cout << "A lata ja esta aberta !\n";
            }
        }

        void esmagarLata(){
            if(capacidade <= 40){
                cout << "A tua lata foi esmagada \n!";
            }
            else{
                cout << "A lata ainda possui uma grande quantidade !\n";
            }
        }

        void reciclarLata(){
            if(capacidade <= 10){
                cout << "Mandas-te a lata para a reciclagem !\n";
            }
            else{
                cout << "Ainda tens de esvaziar mais a lata !\n";
            }
        }

        void beber(){
            if(state && capacidade > 0){
                cout << "Bebeste 50ml de sumo !\n";
                capacidade -= 50;
            }
            else{
                cout << "Tens de abrir a lata primeiro !\n";
            }
        }
        
        void derramarsumo(){
            if(state && capacidade > 0){
                cout << "Derramaste 50ml de sumo !\n";
                capacidade -= 50;
            }
            else{
                cout << "Tens de abrir a lata primeiro !\n";
            }
        }

        void inspecionarLata(){
            cout << "Que lata bosnita !\n";
            // Info da lata 
        }

    Sumo(bool State){
        state = State;
    }
};

int main(){

    return 0;
}