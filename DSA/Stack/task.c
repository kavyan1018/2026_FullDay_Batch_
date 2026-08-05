#include<stdio.h>

int main(){

    int stack[100];
    int top = -1, n, i;


    printf("Enter the number of elements to push into the stack: ");
    scanf("%d", &n);    

    for(i = 0; i < n; i++){
        top++;
        scanf("%d", &stack[top]);
    }

    // display the stack
    printf("Stack elements are:\n");
    for(i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }


}