#include <iostream>

using namespace std;

class Fatura{
    public:
        int numero;
        string nome;
        int contribuinte;
        float valor;
        string assinatura;

        void criarFatura(int numero, string nome, int contribuinte, float valor){       // precisa de ser o mm nome
            this->numero = numero;              // basicamente estamos dizer que a variavel numero é a variavel que esta como parametro
            this->nome = nome;                  
            this->contribuinte = contribuinte;  
            this->valor = valor;                
        }

        void imprimirFatura(){
            cout << "Numero: " << numero << endl;
            cout << "Nome: " << nome << endl;
            cout << "CC: " << contribuinte << endl;
            cout << "Valor: " << valor << endl;
        }

        // Construtor e um metodo que sera executado sempre que uma classe for instanceada ( Criacao de um objeto ) 
        // Basicamente sera um conjunto de regras executado ao instacear uma classe que podem ser alterados atraves do construtor
        Fatura(string assinatura){
            this->assinatura = assinatura;
            cout << "bananas !\n";
        }
};



int main(){
    Fatura fatura_1("GonçaloRaposoSousa");    // Instancear a classe 
    Fatura fatura_2("BananaJoe");             // Regra Da assinatura aplicada no construtor onde para instancear uma classe necessita de inicializar com a variavel ( regra ) aplicada na mesma

    fatura_1.criarFatura(1,"Sousa",424242,250.45);
    fatura_1.imprimirFatura();
    return 0;
}