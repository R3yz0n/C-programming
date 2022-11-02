#include <stdio.h>
void display(int *);
void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    display(a);
}
void display(int *a)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}