#include<stdio.h>
#define size 5

int queue[size] = {10, 20, 30, 40, 50};
int front = 0;
int rear = 0;

void dequeue(){

    if(front == -1){
        printf("Queue is Empty\n");
        return;
    }


    // delete the front element
    if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        front = (front + 1) % size;
    }
}


int main(){

    printf("Before Queue : ");   
    for(int i = 0; i < size; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");


    dequeue();

    printf("After Queue : ");
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else{

        int i = front;

        while(1){
            printf("%d ", queue[i]);


            if(i == rear){
                break;
            
                i = (i + 1) % size;
            }
        }
    }
    return 0;
}