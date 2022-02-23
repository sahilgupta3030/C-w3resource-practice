#include <stdio.h>
int main()
{
    // Write a C program that prints all even numbers between 1 and 50 (inclusive).

    int x;

    printf("The even nos between 1 to 50 are : \n");

    for (x = 1; x <= 50; x++)
    {
        if (x % 2 == 0)
        {
            printf("%d ", x);
        }
    }
    printf("\n");

    return 0;
}