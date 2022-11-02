#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, area, s;
    printf("Enter three sides\n");
    scanf("%f%f%f", &a, &b, &c);
    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %f", area);
}