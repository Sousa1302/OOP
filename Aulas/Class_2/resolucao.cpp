#include <iostream>

using namespace std;

struct Hardware{
    string ram;
    string placaGrafica;
    string cpu;
    string psu;
    string caixa;
    string motherBoard;
    string discoRigido;
    string dispositivosExternos;
    string fans;
    char perifericos[5];
};

class Computer{
    private:
        Hardware computador;
        bool state;

        void Formatar(){
            cout << "O computador vai ser formatado !\n";
        }

        void AbrirPasta(){
            cout << "A pasta foi aberta !\n";
        }

        void IniciarSO(){
            cout << "O sistema operativo foi iniciado !\n";
        }

        void IniciarGPU(){
            cout << "A placa grafica esta a ser iniciada !\n";
        }

        void RemoverFicheiro(){
            cout << "O ficheiro vai ser removido !\n";
        }

        void ListarHardware(){
            cout << endl;
            cout << "Hardware do computador: " << endl;
            cout << "Ram: " << computador.ram << endl; 
            cout << "GPU: " << computador.placaGrafica << endl;
            cout << "CPU: " << computador.cpu << endl;
            cout << "PSU: " << computador.psu << endl; 
            cout << "Caixa: " << computador.caixa << endl;
            cout << "MotherBoard: " << computador.motherBoard << endl;
            cout << "Disco: " << computador.discoRigido << endl; 
            cout << "Fans: " << computador.fans << endl;
            cout << "Perifericos: ";
            for(int x = 0; x < 5; x++){
                cout << computador.perifericos[x] << " ";
            }      
            cout << endl;
            cout << endl;
        }
    
    public:
        Computer(Hardware hardware){
            this->computador = hardware;
            this->state = false;

            cout << "O computador for foi instanciado com sucesso! Tem de o ligar...\n";
            ListarHardware();
        }

        void Ligar(){
            if(state){
                cout << "O computador ja esta ligado !\n";
            }
            else{
                cout << "O computador vai ligar !\n";
                this->state = true;
            }
        }

        void Desligar(){
            if(state){
                cout << "O computador vai ser desligado !\n";
                this->state = false;
            }
            else{
                cout << "O computador ja esta desligado !\n";
            }
        }

        void Reset(){
            if(state){
                cout << "O computador vai ser reiniciado !\n";
            }
            else{
                cout << "O computador nao esta ligado !\n";
            }
        }

        void AbrirTampa(){
            cout << "A Tampa do computador foi aberta !\n";
        }

        void Executar(int opt){
            switch (opt){
            case 1:
                if(state){
                    Formatar();
                }
                else{
                    cout << "O computador nao esta ligado !\n";
                }
                break;

            case 2:
                if(state){
                    AbrirPasta();
                }
                else{
                    cout << "O computador nao esta ligado !\n";
                }
                break;
            
            case 3:
                if(state){
                    RemoverFicheiro();
                }
                else{
                    cout << "O computador nao esta ligado !\n";
                }
                break;
            
            default:
            cout << "Opcao invalida !\n";
                break;
            }
        }

        void Inputs(string input){
            if(state){
                cout << "O computador esta a receber o Input: "<< input << endl;
            }
            else{
                cout << "O computador nao esta ligado !\n";
            }
        }
};


int main(){
    Hardware hardware_1 = {"16GB","RTX 4060", "Ryzen 7 7800x", "1000W", "Madeira", "Asus ROG STRIX ", "1 TB SSD", "Corsair LL120",{'M','D','E','P','T'}};
    Computer computador(hardware_1);

    return 0;
}