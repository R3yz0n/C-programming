#include <stdio.h>
#include <time.h>
void main()
{
    int day, sec, min, hr;
    printf("enter time in seconds");
    scanf("%d", &sec);
    day = sec / 86400;
    sec = sec % 86400;
    hr = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;

    sec = sec % 60;
    printf("%d day%dhr %d mins %dsecs", day, hr, min, sec);
    printf("%d", 90000 / 3600);
}