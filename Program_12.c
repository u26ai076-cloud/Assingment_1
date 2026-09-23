//PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    printf("ASCII code of %c = %d", ch, ch);

    return 0;
}