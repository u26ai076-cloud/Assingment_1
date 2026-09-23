// PROGRAM TO CALCULATE FACTORIAL OF A NO.

#include <stdio.h>

int main()
{
    int a, n;
    int num = 1;

    printf("Enter a number:");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        num = num * a;
    }

    printf("The factorial of the given number is: %d", num);
    return 0;
}