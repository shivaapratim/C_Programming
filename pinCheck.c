#include <stdio.h>

int main()
{
    int pin = 1234;
    int entered_pin;
    float amount = 1024.079;

    printf("Enter your pin: ");
    scanf("%d", &entered_pin);

    if (entered_pin == pin)
    {
        // %.3f → prints float with 3 decimal places, also known as set precision.
        printf("%.3f\n", amount);
    }
    else
    {
        printf("Invalid pin\n");
    }

    return 0;
}
