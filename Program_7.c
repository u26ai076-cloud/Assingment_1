// PROGRAM TO CALCULATE AREA OF A TRIANGLE.

#include <stdio.h>

int main()
{

    int l, b, area;

    printf("Enter the value of length of triangle: ", l);
    scanf("%d", &l);

    printf("Enter the value of breadth of triangle: ", b);
    scanf("%d", &b);

    area = l * b;

    printf("The area of triangle is: %d", area);

    return 0;
}