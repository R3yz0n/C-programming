#include <stdio.h>
void main()
{

    int days, months;
    printf("Enter the no of days = ");
    scanf("%d", &days);

    months = days / 30;
    days %= 10;
    printf("Months = %d\n", months);
    printf("Days = %d ", days);
    
}