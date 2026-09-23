// PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.

#include <stdio.h>

int main()
{
    int day, hr, min, sec;

    printf("Enter number of seconds: ", sec);
    scanf("%d", &sec);

    day = sec / 86400;
    sec = sec % 86400;

    hr = sec / 3600;
    sec = sec % 3600;

    min = sec / 60;
    sec = sec % 60;

    printf("\n Days = %d", day);
    printf("\n Hours = %d", hr);
    printf("\n Minutes = %d", min);
    printf("\n Seconds = %d", sec);

    return 0;
}