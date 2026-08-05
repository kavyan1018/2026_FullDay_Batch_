#include <stdio.h>
#define MAX 5

int main()
{

    int stack[MAX];
    int top = -1;

    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    top++;
    stack[top] = 40;

    top++;
    stack[top] = 50;
    // display the stack
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}