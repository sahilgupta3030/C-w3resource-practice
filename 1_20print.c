#include <stdio.h>
#include <math.h>
int main()
{
    // Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.

    double a, b, c;
    double d;
    printf("Enter a b c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    int inside = ((b * b) - (4 * a * c));

    if (inside > 0 && a != 0)
    {
        d = sqrt((b * b) - (4 * a * c));

        printf("The First roots is: %.5lf\n", (-(b) + d) / (2 * a));
        printf("The Second roots is: %.5lf\n", (-(b)-d) / (2 * a));
    }
    else
    {
        printf("Root does not exist \n");
    }

    return 0;
}