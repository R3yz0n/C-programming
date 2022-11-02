#include <stdio.h>
int great(int, int);
void main()
{
    int n1, n2, n3;
    int temp, hold;
    printf("enter the numbers");
    scanf("%d%d%d", &n1, &n2, &n3);
    temp = great(n1, n2);
    hold = great(temp, n3);
    printf("the greatest is %d", hold);
}

int great(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
        return n2;
}
