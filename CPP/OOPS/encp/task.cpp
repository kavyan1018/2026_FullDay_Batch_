#include <iostream>
using namespace std;

class Atm
{

private:
    int pin;
    float balance;

public:
    Atm(int b, int p)
    {
        balance = b;
        pin = p;
    }

    void deposit(int p, int amount)
    {

        if (p == pin)
        {

            if (amount > 0)
            {
                balance += amount;
                cout << "Amount deposited successfully. Current balance: " << balance << endl;
            }
            else
            {
                cout << "Invalid amount. Please enter a positive value." << endl;
            }
        }
        else
        {
            cout << "Incorrect PIN. Access denied." << endl;
        }
    }

    void withdraw(int p, int amount)
    {
        if (p == pin)
        {

            if (amount <= balance)
            {
                balance -= amount;
                cout << "Amount withdrawn successfully. Current balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient funds." << endl;
            }
        }
        else
        {
            cout << "Incorrect PIN. Access denied." << endl;
        }
    }

    void checkBalance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    Atm a1(5000, 1234);

    a1.deposit(1234, 1000); // Correct PIN
    a1.withdraw(1234, 2000); // Correct PIN
    a1.checkBalance();
}