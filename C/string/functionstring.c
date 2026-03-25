#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[20], b[20];
    int len;

    printf("Enter a string : ");
    gets(a);

    // printf("Enter second string : ");
    // gets(b);

    // len = strlen(a);
    // strcpy(b, a);
    // strcat(a, b);

    // len = strcmp(a, b);

    // if (len == 0)
    // {
    //     printf("Strings are equal");
    // }
    // else
    // {
    //     printf("Strings are not equal");
    // }
    // strrev(a);

    // strlwr(a);

    strupr(a);

    printf("Reversed string is : %s", a);

}