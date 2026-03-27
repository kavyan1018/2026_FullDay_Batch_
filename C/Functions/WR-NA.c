#include<stdio.h>
#include<conio.h>
int addfun();

void main(){

    int add;

    add = addfun();

    printf("\n Addition of 2 numbers : %d", add);

}


int addfun(){

    int num1, num2, sum;

    printf("Enter the First Number :");
    scanf("%d", &num1);
    
    printf("Enter the Second Number :");
    scanf("%d", &num2);

    sum = num1 + num2;

    return sum;
}