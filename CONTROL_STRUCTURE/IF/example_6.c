#include <stdio.h>
void main()
{
    int a[4];
    char g;
    int total = 0;
    for (int j = 0; j < 4; j++)
    {
        printf("enter the marks of %d", j + 1);
        scanf("%d", &a[j]);
    }
    for (int j = 0; j < 4; j++)
    {
        total += a[j];
    }
    float per = total / 4.0;
    if (per >= 80)

        g = 'A';

    else if (per >= 60)
        g = 'B';
    else if (per >= 50)
        g = 'c';
    else if (per >= 40)
        g = 'D';
    else
        g = 'F';

    printf("the grade is %c", g);
}