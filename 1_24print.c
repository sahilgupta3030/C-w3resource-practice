#include <stdio.h>
int main()
{
    // Write a C program that reads two integers and checks whether they are multiplied or not.

    int j, k;

    printf("Enter two nos: ");
    scanf("%d %d", &j, &k);

    if (j % k == 0 || k % j == 0)
    {
        printf("Multiplieddd\n");
    }

    return 0;
}