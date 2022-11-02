#include <stdio.h>
void main()
{
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    scanf("%d%d", pa, pb);
    printf("the sum is %d", *pa + *pb);
}