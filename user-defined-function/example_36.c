#include <stdio.h>
int checky(int);

void main()
{
    for (int i = 1900; i <= 2000; i++)
    {
        if (checky(i) == 1)
            printf("%d ", i);
    }
}
int checky(int year)
{
    if (((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0)) || ((year % 4 == 0) && (year % 100 != 0)))
        return 1;

    else
        return 0;
}