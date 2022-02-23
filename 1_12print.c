#include <stdio.h>
int main()
{
    // Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.

    char id[10];
    int whr;
    double amt;
    printf("Enter Employee ID :\n");
    scanf("%s", &id);

    printf("Enter working hours : \n");
    scanf("%d", &whr);

    printf("Amount received per hour : \n");
    scanf("%lf", &amt);

    printf("\n \nEmplopyee Id: %s \n", id);
    printf("Salary: %.2lf \n", (whr * amt));

    return 0;
}
