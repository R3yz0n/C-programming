#include <stdio.h>
void main()
{
    int sec, hrs, mins;
    printf("enter the seconds = ");
    scanf("%d", &sec);
    hrs = sec / 3600;
    mins = sec / 60;
    sec = sec % 60;
    printf("hrs=%d\nmins=%d\nsec=%d", hrs, mins, sec);
}