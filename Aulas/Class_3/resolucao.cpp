#include <iostream>

using namespace std;


struct lata{
    
    string marca;
    string sabor;
    string validade;
    string fornecedor;
    string codigoBarras;
    string lote;
    string dataFrabricacao;
    string infoFornecedor;
    string materialEmbalagem;
    string infoNutricional[5];

    double preco;
    double capacidade;
    double peso;

    bool state;
};

class Refrigerante{
    private:
        lata refrigerante;      // Encapsulation
        double quantidadeSumoDisponivel;
    public:

        // Constructor
        Refrigerante(lata lata){
            refrigerante = lata;
            quantidadeSumoDisponivel = lata.capacidade;
        }

        
        void abrirLata(){
            if(refrigerante.state == false){
                cout << "Abrindo lata !\n";                
                refrigerante.state = true;
            }
            else{
                cout << "A lata ja esta aberta !\n";
            }
        }

        void beberRefrigerante(){
            double quantidade;

            if(quantidadeSumoDisponivel == 0){
                cout << "No more suminho for your fatass !\n";
                return;
            }
            
            if(refrigerante.state){
                cout << "Há " << quantidadeSumoDisponivel << " de sumo disponivel na lata \n";
                cout << "Digite a quantidade de refrigerante que deseja ingerir: ";
                cin >> quantidade;
                
                if(quantidade <= quantidadeSumoDisponivel){
                    quantidadeSumoDisponivel -= quantidade;
                    cout << "Bebeste " << quantidade << " ml de sumo !\n";
                }
                else{
                    cout << "Nao ha refrigerante suficiente !\n";
                }
            }
            else{
                cout << "Precisas de abrir primeiro a lata !\n";
            }
        }
        


};

int main(){
    lata lata_1 = {"Coca-Cola", "Cola", "10/10/2021","Coca-Cola","123456789",
                   "13245","10/8/2021", "Coca-Cola Company", "Aluminio",
                   {"Calorias: 100",
                    "Carboidratos: 30",
                    "Proteinas: 0",
                    "Gorduras: 0",
                    "Sodio: 10"},
                    5.00, 350, 0.350, false};

    Refrigerante refril_1(lata_1);
    
    while(true){
        int opcao;
        cout << "1- Abrir lata \n";
        cout << "2- Beber refrigerante \n";
        cout << "3- Sair \n";
        cout << "Escolha a tua opcao: ";
        cin >> opcao;

        if(opcao == 1){
            refril_1.abrirLata();
            cout << endl;
        }
        else if(opcao == 2){
            refril_1.beberRefrigerante();
            cout << endl;
        }
        else if(opcao == 3){
            break;
        }
        else{
            cout << "Opcao invalida !\n";
            cout << endl;
        }
    }


    return 0;
}