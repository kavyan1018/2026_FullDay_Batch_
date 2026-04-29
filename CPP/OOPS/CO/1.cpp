#include<iostream>
using namespace std;


// class definition
// Class name 

class MyFirstClass{
    string name;
    int age;


    void setData(){

        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;

    }

    void display(){

        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;

    }

    friend int main();  // main function is a friend of MyFirstClass
};


int main(){

    MyFirstClass s1;

    s1.setData();
    s1.display();

}