#include<iostream>
using namespace std;

class Demo{

    private:
        int num;

    public:

        Demo(){
            num = 100;
        }

    friend void display(Demo pnum);
};

void display(Demo pnum){

    cout<<"The value of num is: "<<pnum.num<<endl;
}

int main(){

    Demo d1;

    display(d1);

    return 0;
}