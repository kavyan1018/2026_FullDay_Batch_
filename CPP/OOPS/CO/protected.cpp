#include<iostream>
using namespace std;

class Animal{

    protected:
        string name;  // protected data member

    public:
        void setName(string n){
            name = n;
        }
};

class Dog : public Animal{

    public:
        void display(){
            cout << "Dog's name: " << name << endl;
        }
};

int main(){

    Dog d;

    d.setName("Bob"); // set the name of the dog
    d.display(); // display the name of the dog

    // cout << d.name; // name is protected 
    return 0;

}