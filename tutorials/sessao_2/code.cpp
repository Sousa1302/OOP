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

        // Class method ( a function ) to display the info of an object

        void introduceYourself(){
            cout << "Name: " << Name << endl;
            cout << "Company: " << Company << endl;
            cout << "Age: " << Age << endl;
        }
};

int main(){
    
    employee funcionario_1;

    funcionario_1.Name = "Roberto";
    funcionario_1.Company = "Apple";
    funcionario_1.Age = 27;

    funcionario_1.introduceYourself();


    employee funcionario_2;

    funcionario_2.Name = "Sousa";
    funcionario_2.Company = "Amazon";
    funcionario_2.Age = 17;

    funcionario_2.introduceYourself();

    return 0;
}