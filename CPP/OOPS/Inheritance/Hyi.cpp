#include<iostream>
using namespace std;


class A  // Base class
{
    public:
    void showA()
    {
        cout<<"Base class A"<<endl;
    }
};

class B : public A{   // inherited class from class A

    public:
    void showB()
    {
        cout<<"This is a class B"<<endl;
    }
};

class C : public A{   // inherited class from class A

    public:
    void showC()
    {
        cout<<"This is a class C"<<endl;
    }
};


class D : public B , public C{     // inherited class from class B and C
    public:
    void showD()
    {
        cout<<"This is a class D"<<endl;
    }
};


int main(){

    D obj;

    obj.B::showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}
 