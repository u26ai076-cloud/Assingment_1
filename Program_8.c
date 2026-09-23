/*EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO
NUMBER OF DAY,HOURS AND MINUTES */

#include <stdio.h>

int main()
{

    int sec = 31558150;
    int day, hr, min;

    /*1 day = 86400 seconds
    1 hour = 3600 seconds
    1 minute = 60 seconds*/

    day = sec / 86400;
    sec = sec % 86400;

    hr = sec / 3600;
    sec = sec % 3600;

    min = sec / 60;
    sec = sec / 60;

    printf("\nDays = %d", day);
    printf("\nHours = %d", hr);
    printf("\nMinutes = %d", min);
    printf("\nSeconds = %d", sec);

    return 0;
}