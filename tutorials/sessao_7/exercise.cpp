#include <iostream>

using namespace std;

class Animal{
    protected:
        string Name;
    public:
        virtual void makeSound(){
            cout << "Generic animal Sound !\n";
        }

        string getName(){
            return Name;
        }

};

class Dog:public Animal{
    public:
        void makeSound() override{
            cout << "Woof !\n";
        }

        void setName(string name){
            Name = name;
        }
};

class Cat: public Animal{
    public:
        void makeSound() override{
            cout << "Meow !\n";
        }

        void setName(string name){
            Name = name;
        }
            
    
};

int main(){
    Dog cao;
    Cat Gato;

    cao.setName("Nina");
    cao.makeSound();
    cout << cao.getName() << endl;

    Gato.setName("Pantufa");
    Gato.makeSound();
    cout << Gato.getName() << endl;

    return 0;
}
