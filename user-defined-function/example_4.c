#include <stdio.h>
int comp(int, int);

void main()
{
    int n1, n2, n3;
    printf("enter thress numbers");
    scanf("%d%d%d", &n1, &n2, &n3);
    int c1 = comp(n1, n2);
    int c2 = comp(c1, n3);
    printf("the greatest number is %d", c2);
}

int comp(int x, int y)
{

    if (x > y)
        return x;
    else
        return y;
}