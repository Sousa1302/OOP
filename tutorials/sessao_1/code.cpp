#include <iostream>

using namespace std;

/*      Access Modifiers
*   public      ->  Able to access out of that class
*   private     ->  Not acessible outside of that class
*   protected   ->  Between private and public, has some rules
 */


// when creating a class by default any varaible will be considered private

class employee{
    public:
        string Name;
        string Company;
        int Age;
};

int main(){
    
    employee funcionario_1;

    funcionario_1.Name = "Roberto";
    funcionario_1.Company = "Apple";
    funcionario_1.Age = 27;


    return 0;
}