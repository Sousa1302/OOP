#include <iostream>

using namespace std;

namespace xpto{
    void teste(){
        cout << "Namespace teste XPTO !\n";
    }
}

namespace abc{
    void teste(){
        cout << "Namespace abc \n";
    }
}

class Refrigerante{
    public:
        string brand;
        string sabor;
        string capacidade;
        string valor;
        string nutricao;
        

};

int main(){
    abc::teste();   // namespaces
    xpto::teste();
    return 0;
}