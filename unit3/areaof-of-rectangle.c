#include <stdio.h>
void main()
{
    float area, length, breadth, perimeter;
    printf("Enter length = ");
    scanf("%f", &length);
    printf("Enter breadth = ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area = %f\nPerimeter = %f", area, perimeter);
}