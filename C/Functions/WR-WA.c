#include <stdio.h>
#include <conio.h>
int addfun(int num1,int num2);
void main()
{
    int num1, num2, add;

    printf("Enter the First Number :");
    scanf("%d", &num1);

    printf("Enter the Second Number :");
    scanf("%d", &num2);

    add = addfun(num1,num2);

    printf("sum = %d", add);

}

int addfun(int num1, int num2)
{
    int sum;
    sum = num1 + num2;

    return sum;
}