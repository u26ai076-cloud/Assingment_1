//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N.

#include <stdio.h>

int main()
{
    int x, n, i;
    float y, power = 1;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n == 1)
    {
        y = 1 + x;
    }
    else if(n == 2)
    {
        y = 1 + (float)x / n;
    }
    else if(n == 3)
    {
        for(i = 1; i <= n; i++)
            power = power * x;

        y = 1 + power;
    }
    else
    {
        y = 1 + n * x;
    }

    printf("Value of Y = %.2f", y);

    return 0;
}
