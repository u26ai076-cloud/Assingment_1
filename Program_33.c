//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS. 

#include <stdio.h>

int main()
{
    int n, i, num;
    int max, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);

    max = num;
    min = num;

    for(i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
            max = num;

        if(num < min)
            min = num;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}