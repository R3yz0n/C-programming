
#include <stdio.h>
int call(int, int);

void main()
{
    int s, e;
    printf("enter ");
    scanf("%d%d", &s, &e);
    printf("the sum is %d", call(s, e));
}
int call(int s, int e)
{
    if (s > e)
        return 0;
    else
    {

        return s + call(s + 1, e);
    }
}