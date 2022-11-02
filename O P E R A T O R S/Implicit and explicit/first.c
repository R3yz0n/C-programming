#include <stdio.h>
void main()
{
    // Implicit conversions
    int a;
    float b;
    a = 10;
    b = 10.5;
    float c = a + b;
    printf("%f", c);
}