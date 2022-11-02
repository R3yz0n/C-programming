#include <stdio.h>
void call(int *, int *);
void main()
{
    int a = 10;
    int b = 99;
    printf("%d %d \n", a, b);
    int *pa = &a, *pb = &b;
    call(pa, pb);
    printf("%d %d ", a, b);
}
void call(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}