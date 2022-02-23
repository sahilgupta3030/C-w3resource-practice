#include <stdio.h>
int main()
{
    // Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

    float w1, w2, np1, np2;
    
    printf("Enter the w1:\n");
    scanf("%f", &w1);

    printf("Enter the Num of item 1:\n");
    scanf("%f", &np1);

    printf("Enter the w2:\n");
    scanf("%f", &w2);

    printf("Enter the Num of item 2:\n");
    scanf("%f", &np2);

   float avg = ((w1*np1) + (w2*np2))/(np1 + np2);


    printf("The average value is %f \n",avg);

    return 0;
}