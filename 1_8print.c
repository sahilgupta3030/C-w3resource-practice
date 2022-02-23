#include <stdio.h>
int main()
{
    // Write a C program to convert specified days into years, weeks and days.

    int day;

    printf("Enter dayss !\n");
    scanf("%d", &day);

    int yr = day / 365;
    int wk = ( day % 365)/ 7;
    int rd = day - ((yr * 365) + (wk * 7));
    
    printf("YEARS : %d \n", yr);
    printf("WEEKS: %d and DAYS: %d \n", wk, rd);

    return 0;
}
