/*
Question 3: Employee Salary Search (Hard)

Create a program that stores:

Employee ID
Employee Name
Salary

for n employees.

Ask the user to enter a salary to search.

Using Linear Search:

Find all employees having that salary.
Display:
Employee ID
Name
Salary

If no employee has that salary, print:

No employee found.

Example

Input

ID   Name     Salary
1    Raj      25000
2    Amit     30000
3    Neha     25000
4    Priya    40000

Search Salary: 25000

Output

Employee Found

ID: 1
Name: Raj
Salary: 25000

ID: 3
Name: Neha
Salary: 25000

*/

#include <stdio.h>
#include <conio.h>

void main()
{

    int n, ss, found = 0;

    printf("Enter the Number of emp :");
    scanf("%d", &n);

    int empId[n];
    char empName[n][50];
    float salary[n];

    // input details of emp
    
    printf("Enter the details of emp :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the emp id :");
        scanf("%d", &empId[i]);
        printf("Enter the emp name :");
        scanf("%s", empName[i]);
        printf("Enter the emp salary :");
        scanf("%f", &salary[i]);
    }


    // searching salary
    printf("Enter the salary to search :");
    scanf("%f", &ss);

    // linear search

    for (int i = 0; i < n; i++)
    {
        if(salary[i]  == ss){

            if(found == 0){
                printf("Employee Found\n");
            }

            printf("ID : %d\n", empId[i]);
            printf("Name : %s\n", empName[i]);
            printf("Salary : %.2f\n", salary[i]);

            found = 1;
        }
    }
    
    if(found == 1){
        printf("No employee found.\n");
    }
}