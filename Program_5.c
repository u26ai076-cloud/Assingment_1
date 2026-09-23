// PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE.

#include <stdio.h>

int main()
{

    int A, B, C;

    printf("Enter the value of A: ", A);
    scanf("%d", &A);

    printf("Enter the value of B: ", B);
    scanf("%d", &B);

    C = A;
    A = B;
    B = C;

    printf("After swapping: A = %d, B = %d", A, B);

    return 0;
}