//  PROGRAM TO READ THREE NUMBERS AND PRINT MAX.

#include <stdio.h>

int main()
{
   int a, b, c;

   printf("\nEnter first number: ");
   scanf("%d", &a);

   printf("\nEnter second number: ");
   scanf("%d", &b);

   printf("\nEnter third number: ");
   scanf("%d", &c);

   if (a > b)
   {
      if (a > c)
         ;
      printf(" %d is maximum", a);
   }

   else if (b > c)
   {
      if (b > a)
         ;
      printf(" %d is maximum", b);
   }
   else
      printf(" %d is maximum", c);

   return 0;
}