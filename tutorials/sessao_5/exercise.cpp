#include <iostream>

using namespace std;

class BankAccount {
    private:
        string AccountNumber;
        string AccountHolderName;
        double Balance;
    
    public:
        BankAccount(string accountnumber, string accountholdername, double balance){
            AccountNumber = accountnumber;
            AccountHolderName = accountholdername;
            Balance = balance;
        }

        void deposit(double amount){
            Balance += amount;
        }

        void withdraw(double amount){
            if(amount <= Balance){
                Balance -= amount;
            }
            else{
                cout << "Not enough funds !\n";
            }
        }

        double getBalance(){
            return Balance;
        }

        void displayAccountInfo(){
            cout << "The account number: " << AccountNumber << endl;
            cout << "The account holder name: " << AccountHolderName << endl;
            cout << "The current balance: " << Balance << endl;
        }
};



int main(){

    BankAccount Person1("124kdawe2", "Richard", 1000);

    Person1.displayAccountInfo();
    Person1.getBalance();
    // Person1.withdraw(1001);
    Person1.deposit(2000);
    Person1.withdraw(1500);
    Person1.getBalance();

    Person1.displayAccountInfo();

    return 0;
}