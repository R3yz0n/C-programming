#include <stdio.h>
#define square(x) x *x
void main()
{
    // Explicit conversions
    int a;
    int b;
    a = 10;
    b = 15;
    int x = 10;

    float c = (float)a / b;
    printf("%f", c);
    printf("\n %d", square(x));
}