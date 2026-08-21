#include <stdio.h>
#define SIZE 5

int stack1[SIZE], stack2[SIZE];
int top1 = -1, top2 = -1;

// push operation for stack1
void push1(int value)
{

    if (top1 == SIZE - 1)
    {
        printf("Stack1 Overflow\n");
        return;
    }

    stack1[++top1] = value;
}

// pop operation for stack1
void push2(int value)
{

    if (top2 == SIZE - 1)
    {
        printf("Stack2 Overflow\n");
        return;
    }

    stack2[++top2] = value;
}

// pop operation for stack1
int pop1()
{
    return stack1[top1--];
}

// pop operation for stack2
int pop2()
{
    return stack2[top2--];
}


void enqueue(int value)
{

    if (top1 == SIZE - 1)
    {
        printf("Queue is Full\n");
        return;
    }

    push1(value);
    printf("Enqueued element: %d\n", value);
}



void dequeue()
{

    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    // If stack2 is empty, move all elements from stack1 to stack2

    if (top2 == -1)
    {

        while (top1 != -1)
        {
            push2(pop1());
        }
    }

    printf("Dequeued element: %d\n", pop2());
}


// display the elements of the queue
void display(){

    int i;

    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue elements: ");

    // display elements from stack2 in reverse order
    for(i = top2; i >= 0; i--){
        printf("%d ", stack2[i]);
    }


    // display elements from stack1 in order

    for(i = 0; i <= top1; i++){
        printf("%d ", stack1[i]);
    }

    printf("\n");
}

int main(){


    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    dequeue();

    enqueue(40);
    enqueue(50);

    display();

    return 0;
}