// PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.

#include <stdio.h>

int main()
{

    int a, b, c, d, e, sum;

    printf("Enter you marks out of 100 of");

    printf("\nSubject_1: ");
    scanf("%d", &a);

    printf("\nSubject_2: ");
    scanf("%d", &b);

    printf("\nSubject_3: ");
    scanf("%d", &c);

    printf("\nSubject_4: ");
    scanf("%d", &d);

    printf("\nSubject_5: ");
    scanf("%d", &e);

    sum = a + b + c + d + e;

    if (sum > 450)
    {
        printf("Division A");
    }
    else if (sum > 400)
    {
        printf("Division B");
    }

    else if (sum > 350)
    {
        printf("Division C");
    }

    else
        printf("Division B");

    return 0;
}