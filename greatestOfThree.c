#include <stdio.h>

int main()
{
    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x > y && x > z)
    {
        printf("X is greatest\n");
    }
    else if (y > x && y > z)
    {
        printf("Y is greatest\n");
    }
    else
    {
        printf("Z is greatest\n");
    }

    return 0;
}
