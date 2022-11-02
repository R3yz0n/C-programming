#include <stdio.h>
int display(int[], int, int);
void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    display(a, 5, 0);
}
int display(int a[], int l, int i)
{
    if (l == 0)
        return 0;

    printf("%d ", a[i]);
    return display(a, l - 1, i + 1);
}
