#include <iostream>
using namespace std;

// base class / parent class
class A
{

    public:
        void showA()
        {
            cout << "Base class A" << endl;
        }
};


// derived class / child class of A
class B : public A
{

    public:
    void showB()
    {
        cout << "This is class B" << endl;
    }

};

// derived class / child class of B
class C : public B
{

    public:
    void showC()
    {
        cout << "This is class C" << endl;
    }

};

int main(){

    C c1;
    
    c1.showA();
    c1.showB();
    c1.showC();

}