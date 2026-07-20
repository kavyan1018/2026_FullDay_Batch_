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

int main()
{

    int n, ss, found = 0;

    printf("Enter the Number of emp :");
    scanf("%d", &n);

    int empId[n];
    char empName[n][50];
    float salary[n];


    /*
            empId[] = {1, 2, 3, 4};    n = 4

            0 -> 1 -> raj -> 25000
            1 -> 2 -> amit -> 30000
            2 -> 3 -> neha -> 25000
            3 -> 4 -> priya -> 40000
    
    */

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
    scanf("%d", &ss);

    // linear search

    for (int i = 0; i < n; i++)  // 0 1 2 3
    {
        if(salary[i]  == ss){   // if the salary matches the search salary

            /*
                salary[0] == ss    if salary[0] == 25000 then print the details of empId[0], empName[0], salary[0]

            */


            if(found == 0){    // if this is the first employee found with the matching salary, print "Employee Found"
                printf("Employee Found\n");
            }

            printf("ID : %d\n", empId[i]);
            printf("Name : %s\n", empName[i]);
            printf("Salary : %.2f\n", salary[i]);

            found = 1;   // that means at least one employee has been found with the matching salary
        }
    }
    
    if(found == 0){
        printf("No employee found.\n");
    }

    return 0;
}