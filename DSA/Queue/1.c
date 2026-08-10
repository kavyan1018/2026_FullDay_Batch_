#include <stdio.h>
#define MAX 100

int main()
{

    int queue[MAX];
    int front = 0;
    int rear = -1;
    int n, value, i;


    printf("Enter the number of elements in the queue: ");
    scanf("%d", &n);


    // Enqueue elements -> push elements into the queue

    for(i = 0; i < n; i++)
    {
        printf("Enter Values :");
        scanf("%d", &value);

        rear++;   // insert at the rear end
        queue[rear] = value;
    }

    // display the elements in the queue
    printf("Elements in the queue: ");

    for(i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

}