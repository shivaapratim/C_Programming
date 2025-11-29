#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 5, 8, 10};
    int n = 6, low = 0, high = n - 1, mid, key = 5;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Found at index %d", mid);
            return 0;
        }
        else if (a[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Not found");
}
