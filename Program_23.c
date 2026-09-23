//PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>). 

#include <stdio.h>

int main()
{
    int base, exponent, i, power = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i = 1; i <= exponent; i++)
    {
        power = power * base;
    }

    printf("Power = %d", power);

    return 0;
}
