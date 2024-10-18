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


int main(){
    
    abc::teste();   // namespaces
    xpto::teste();
    
    return 0;
}