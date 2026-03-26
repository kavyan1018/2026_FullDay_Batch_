#include<stdio.h>
#include<conio.h>

void addfun(int num1 ,int num2);

void main(){


    int num1, num2;

    printf("Enter the First Number : ");
    scanf("%d", &num1);
    
    printf("Enter the Second Number : ");
    scanf("%d", &num2);

    addfun(num1 , num2);
}

void addfun(int num1, int num2){

    int sum;

    sum = num1 + num2;

    printf("\n Sum of 2 Numbers : %d", sum);

}