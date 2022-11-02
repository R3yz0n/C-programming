
#include <stdio.h>
void main()
{
    int a = 10;
    int *p = &a;
    int **p1 = &p;
    printf("the address of a is %u", p);
    printf("\nthe address of p is %u", &a);
    printf("\nthe address of p is %u", &p);
    printf("\nthe address of p is %u",p1);
}
