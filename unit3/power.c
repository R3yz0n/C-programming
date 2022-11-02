#include <stdio.h>
#include <math.h>
void main()
{
    int num, n, power;
    printf("Enter a number whose power is to be found");
    scanf("%d", &num);
    printf("enter the power");
    scanf("%d", &n);
    power = pow(num, n);
    printf("the power is %d", power);
}