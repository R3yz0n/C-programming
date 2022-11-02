#include <stdio.h>
void main()
{
    int f1, f2, temp = 0, n;
    int sum = 0;
    printf("enter the no up to which u want the fibonacci series");
    scanf("%d", &n);
    f1 = 0, f2 = 1;
    sum = f1 + f2;
    // 0 1 2 3 5 8
    // 25
    printf("%d %d ", f1, f2);
    // for (int j = 0; j < n; j++)
    // {
    //     temp = f1 + f2;
    //     f1 = f2;
    //     f2 = temp;
    //     printf("%d ", temp);
    //     sum += temp;
    // }
    while (1)
    {

        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
        if (temp >= n)
            break;
        printf("%d ", temp);
        sum += temp;
    }
    printf("\nthe sum is %d", sum);
}