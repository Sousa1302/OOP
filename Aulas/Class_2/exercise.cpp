#include <iostream>

using namespace std;

bool estado = false;

struct Hardware{
    int ram;
    string placaGrafica;
    string cpu;
    string psu;
    string caixa;
    string motherBoard;
    int discoRigido;
    string dispositivosExternos;
    string fans;
};

class Computador{
    public:
        void ligarDesligar(){
            if(estado == false){
                cout << "O computador esta a ligar !\n";
                estado = true;
            }
            else{
                cout << "O computador esta a desligar !\n";
            }
        }
        void reset(){
            if(estado == true){
                cout << "O pc esta a dar reset !\n";
                estado = false;
            }
            else{
                cout << "O pc está desligado, liga-o primeiro !\n";
            }
        }
        void abrirTampa(){
            if(estado == false){
                cout << "Abrindo a tampa do pc !\n";            
            }
            else{
                cout << "Desliga primeiro o pc para abrires a tampa !\n";
            }
        }

        void input(){
            if(estado == true){
                cout << "O pc esta a receber inputs !\n";
            }
            else{
                cout << "O pc nao esta a receber inputs !\n";
            }    
        }
        void executar(){
            // Formatar()
            // abrirPasta()
            // iniciarSO()
            // removerFicheiro()
            // Hardware
        }

        Computador(int RAM, string PLACAGRAFICA, string CPU, string PSU, string CAIXA, string MOTHERBOARD, int DISCORIGIDO, string DISPOTISITIVOSEXTERNOS, string FANS){
            Hardware hardware_1(16, "RTX 4060", "Ryzen 7", "350 W", "Madeira", "Asus" , 1 , "Pen", "3");
            
            ligarDesligar();
            iniciarSO();
            input();
        }

    private:
        void formatar(){
            if(estado == true){
                //
            }
        }
        void abrirPasta(){
            if(estado == true){
                cout << "Abrindo a pasta !\n";
            }
        }
        void iniciarSO(){ // const
            // CPU const
        }
        void removerFicheiro(){

        }

        // Hardware Computador_1;
};


int main(){

    Hardware hardware = {};


    Computador pc1;
    return 0;
}