#include<iostream>
using namespace std;

class Student{

    public:

        int id;
        string name;

    // default constructor

    Student(){
        id = 0;
        name = "No Name";
    }

    // display function

    void display(){

        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;

    }
};


int main(){


    Student s1; 

    // copy constructor will be called here
    Student s2 = s1;

    cout << "Original Student Data ! " << endl;
    s1.display();

    cout << "Copied Student Data ! " << endl;
    s2.display();
}