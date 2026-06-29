#include<iostream>
using namespace std;


// Abstract class
class Student{

    private:
        int marks; // private data member

    public:
        void setMarks(int m){ // public member function to set marks
            marks = m;
        }

        int getMarks(){ // public member function to get marks
            return marks;
        }

        virtual void display() = 0; // pure virtual function    
};

// Derived class

class Result : public Student{

    public:
        void display(){
            cout << "Marks: " << getMarks() << endl;
        }

};

int main(){

    Result r;
    r.setMarks(85);
    r.display();

    return 0;
}