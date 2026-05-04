// Parameterized Constructor

#include <iostream>
using namespace std;

class PC
{

public:
    string name;
    int age;

    PC(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "------------------------------" << endl;
    }
};

int main()
{

    int n;

    cout << "Enter Number of People : ";
    cin >> n;

    string name;
    int age;

    PC* arr[n];

    /*
        arr[0] -> points to -> object 1    -> "jone" , 25
        arr[1] -> points to -> object 2     -> "mike" , 30
    */

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Details of Person " << i + 1 << endl;

        cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Age : ";
        cin >> age;

        arr[i] = new PC(name, age);    // new -> dynamically memory allocation
    }

    for (int i = 0; i < n; i++)
    {
        arr[i]->display();   // -> (array of pointers)  -> access object's members


                    // . (dot pointer) -> it will access object 
    }

}