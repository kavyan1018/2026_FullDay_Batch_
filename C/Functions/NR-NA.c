// No return type No argument 


#include<stdio.h>
#include<conio.h>
void addfun();

void main(){

    addfun();

}

void addfun(){

    int num1, num2, sum;

    printf("Enter the First Number :");
    scanf("%d", &num1);
    
    printf("Enter the Second Number :");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\n Addition of 2 numbers : %d", sum);
}