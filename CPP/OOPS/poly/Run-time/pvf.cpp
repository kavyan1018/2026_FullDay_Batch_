#include<iostream>
using namespace std;

class Vehicle{

    public:
        virtual void start() = 0; // pure virtual function

};

class Car : public Vehicle{
    public:
        void start(){
            cout << "Car is starts with push button" << endl;
        }
};

class Bike : public Vehicle{
    public:
        void start(){
            cout << "Bike is starts with kick" << endl;
        }
};

int main(){

    Car c;
    Bike b;

    c.start();
    b.start();
}