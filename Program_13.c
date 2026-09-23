// PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.

#include <stdio.h>

int main()
{
    int a;

    printf("Enter your number: ", a);
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The number %d is even", a);
    }
    else
        printf("The number %d is odd", a);

    return 0;
}