// PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.

#include <stdio.h>

int main()
{
    int A, B;

    printf("Enter the value of A: ", A);
    scanf("%d", &A);

    printf("Enter the value of B: ", B);
    scanf("%d", &B);

    A = A + B;
    B = A - B;
    A = A - B;

    printf("After Swapping, A = %d, B = %d", A, B);

    return 0;
}