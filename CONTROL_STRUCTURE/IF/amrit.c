#include <stdio.h>
void main()
{

    int year;
    printf("enter the year  ");
    scanf("%d", &year);

    // if (((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0)) || ((year % 4 == 0) && (year % 100 != 0)))
    // {
    //     printf("the year %d is leap year", year);
    // }
    // else
    //     printf("the year %d is NOT a leap year", year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("it is a leap year");
            }
            else
            {
                printf("not a leap year");
            }
        }
        else
        {
            printf("it is a leap yar");
        }
    }
    else
    {
        printf("not a leap year");
    }
}