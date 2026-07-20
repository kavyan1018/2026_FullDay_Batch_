#include <stdio.h>

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the key to search :");
    scanf("%d", &key);

    // binary search

    // min, max, mid

    int min = 0; // 0 -> index
    int max = size - 1;
    int mid;
    int found = 0;

    while (min <= max)
    {
        mid = (min + max) / 2;

        if (arr[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            return mid;
        }
        else if (arr[mid] < key)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }
}