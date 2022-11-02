#include <stdio.h>
void main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("%u\n", &a);
    printf("%u\n", p);
    printf("%u\n", *q);
    printf("%u\n", q);
    printf("%u\n", &p);

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", **q);
}
