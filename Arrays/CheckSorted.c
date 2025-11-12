#include <stdio.h>

int main()
{
    int arr[50];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int isSorted = 1; // Initially we assume that the array is sorted.

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            printf("Array is not sorted");
            isSorted = 0; // Update the value to 0 because it means array is not Sorted.
            break;
        }
    }

    if (isSorted == 1)
    {
        printf("Array is sorted");
    }

    return 0;
}
