#include <stdio.h>
int main()
{
    // Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.

    int days, yy, mm, dd;

    printf("Enter total days: ");
    scanf("%d", &days);

    yy = days / 365;
    printf("%d Year(s) \n", yy);

    mm = (days - (yy * 365)) / 30;
    printf("%d Months(s) \n", mm);

    dd = days - ((yy * 365) + (mm * 30));
    printf("%d Day(s) \n", dd);

    return 0;
}