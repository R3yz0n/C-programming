#include <stdio.h>
#include <math.h>
void main()
{
    float area, radius;
    float const pi = 3.14;
    printf("enter radius= ");
    scanf("%f", &radius);
    area = pi * pow(radius, 2);
    float circum = 2 * pi * radius;
    printf("Area= %f\nCirumference= %f", area, circum);
}