#include <stdio.h>
void main()
{
    int p[5], st[5], total = 0;

    for (int j = 0; j < 5; j++)
    {
        printf("enter the stock of bulb %d", j + 1);
        scanf("%d", &st[j]);
        printf("enter the price of bulb %d", j + 1);
        scanf("%d", &p[j]);
        total = total + p[j] * st[j];
    }
    printf("the total stock value is %d", total);
}