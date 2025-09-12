#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {

        printf("%d", num);     // print the number
        printf(" X ");         // print 'X' with spaces for readability
        printf("%d", i);       // print the multiplier
        printf(" = ");         // print '='
        printf("%d", num * i); // print the result
        printf("\n");          // move to next line
    }

    return 0;
}
