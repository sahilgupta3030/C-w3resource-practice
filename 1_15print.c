#include <stdio.h>
#include <math.h>
int main()
{
    // Write a C program to calculate the distance between the two points.
    int x1, y1, x2, y2;
    printf("Point x1 and y1 are: \n");
    scanf("%d %d", &x1, &y1);

    printf("Point x2 and y2 are: \n");
    scanf("%d %d", &x2, &y2);

    float dist = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("The distance is %.4f \n", sqrt(dist));

    return 0;
}