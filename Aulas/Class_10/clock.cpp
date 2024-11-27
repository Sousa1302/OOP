#include <ctime>
#include <iostream>
#include <unistd.h>

using namespace std;

int main(){

    while(true){
        time_t timestamp;
        time(&timestamp);
        system("clear");
        cout << "The current time is: " << ctime(&timestamp) << endl;
        sleep(2);
    }
    return 0;

}