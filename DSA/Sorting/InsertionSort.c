#include<stdio.h>
#include<conio.h>

int main(){

    int arr[5] = {5, 3, 4, 1, 2};
    int i, j, key;   


    // insertion sort algorithm
    for(i = 1; i < 5; i++){   // 0 1

        key = arr[i];  // key = 3  -> 1st index

        j = i - 1;  // j = 0 index  -> 5


        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;  // arr[0] = 3
    }

    // printing the sorted array
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

}