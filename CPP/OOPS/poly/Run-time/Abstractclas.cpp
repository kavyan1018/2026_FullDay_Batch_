#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void show() = 0; // pure virtual function
};

class Child : public Parent
{

public:
    void show()
    {
        cout << "Child class implementation of show function" << endl;
    }
};

int main(){

    Child c;

    c.show();
}