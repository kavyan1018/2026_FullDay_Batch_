/*

    syntax 

        class Student(){

            public :

                Student(data members){
                    // constructor body                
                }
        }
*/

#include <iostream>
using namespace std;

class Student{

    public :
        string name;
        int age;

        // counstructor -> parameterized constructor
        Student(string n, int a){
            name = n;
            age = a;
        }        

        void showDetails(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main(){

    Student s1("Arnaliya", 21);

    s1.showDetails();
    return 0;
}