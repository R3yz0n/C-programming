#include <stdio.h>
int call(int, int);

void main()
{
    int s, t;
    printf("enter");
    scanf("%d%d", &s, &t);
    if (s % 2 != 0)
        s++;
    printf("\nthe sum is %d", call(s, t));
}
int call(int s, int t)
{
    if (s > t)
        return 0;
    else
    {
        printf("%d ", s);
        return s + call(s + 2, t);
    }
}