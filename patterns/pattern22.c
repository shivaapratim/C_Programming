#include <stdio.h>

// Right angle triangle of numbers

// 1
// 1 2
// 1 2 3
// 1 2 3 4

// 1st way

// int main()
// {

//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

// 2nd way equation of lines

// comment this while using the first code otherwise 2 int main will clash
int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                printf("%d ", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}