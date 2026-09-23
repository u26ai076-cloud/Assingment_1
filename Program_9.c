// PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.

#include <stdio.h>

int main()
{

    int hr, min, sec;

    printf("Enter number of hours: ", hr);
    scanf("%d", &hr);

    printf("Enter the number of minutes: ", min);
    scanf("%d", &min);

    printf("Enter the number of seconds: ", sec);
    scanf("%d", &sec);

    /*1 hour = 3600 seconds
    1 min = 60 sec*/
    sec = (hr * 3600) + (min * 60) + (sec);

    printf("Number of seconds are: %d", sec);

    return 0;
}