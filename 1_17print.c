#include <stdio.h>
int main()
{
    // Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

    int secs, h, m, s;
    printf("Enter total seconds:");
    scanf("%d", &secs);

    h = secs / 3600;
    m = (secs - (h * 3600)) / 60;
    s = secs - ((h * 3600) + (m * 60));

    printf("H:M:S – %d:%d:%d \n", h, m, s);

    return 0;
}