// PROGRAM TO CALCULATE SIMPLE INTEREST

#include <stdio.h>

int main()
{
    float p, r, t, si;

    printf("Enter the value of principal amount:");
    scanf("%f", &p);

    printf("Enter the value of rate of interest:");
    scanf("%f", &r);

    printf("Enter the value of time :");
    scanf("%f", &t);

    si = p * r * t / 100;

    printf("The simple interest is %f\n", si);
    printf("The total amount is: %f", p + si);
    return 0;
}