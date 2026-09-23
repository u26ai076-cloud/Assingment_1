// PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.

#include <stdio.h>

int main()
{

    float f, c;

    printf("Enter temperature in Fahrenheit: ", f);
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("The temperature in Centigrade is: %f ", c);

    return 0;
}