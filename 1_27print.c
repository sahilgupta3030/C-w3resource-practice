#include <stdio.h>
int main()
{
    // Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers

    int nos[4];
    int j, pos, neg;

    printf("Enter number 1:");
    scanf("%d", &nos[0]);

    printf("Enter number 2:");
    scanf("%d", &nos[1]);

    printf("Enter number 3:");
    scanf("%d", &nos[2]);

    printf("Enter number 4:");
    scanf("%d", &nos[3]);

    printf("Enter number 5:");
    scanf("%d", &nos[4]);

    for (j = 0; j < 5; j++)
    {
        if (nos[j] > 0)
        {
            pos++;
        }
        else if (nos[j] < 0)
        {
            neg++;
        }
    }

    printf("The positive numbers are: %d \n", pos);
    printf("The negative numbers are: %d \n", neg);

    return 0;
}