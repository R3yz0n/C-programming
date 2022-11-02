#include <stdio.h>
int sum(int, int);

void main()
{
    int a, b, add;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    add = sum(a, b);
    printf("the sum is %d ", add);
}
int sum(int a, int b)
{
    int add = a + b;
    return add;
}