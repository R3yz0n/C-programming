#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter two numbers");
    scanf("%d%*d %d", &a, &b, &c);
    printf("the sum is %d %d %d", a, b, c);
}