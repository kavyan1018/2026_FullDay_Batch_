#include <iostream>
using namespace std;

class Father
{

public:
    int amount = 10000000;

    void displayFather()
    {
        cout << "This is Father class" << endl;
    }
};

// second parent class
class Mother
{

public:
    int gold = 500000;

    void displayMother()
    {
        cout << "This is Mother class" << endl;
    }
};


// single -> child class inherits from one parent class

// multiple -> child class inherits from more than one parent class

class Child : public Father, public Mother{

    public:

        void Show(){
            cout << "Child class show function called" << endl;

            // accessing parent class variables from Father
            cout << "Amount in child class: " << amount << endl;

            // accessing parent class variables from Mother
           cout << "Gold in child class: " << gold << endl;
        }

        void callParentDisplay(){
    
            displayFather();   // calls Father class display function
            displayMother();   // calls Mother class display function
            
        }
};


int main(){

    Child C; // creating object of child class -> default constructor 

    C.Show(); // calls child class show function

    C.displayFather(); // calls Father class display function using child class object

    C.displayMother(); // calls Mother class display function using child class object

    C.callParentDisplay(); // calls child class function which in turn calls both parent class display functions

}