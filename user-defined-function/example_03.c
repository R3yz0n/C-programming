#include <stdio.h>
int comp(int, int);
void main()
{
    int a, b;
    printf("enter a and b");
    scanf("%d%d", &a, &b);
    printf("the largest is %d", comp(a, b));
}
int comp(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}