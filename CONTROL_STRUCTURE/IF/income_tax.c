#include <stdio.h>
void main()
{
    float income;
    float tax = 0;
    printf("enter the income u make  ");
    scanf("%f", &income);
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * income;
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.20 * (income - 250000);
    }
    else
    {
        tax = 0.30 * (income - 250000);
    }
    printf("the tax is %f", tax);
}
