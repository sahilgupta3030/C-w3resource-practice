#include <stdio.h>
int main()
{
    // Write a C program that read 5 numbers and sum of all odd values between them
    int nos[4];
    int k, total=0;

    printf("Enter number 1:");
    scanf("%d", &nos[0]);

    printf("Enter number 2:");
    scanf("%d", &nos[1]);

    printf("Enter number 3:");
    scanf("%d", &nos[2]);

    printf("Enter number 4:");
    scanf("%d", &nos[3]);

    printf("Enter number 5:");
    scanf("%d", &nos[4]);

    for (k = 0; k <= 5; k++)
    {
        if(nos[k]%2!=0){
            total += nos[k]; 
        }
    }
    printf("%d \n", total);

    return 0;
}