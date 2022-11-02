#include <stdio.h>
int *search(int[], int);
void main()
{
    // pointer use garera return kasari garuani?
    int n;
    printf("enter the size of an array");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int *p;
    p = search(a, n);
    printf("%d was found at %d position", *(p + 1), *p);
}

int *search(int a[], int n)
{
    int key, flag = 0;
    printf("enter the element to be searched form array");
    scanf("%d", &key);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            // printf("%d was found at %d position.", key, i + 1);

            break;
        }
    }
    int b[2] = {i + 1, key};
    int *p = b;

    return p;

    if (flag == 0)
    {
        printf("element was not found");
    }
}