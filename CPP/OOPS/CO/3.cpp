#include<iostream>
using namespace std;

class Student{

    private:
        int marks;   // private data member

    public:

        void setMarks(){
            cout<<"Enter marks: ";
            cin>>marks;
        }

        void getMarks(){
            cout<<"Marks: "<<marks<<endl;
        }
};

int main(){

    Student s1;

    s1.setMarks();
    s1.getMarks();

}