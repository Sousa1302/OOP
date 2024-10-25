#include <iostream>

using namespace std;

class Hellooo{
    public:
        string frase = "Ola mundo !\n";
        
        Hellooo(){
            cout << frase;
        }
};

// Outra maneira

class OlaMundo{
    public:
        OlaMundo();
        void imprimeOlaMundo();
};