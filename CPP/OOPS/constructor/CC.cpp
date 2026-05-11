#include <iostream>
using namespace std;

class Std
{

    int id;
    string name;

public:
    // parameterized constructor
    Std(int i, string n)
    {
        id = i;
        name = n;
    }

    // copy constructor
    Std(const Std &s)
    {

        // const -> to prevent modification of the original object
        // prevent modification -> if we pass the original object by reference, then we can modify it inside the copy constructor

        // Std -> class name
        // &s -> reference to the object being copied

        id = s.id;
        name = s.name;

        cout << "Copy constructor called" << endl;
    }

    void display()
    {

        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main()
{

    Std s1(1, "Alice"); // parameterized constructor called
    cout << "Before copying: " << endl;
    s1.display();

    Std s2 = s1; // copy constructor called
    s2.display();

    return 0;
}