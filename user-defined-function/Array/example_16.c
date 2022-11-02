#include <stdio.h>
int output(int[]);
int sum(int[]);
void main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int s = output(a);

    printf("the sum is %d", s);
}
int output(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    int s = sum(a);
    return s;
}
int sum(int a[])
{
    int s;
    for (int i = 0; i < 5; i++)
    {
        s = s + a[i];
    }
    return s;
}