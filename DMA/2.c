#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    float sum = 0, avg;
    printf("enter the value of n");
    scanf("%d", &n);
    float *p = calloc(n, sizeof(float));
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &p[i]);
        sum += p[i];
    }
    avg = sum / n;
    printf("the sum and average is %f %f", sum, avg);
    free(p);
}