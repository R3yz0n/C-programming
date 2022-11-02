#include <stdio.h>
void main()
{
    int a = 10;
    int *p = &a;
    printf("%u\n", p);
    printf("%u\n", &a);
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%u\n", &p);
}