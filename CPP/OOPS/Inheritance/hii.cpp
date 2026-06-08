#include<iostream>
using namespace std;


class Person{

    public:
        string name;

        void getName(){

            cout << "Enter the name : " << endl;
            cin >> name;
        }
};

// Derived class
class Student : public Person{

    public:
        void displayStudent(){

            cout << "The name of the student is : " << name << endl;

        }
};

// Driver Class 2

class Teacher : public Person{

    public:
        void displayTeacher(){

            cout << "The name of the teacher is : " << name << endl;

        }

};

int main(){

    Student s1;
    Teacher t1;

    s1.getName();
    cout << "\n Students details : " << endl;
    s1.displayStudent();


    t1.getName();
    cout << "\n Teachers details : " << endl;
    t1.displayTeacher();

    return 0;
}