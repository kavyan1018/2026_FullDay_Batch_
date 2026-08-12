#include <stdio.h>

#define SIZE 5

int deque[SIZE];
int front = -1;
int rear = -1;

void insertFront(int value)
{
    if (front == 0)
    {
        printf("Cannot insert at front\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        front--;
    }

    deque[front] = value;
}

void insertRear(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Deque is Full\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }

    deque[rear] = value;
}

void deleteFront()
{
    if (front == -1)
    {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void deleteRear()
{
    if (rear == -1)
    {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[rear]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        rear--;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deque: ");

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", deque[i]);
    }

    printf("\n");
}

int main()
{
    insertRear(10);
    insertRear(20);
    insertRear(30);

    insertFront(5);

    display();

    deleteFront();
    display();

    deleteRear();
    display();

    return 0;
}