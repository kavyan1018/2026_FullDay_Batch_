// push -> add element -> in top
// pop -> remove element -> from top

#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// pop
int pop()
{

    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// push
int push(int value)
{

    // add element in top
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        return -1;
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// display
int display()
{

    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

// main
int main()
{

    int value, choice;

    do
    {
        printf("\n-------------------Stack Operations---------------\n");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (top == MAX - 1)
            {
                printf("Stack overflow\n");
            }
            else
            {
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
            }
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }while (choice != 4);
}