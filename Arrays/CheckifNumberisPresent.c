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

    int isPresent = 0; // Initially we assume that the number is not present.
    int numberToFind;
    printf("Enter the number to find : \n");
    scanf("%d", &numberToFind);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == numberToFind)
        {
            printf("Number is present");
            isPresent = 1; // Update the value to 1 because it means number is present.
            break;
        }
    }

    if (isPresent == 0)
    {
        printf("Number is not present");
    }

    return 0;
}
