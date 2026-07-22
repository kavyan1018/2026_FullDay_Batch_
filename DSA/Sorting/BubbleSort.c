#include<stdio.h>
#include<conio.h>

void main(){

    int arr[] = {5, 3, 8, 4, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;


    // bubble sort
    for ( i = 0; i < size - 1; i++)
    {
        for ( j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
    }
    
    printf("Sorted array is : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

}