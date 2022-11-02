#include <stdio.h>
void main()
{
    int a = 5, b = 12, c = 7;
    printf("%d\n", a < b);
    printf("%d\n", a > b);
    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a <= b);
    printf("%d\n", a >= b);
    char c1 = 'a';
    char c2 = 'b';
    char cn = c1 + 1 >= c2;
    printf("%d", cn);
}