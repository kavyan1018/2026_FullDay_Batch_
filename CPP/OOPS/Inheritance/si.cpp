#include<iostream>
using namespace std;

class parent{

    public:

        int amount = 10000000;

    void display(){
        cout<<"This is parent class"<<endl;
    }

};

// parent class -->  child class
// : -> single class inheritance

class Child : public parent{

    public:
    void Show(){

        cout << "Child class show function called" << endl;

        cout << "Amount in child class: " << amount << endl; // accessing parent class variable
    }

    void callParentDisplay(){
    
        display();   // calls Parent class display function
        
    }
};


int main()
{

    Child C; // creating object of child class -> default constructor 
    
    C.Show(); // calls child class show function

    C.display(); // calls parent class display function using child class object

    C.callParentDisplay(); // calls child class function which in turn calls parent class display function
    
}