#include <stdio.h>
int main()
{
    // Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid
    float a, b, c;

    printf("Enter sides:");
    scanf("%f %f %f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && (a + b) > c && (c + b) > a && (a + c) > b)
    {
        printf("Perimeterr %.1f\n", a + b + c);
    }
    else
    {
        printf("Not possible to create the triangle \n");
    }

    return 0;
}