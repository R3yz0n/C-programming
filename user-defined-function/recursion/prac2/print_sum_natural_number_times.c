#include <stdio.h>
int sum(int, int);
void main()
{
    int s, e;
    printf("enter the value of n");
    scanf("%d%d", &s, &e);
    printf("the sum is %d", sum(s, e));
}
int sum(int s, int e)
{
    if (e == 0)
        return 0;
    else
        return s + sum(s + 1, e - 1);
}
