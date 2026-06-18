/*
    1. Function Overloading
    2. Virtual Functions
    3. Pure Virtual Functions
*/

#include <iostream>
using namespace std;

class Demo{

    public:
        void fun(int a){
            cout << "Fun with int: " << a << endl;
        }

        void fun(double a){
            cout << "Fun with double: " << a << endl;
        }

        void fun(int a, int b){
            cout << "Fun with two int: " << a << ", " << b << endl;
        }
};

int main(){

    Demo obj;

    obj.fun(10);
    obj.fun(10.5);
    obj.fun(10, 20);

}