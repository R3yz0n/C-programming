#include <stdio.h>
void main()
{
    int a, b;
    printf("enter the number a and b");
    scanf("%d%d", &a, &b);
    int and, or, xor, coma, comb;
    // 10
    // 01
    and = a & b;
    or = a | b;
    xor = a ^ b;
    coma = ~a;
    comb = ~b;
    printf("----------\n");
    printf("%d\n", and);
    printf("%d\n", or);
    printf("%d\n", xor);
    printf("%d\n", coma);
    printf("%d\n", comb);
}
