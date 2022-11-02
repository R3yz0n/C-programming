#include <stdio.h>
void swap(int *, int *, int *);
void main()
{
    int a, b, c;
    a = 5;
    b = 9;
    c = 8;
    printf("the values are a=%d b=%d c=%d\n", a, b, c);
    swap(&a, &b, &c);
    printf("the values are a=%d b=%d c=%d", a, b, c);
}
//
void swap(int *a, int *b, int *c)
{
    int t1, t2;
    t1 = *a;
    t2 = *b;
    *a = *c;
    *b = t1;
    *c = t2;
}