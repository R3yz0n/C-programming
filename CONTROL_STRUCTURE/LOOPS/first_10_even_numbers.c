#include <stdio.h>
void main()
{

    int sum = 0;
    int st, times;
    printf("enter the starting point");
    scanf("%d", &st);
    printf("enter the times u want to print nos");
    scanf("%d", &times);
    if (st % 2 != 0)
    {
        st++;
    }

    for (int j = 1; j <= times; j++)
    {

        printf("%d ", st);
        sum = sum + st;
        st += 2;
    }
    printf("\nthe sum is %d", sum);
    //  int end;
    // int n, sum = 0;
    // printf("enter the number");
    // scanf("%d", &n);
    // printf("how many");
    // scanf("%d", &end);
    // int i = 1;
    // while (1)
    // {
    //     if (i > end)
    //         break;
    //     printf("%d ", n);
    //     sum += n;
    //     n += 2;
    //     i++;
    // }
    // printf("\nthe sum is %d ", sum);
}