#include <iostream>
using namespace std;

class Employee
{

private:
    int empId;
    string empName; 
    float empSalary;

    friend void display(Employee emp[], int n);
};

void display(Employee emp[], int n)
{
    int i;

    for(i = 0; i < n; i++){

        cout << " \n ----- Enter the Details of Employee " << i + 1 << " -----" << endl;

        cout << "Enter Employee ID: ";
        cin >> emp[i].empId;

        cout << "Enter Employee Name: ";
        cin >> emp[i].empName;

        cout << "Enter Employee Salary: ";
        cin >> emp[i].empSalary;
    }


    cout << " \n ----- Employee Details -----" << endl;

    for(i = 0; i < n; i++){

        cout << "Employee ID: " << emp[i].empId << endl;
        cout << "Employee Name: " << emp[i].empName << endl;
        cout << "Employee Salary: " << emp[i].empSalary << endl;
    }
    
}
int main()
{

    int n;

    cout << "Enter the number of employees: ";
    cin >> n;


    Employee emp[n];

    display(emp , n);

    return 0;
}