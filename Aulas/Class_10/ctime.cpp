#include <ctime>
#include <iostream>

using namespace std;

int main(){

    time_t timestamp;   // variavel do tipo time_t ; guardar na variavel timestamp o valor de segundos desde x time ago ( ta na biblioteca )
    time(&timestamp);   // function time and as a parameter use a reference to the variable timestamp ; transforma para timestamp
    cout << "The current time is: " << ctime(&timestamp) << endl;
    return 0;

}