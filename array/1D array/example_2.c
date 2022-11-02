#include <stdio.h>
void main()
{
    int sum = 0;
    float avg;
    int a[5];
    for (int j = 0; j < 5; j++)
    {
        printf("enter the marks of %d subject = \n", j + 1);
        scanf("%d", &a[j]);
    }
    for (int j = 0; j < 5; j++)
    {
        sum += a[j];
    }
    avg = sum / 5.0;
    printf("\n the sum is %f", avg);
}