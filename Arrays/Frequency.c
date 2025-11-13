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

    int numberToFind;
    printf("Enter the number to find : \n");
    scanf("%d", &numberToFind);

    int freq = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == numberToFind)
        {
            freq++;
        }
    }

    printf("%d", freq);

    return 0;
}
