#include <stdio.h>
void main()
{
    int sum = 0;
    int c = 1;
    int n1, n2;
    printf("enter the starting and ending poitn");
    scanf("%d%d", &n1, &n2);
    while (1)
    {
        if (c > n2)
            break;
        printf("%d ", n1);
        sum += n1;
        n1 += 2;

        c++;
    }
}