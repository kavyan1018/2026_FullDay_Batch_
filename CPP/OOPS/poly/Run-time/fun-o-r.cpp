#include<iostream>
using namespace std;

class Emp{

    public:
        void work(){
            cout << "Emp is working" << endl;
        }
};

class Dev : public Emp{

    public:
        void work(){
            cout << "Dev is working" << endl;
        }
};

class Tester : public Emp{

    public:
        void work(){
            cout << "Tester is working" << endl;
        }
};

int main(){

    Emp e;
    Dev d;
    Tester t;

    e.work();
    d.work();
    t.work();

    return 0;
}