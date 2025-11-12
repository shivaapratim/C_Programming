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

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
