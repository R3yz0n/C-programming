#include <stdio.h>
void display(int[], int);
int sum(int[], int);
float avg(int, int);
void main()
{
    int a[100], n, add;
    float average;
    printf("enter the size of an array");
    scanf("%d", &n);
    display(a, n);
    add = sum(a, n);
    average = avg(n, add);
    printf("the sum and average is %d  and %f", add, average);
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

int sum(int a[], int n)
{
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        add += a[i];
    }
    return add;
}
float avg(int n, int add)
{
    float average;
    average = (float)add / n;
    return average;
}
