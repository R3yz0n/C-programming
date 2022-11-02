#include <stdio.h>
#include <math.h>
int main()
{
    float n, s;
    printf("enter a number whose squareroot you want to find out = ");
    scanf("%f", &n);
    s = sqrt(n) * sqrt(n);
    printf("the squareroot is %f", s);
}