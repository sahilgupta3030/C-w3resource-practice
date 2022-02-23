#include <stdio.h>
int main()
{
    // Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values
    float nos[4];
    float posi, mm;
    int k;

    printf("Enter number 1:");
    scanf("%f", &nos[0]);

    printf("Enter number 2:");
    scanf("%f", &nos[1]);

    printf("Enter number 3:");
    scanf("%f", &nos[2]);

    printf("Enter number 4:");
    scanf("%f", &nos[3]);

    printf("Enter number 5:");
    scanf("%f", &nos[4]);

    for (k = 0; k < 5; k++)
    {
        if (nos[k] > 0)
        {
            posi++;
            mm = mm + nos[k];
        }
    }

    printf("No of positive numbers: %.0f \n", posi);
    printf("The average of positive values is : %.2f \n", mm / posi);

    return 0;
}