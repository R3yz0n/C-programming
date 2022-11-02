#include <stdio.h>
int fact(int);
void main()
{
    int n, r;
    printf("enter the n");
    scanf("%d%d", &n, &r);
    float x = (float)fact(n) / (fact(n - r) * fact(r));
    printf("the factorial is %f", x);
}
int fact(int a)
{
    int f = 1;
    while (a > 0)
    {
        f *= a;
        a--;
    }
}