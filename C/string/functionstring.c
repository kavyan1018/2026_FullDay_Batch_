// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// void main()
// {
//     char a[20], b[20];
//     int len;

//     printf("Enter a string : ");
//     gets(a);

//     // printf("Enter second string : ");
//     // gets(b);

//     // len = strlen(a);
//     // strcpy(b, a);
//     // strcat(a, b);

//     // len = strcmp(a, b);

//     // if (len == 0)
//     // {
//     //     printf("Strings are equal");
//     // }
//     // else
//     // {
//     //     printf("Strings are not equal");
//     // }
//     // strrev(a);

//     // strlwr(a);

//     strupr(a);

//     printf("Reversed string is : %s", a);

// }

// =============== Task ================

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100];
    int i, len = 0, max = 0, end = 0;

    printf("Enter a string : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            len++;
        }
        else
        {
            if (len > max)
            {
                max = len;
                end = i;
            }
            len = 0;
        }
    }

    // last word check
    if (len > max)
    {
        max = len;
        end = i;
    }

    printf("Largest word :");
    for (i = end - max; i < end; i++)
    {
        printf("%c", str[i]);
    }
}