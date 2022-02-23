#include <stdio.h>
int main (){

// Write a C program to compute the perimeter and area of a circle with a given radius.

    int r = 6;
    int p = 2* 3.14* r;
    float a = 3.14* r* r;

    printf("The perimeter of the circle is %d and the area is %f \n", p, a);
    
     return 0;
}