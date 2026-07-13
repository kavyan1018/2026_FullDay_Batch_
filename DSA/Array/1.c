#include<stdio.h>


int main(){

    int arr[5];
    int i;

    printf("Enter the Elements of Array :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nArray elements are :");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}