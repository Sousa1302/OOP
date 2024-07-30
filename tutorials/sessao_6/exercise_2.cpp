#include <iostream>

using namespace std;

class Person{
    public:
        virtual void walk()=0;
};

class Joseph:public Person{
    public: 
        void walk() override{
            cout << "I walked 10 km\n";
        }
};

class Tony:public Person{
    public:
        void walk() override{
            cout << "I walked 5 km\n";
        }
};

int main(){
    Joseph jose;
    Tony Toni;

    jose.walk();
    Toni.walk();

    return 0;
}