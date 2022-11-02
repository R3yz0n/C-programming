#include <stdio.h>
void main()
{
    int year, endyear;
    printf("enter the values of n and a");
    scanf("%d %d", &year, &endyear);

    for (int j = 1900; j <= 2000; j++)
    {
        if (((j % 4 == 0) && (j % 100 == 0) && (j % 400 == 0)) || ((j % 4 == 0)) && (j % 100 != 0))
        {
            printf("%d", j);
        }
    }
}