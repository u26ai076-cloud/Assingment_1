//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .

#include <stdio.h>

int main()
{
    int n, i, num;
    int max, second_max;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &max);

    printf("Enter number 2: ");
    scanf("%d", &second_max);

    if(second_max > max)
    {
        int temp = max;
        max = second_max;
        second_max = temp;
    }

    for(i = 3; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
        {
            second_max = max;
            max = num;
        }
        else if(num > second_max)
        {
            second_max = num;
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d", second_max);

    return 0;
}
