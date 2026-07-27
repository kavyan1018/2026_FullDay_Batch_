#include<stdio.h>

void main(){

    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min_index, i, j, temp;

    // selection sort

    for(i = 0; i < size - 1; i++){

        min_index = i;
        
        // find the minimum element in unsorted array
        for(j = i + 1; j < size; j++){

            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        // swap the found minimum element with the first element
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;   
    }

    // print the sorted array
    printf("Sorted array is : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}