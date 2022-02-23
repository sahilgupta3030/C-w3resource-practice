#include <stdio.h>
int main()
{
    // Write a C program to find and print the square of each one of the even values from 1 to a specified value

    int k, m;

    printf("Enter the 2nd num : ");
    scanf("%d", &m);

    for (k = 1; k <= m; k++)
    {
        if (k % 2 == 0)

        {
            printf("%d^%d = %d \n", k, k, (k * k));
        }
    }

    return 0;
}