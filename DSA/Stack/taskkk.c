// if else   => '{ }', '()', '[]'
#include <stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    return stack[top--];
}

void push(char ch)
{
    stack[++top] = ch;
}

int isValid(char s[])
{

    top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {

            // Stack is empty
            if (top == -1)
            {
                return 0;
            }

            char temp = pop();

            // Check for matching pairs
            if (
                (s[i] == ')' && temp != '(') ||
                (s[i] == '}' && temp != '{') ||
                (s[i] == ']' && temp != '['))
            {
                return 0;
            }
        }
    }

    // Stack should be empty at the end
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    char s[MAX];

    printf("Enter a string: ");
    scanf("%s", s);


    if(isValid(s)){
        printf("The string is valid.\n");
    }
    else{
        printf("The string is not valid.\n");
    }

}