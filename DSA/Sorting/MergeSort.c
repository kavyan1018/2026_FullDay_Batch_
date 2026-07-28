#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right)
{

    int i = left;
    int j = mid + 1;
    int k = left;

    int temp[100]; // Temporary array to hold merged elements

    // merege the two subarrays into temp[]
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left half
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right half
    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // copy the merged elements back to original array
    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
}

// Merge Sort function
void mergeSort(int arr[], int left, int right)
{

    if (left < right)
    {

        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);      // Sort first half
        mergeSort(arr, mid + 1, right); // Sort second half

        merge(arr, left, mid, right); // Merge the sorted halves
    }
}

int main()
{

    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}