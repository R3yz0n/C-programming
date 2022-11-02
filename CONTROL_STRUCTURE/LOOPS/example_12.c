#include <stdio.h>
void main()
{
    int marks, total = 0;
    float average;
    int i = 1;
    while (i <= 5)
    {
        printf("enter the marks of %d subject", i);
        scanf("%d", &marks);
        total += marks;
        i++;
    }
    printf("the total is %d\n", total);
    average = total / 5.0;
    printf("the average is %f", average);
}