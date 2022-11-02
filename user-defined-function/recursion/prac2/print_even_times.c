#include <stdio.h>
int call(int, int);

void main()
{
    int s, t;
    printf("enter");
    scanf("%d%d", &s, &t);
    if (s % 10 != 0)
        s++;
    printf("\nthe sum is %d", call(s, t));
}
int call(int s, int t)
{
    if (t == 0)
        return 0;
    else
    {
        printf("%d ", s);
        return s + call(s + 2, t - 1);
    }
}