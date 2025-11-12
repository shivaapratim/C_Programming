#include <stdio.h>

int main()
{
    int arr[50];
    int n;
    int sum = 0; // Sum variable to compute the total of all numbers present in the array.

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Average of the array is = %d\n", sum / n);

    return 0;
}
