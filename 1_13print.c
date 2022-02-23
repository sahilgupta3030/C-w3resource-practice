#include <stdio.h>
int main()
{
    // Write a C program that accepts three integers and find the maximum of three

    int j, k, l;

    printf("Enter three integer values :\n");
    scanf("%d %d %d", &j, &k, &l);

    if (j >= k && j >= l)
        printf("The greatest is %d \n", j);

    if (k >= j && k >= l)
        printf("The greatest is %d \n", k);

    if (l >= k && l >= j)
        printf("The greatest is %d \n", l);

    return 0;
}