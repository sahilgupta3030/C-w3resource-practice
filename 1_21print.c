#include <stdio.h>
int main()
{
    //  Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80.
    int j;

    printf("Enter an integer: ");
    scanf("%d", &j);

    if (j >= 1 && j <= 20)
    {
        printf("Range in 1 to 20 \n");
    }
    else if (j >= 21 && j <= 40)
    {
        printf("Range in 21 to 40 \n");
    }
    else if (j >= 41 && j <= 60)
    {
        printf("Range in 41 to 60 \n");
    }
    else if (j >= 61 && j <= 80)
    {
        printf("Range in 61 to 80 \n");
    }
    else
    {
        printf("Errorrrrr \n");
    }

    return 0;
}