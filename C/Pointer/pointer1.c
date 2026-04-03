#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 10;
    int *x;


    x =  &a;

    // clrscr();

    printf("\n Value of A : %d", a);
    printf("\n Addrress of A : %d", &a);
    printf("\n Value using pointer : %d",*x);
    printf("\n pointer A Store : %d",x);
    // getch();
}