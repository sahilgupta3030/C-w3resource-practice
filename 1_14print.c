#include <stdio.h>
int main()
{
    // Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point)
    int dist;
    float fuel;

    printf("Enter dist travelled: \n");
    scanf("%d", &dist);

    printf("Fuel spent was: \n");
    scanf("%f", &fuel);

    printf("Average consumption (km/lt) %.3f \n", (dist / fuel));

    return 0;
}


