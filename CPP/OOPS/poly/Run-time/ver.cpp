#include<iostream>
using namespace std;

class Payment{

    public:
        virtual void pay(){
            cout << "Payment done" << endl;
        }
};

class CreditCard : public Payment{

    public:
        void pay(){
            cout << "Payment using Credit Card" << endl;
        }

};

class UPI : public Payment{

    public:
        void pay(){
            cout << "Payment using UPI" << endl;
        }

};


class NetBanking : public Payment{

    public:
        void pay(){
            cout << "Payment using Net Banking" << endl;
        }

};


int main(){

    Payment *p;

    
    CreditCard c;
    UPI u;
    NetBanking n;


    // -> arrow operator is used to access the members of the class through pointer

    p = &c;
    p -> pay();

    p = &u;
    p -> pay();

    p = &n;
    p -> pay();

    return 0;
}