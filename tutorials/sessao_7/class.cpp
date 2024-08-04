#include <iostream>

using namespace std;

/*      Access Modifiers
*   public      ->  Able to access out of that class
*   private     ->  Not acessible outside of that class
*   protected   ->  Between private and public, has some rules ( makes it accessible to child classes )
*/

// when creating a class by default any varaible will be considered private



// Abstraction Method - Showing only relevant information to the outside world
class AbstractEmployee {
    // Pure virtual function - Force the derived classes to use this function 
    virtual void AskForPromotion()=0;
};


class employee : AbstractEmployee{

    // Encapsulation Method  -  By encapsulating these functions ( getters and setters) we are protecting the data from change
    private:
        string Company;
        int Age;

        protected:
            string Name;


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

        void AskForPromotion(){
            if(Age > 30){
                cout << Name << " got promoted !\n";
            }
            else{
                cout << Name << " is not available for promotion !\n";
            }
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

// child class
// Inheritance
class Developer:public employee{
    public:
        string Fav_Programming_Lang;
    
        Developer(string name, string company, int age, string fav_programming_lang):employee(name, company, age){
            Fav_Programming_Lang = fav_programming_lang;
        }

        void fixBug(){
            cout << getName() << " fixed bug using " << Fav_Programming_Lang << endl;
            cout << Name << " fixed bug using " << Fav_Programming_Lang << endl;        // It is accessable because the variable is in a protected access modifier

        }
};

class Teacher:public employee {
    public:
        string Subject;

        void prepareLesson(){
            cout << Name << " is preparing a " << Subject << " lesson\n";
        }

        Teacher(string name, string company, int age, string subject):employee(name, company, age){
            Subject = subject;
        }
};

int main(){
    
    // Assigning the values of the object using the constructor we built
    employee funcionario_1 = employee("Robert", "Google", 31);
    employee funcionario_2 = employee("Mike", "Apple", 18);
    
    Developer d = Developer("Goncalo Sousa","Microsoft", 17,"C++");
    Teacher t = Teacher("Carl","School", 47,"Math");

    t.prepareLesson();
    t.AskForPromotion();
    
    d.fixBug();
    d.AskForPromotion();



    return 0;
}