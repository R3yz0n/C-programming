#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// My first Digital Clock
void main()
{
    int a = 0;
    int mins = 0, hour = 0;

    while (1)
    {
        if (a == 60)
        {
            a = 0;
            mins = mins + 1;
        }
        if (mins == 60)
        {
            mins = 0;
            hour++;
        }
        printf("%d hours   %d mins  %d secs", hour, mins, a);

        sleep(1);

        system("cls");
        a++;
    }
}