#include <iostream>
using namespace std;

class Student
{
    private:
        int marks;    

    public:

        void setMarks(int m){
            marks = m;
        }

        void getMarks(){
            cout << "Marks: " << marks << endl;
        }
};


int main()
{
    Student s1;
    s1.setMarks(91);
    s1.getMarks();

    return 0;
}