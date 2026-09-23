// PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE.

#include <stdio.h>

int main(){
    float a,b,c,d,e, total, percentage;

    printf("Enter the marks of Subject 1: ");
    scanf("%f",&a);

    printf("\nEnter the marks of Subject 2: ");
    scanf("%f",&b);

    printf("\nEnter the marks of Subject 3: ");
    scanf("%f",&c);

    printf("\nEnter the marks of Subject 4: ");
    scanf("%f",&d);

    printf("\nEnter the marks of Subject 5: ");
    scanf("%f",&e);
    
    if (a < 0 || a > 100 ||
        b < 0 || b > 100 ||
        c < 0 || c > 100 ||
        d < 0 || d > 100 ||
        e < 0 || e > 100)
    {
        printf("\nInvalid marks entered. Marks must be between 0 and 100.");
    }
    else
    {
        total = a + b + c + d + e;
        percentage = total / 5;

        printf("\nTotal Marks = %.2f", total);
        printf("\nPercentage Obtained = %.2f%%", percentage);
    }
    return 0;
}