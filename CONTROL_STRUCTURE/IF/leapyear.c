#include <stdio.h>
int ch(int);
void main()
{
    int year;
    printf("enter the year  ");
    scanf("%d", &year);
    for (int j = year; j <= 2020; j++)
    {
        if (ch(j) == 1)
            printf("%d is a leap year ", j);
    }
}
int ch(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                // printf("leap");
                return 1;
            }
            else
            {
                // printf("not a leap year");
                return 0;
            }
        }

        else
        {
            // printf("leap year");

            return 1;
        }
    }
    else
    {
        // printf("NO");
        return 0;
    }
}