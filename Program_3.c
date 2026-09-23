// PROGRAM TO CALCULATE GROSS SALARY.

#include <stdio.h>

int main()
{
    float salary, hra, da, gross;

    printf("Enter the value of Basic Salary: ", salary);
    scanf("%f", &salary);

    // hra = House Rent Allowance (20% of basic salary)
    hra = salary * 0.2;

    // da = Daily Allowance (10% of basic salary)
    da = salary * 0.1;

    gross = salary + hra + da;

    printf("Gross Salary = %f ", gross);

    return 0;
}