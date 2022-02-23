#include <stdio.h>
int main()
{
    // Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values"

    int p, q, r, s;
    printf("Enter the integers: ");
    scanf("%d %d %d %d", &p, &q, &r, &s);

    if ((q > r) && (s > p) && ((r + s) > (p + q)) && (q > 0) && (r > 0) && (s > 0) && (p % 2 == 0))
        printf("Correct Valuess \n");
    else
        printf("Wrong Valuess \n");
    return 0;
}