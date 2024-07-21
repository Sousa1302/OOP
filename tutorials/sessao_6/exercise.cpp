#include <iostream>

using namespace std;

class vehicle{
    public:
        virtual void move()=0;
};

class car:public vehicle{
    public:
        void move() override{
            cout << "Fast car !\n";
        }
};

class bycicle:public vehicle{
    public:
        void move() override{
            cout << "Slow bycicle !\n";
        }
};

int main(){
    car carro;
    carro.move();

    bycicle bicicleta;
    bicicleta.move();
    return 0;
}