#include <iostream>

using namespace std;

/*      Access Modifiers
*   public      ->  Able to access out of that class
*   private     ->  Not acessible outside of that class
*   protected   ->  Between private and public, has some rules
*/

// when creating a class by default any varaible will be considered private

class employee{

    // Encapsulation Method  -  By encapsulating these functions ( getters and setters) we are protecting the data from change
    private:
        string Name;
        string Company;
        int Age;


    public:
        // setter method
        void setName(string name){
            Name = name;
        }

        // getter method
        string getName(){
            return Name;
        }

        void setCompany(string company){
            Company = company;
        }

        string getCompany(){
            return Company;
        }

        void setAge(int age){
            if(age >= 18){
                Age = age;
            }
        }

        int getAge(){
            return Age;
        }




        // Class method ( a function ) to display the info of an object

        void introduceYourself(){
            cout << "Name: " << Name << endl;
            cout << "Company: " << Company << endl;
            cout << "Age: " << Age << endl;
        }


        // A constructor will not have a return type
        // A constructor will have the same name of the class that it belongs to
        // A constructor must be public

        employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }
};

int main(){
    
    // Assigning the values of the object using the constructor we built
    employee funcionario_1 = employee("Robert", "Google", 27);
    funcionario_1.introduceYourself();


    employee funcionario_2 = employee("Sousa", "Apple", 17);
    funcionario_2.introduceYourself();


    funcionario_1.setAge(17);
    cout << "Employee 1 is " << funcionario_1.getAge() << " years old !\n";

    

    return 0;
}