#include<iostream>
using namespace std;

class BankAccount{

    private:
        double balance;  // hidden data 


    public:
        BankAccount(double b){
            balance = b;
        }
    
        void deposit(double amount){
            balance += amount;
        }

        void displayBalance(){
            cout << "Balance: " << balance << endl;
        }
};

int main(){

    BankAccount acc(1000); // create a BankAccount object with initial balance of 1000

    acc.deposit(500); // deposit 500
    acc.displayBalance(); // display the balance

    // acc.balance = 2000;  // balance is private and cannot be accessed directly

    return 0;
}