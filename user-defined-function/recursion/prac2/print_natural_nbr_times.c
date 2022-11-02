#include <stdio.h>
int call(int, int);

void main()
{
    int n, i;
    printf("enter the value of n and i");
    scanf("%d%d", &n, &i);
    call(n, i);
}
int call(int n, int i)
{

    if (n == 0)
        return 0;
    else
        printf("%d ", i);
    return call(n - 1, i + 1);
}