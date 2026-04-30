#include<iostream>
using namespace std;

class Stu{

    private:
        int marks;   
        int rollno;

    public:

        void setData(int r, int m){
            rollno = r;
            marks = m;
        }

        int getrollNo(){
            return rollno;
        }

        void showData(){
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Marks: "<<marks<<endl;
        }

};

int main(){

    Stu s[5]; // array of 5 objects

    s[0].setData(1, 85);
    s[1].setData(2, 90);
    s[2].setData(3, 78);
    s[3].setData(4, 92);
    s[4].setData(5, 88);

    int searchRollNo;

    cout << "Enter roll number to search: ";
    cin >> searchRollNo;


    bool found = false;

    // search 

    for(int i = 0; i < 5; i++){

        if(s[i].getrollNo() == searchRollNo){
         
            s[i].showData();
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Student not found !" << endl;
    }
}