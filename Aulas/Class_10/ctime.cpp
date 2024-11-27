#include <ctime>
#include <iostream>

using namespace std;

int main(){

    time_t timestamp;   // variavel do tipo time_t
    time(&timestamp);   // function time and as a parameter use a reference to the variable timestamp
    cout << "The current time is: " << ctime(&timestamp) << endl;
    return 0;

}