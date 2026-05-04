// Parameterized Constructor

#include<iostream>
using namespace std;

class PC{

    public:
        string name;
        int age;

    PC(string n, int a){
        name = n;
        age = a;
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

int main(){


    string name;
    int age;

    cout<<"Enter Name : ";
    cin>>name;

    cout<<"Enter Age : ";
    cin>>age;

    PC obj(name, age);
    obj.display();
}