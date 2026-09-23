/*ROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING 
CONDATIONAL OPERATOR */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= 'a' && ch <= 'z') ? printf("Small Case Letter") : printf("Not a Small Case Letter");

    return 0;
}
 