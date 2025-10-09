#include <stdio.h>

int main()
{
    float m, c, x, y;

    printf("Enter slope (m) and y-intercept (c): ");
    scanf("%f %f", &m, &c);

    printf("Enter point (x, y): ");
    scanf("%f %f", &x, &y);

    if (y == m * x + c)
    {
        printf("Point lies on the line\n");
    }
    else
    {
        printf("Point does not lie on the line\n");
    }

    return 0;
}