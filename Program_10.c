/* WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA.
      CM = M/2+P/2+C/2+E
WHERE CM = Cut of mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100 */

#include <stdio.h>

int main()
{

    int m, p, c, e, cm;

    printf("Enter your marks in Mathematics out of 200: ", m);
    scanf("%d", &m);

    printf("Enter your marks in Physics out of 200: ", p);
    scanf("%d", &p);

    printf("Enter your marks in Chemistry out of 200: ", c);
    scanf("%d", &c);

    printf("Enter your marks in Entrance Examination out of 100: ", e);
    scanf("%d", &e);

    cm = (m / 2) + (p / 2) + (c / 2) + e;

    printf("Your Cut off marks are: %d", cm);

    return 0;
}