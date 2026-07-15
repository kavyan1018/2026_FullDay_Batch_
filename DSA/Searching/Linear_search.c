#include <stdio.h>

int LinearSearch(int arr[], int size, int key)
{

    int i;

    for (i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1; // not found

    // 0 1
}

int main()
{

    int arr[] = {12, 25, 8, 19, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    int res;

    //    sizeof(arr) -> 0 - 4    -> 4 bytes

    /*
                10 -> 4 bytes
                20 -> 4 bytes
                30 -> 4 bytes
                40 -> 4 bytes
                50 -> 4 bytes

            Total = 20 bytes
            sizeof(arr)  -> 20

            sizeof(arr[0])  // 4 bytes
                20 / 4 = 5
    */

    printf("\nEnter the Numebr to Search :");
    scanf("%d", &key);

    res = LinearSearch(arr, size, key);

    if (res != -1)
    {
        printf("Element Found ar index %d", res);
    }
    else{
        printf("Element Not Found !");
    }
}