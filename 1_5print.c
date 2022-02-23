#include <stdio.h>
int main (){

// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.

    int h = 7, w = 5;
    int p = 2*(h+w);
    int a = h*w;

    printf("The perimeter of rectangle is %d and the area is %d \n", p,a);
    return 0;
}