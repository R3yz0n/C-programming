#include <stdio.h>
void main()
{
    int s = 0;
    for (int i = 0; i < 50; i++)
    {
        if (i % 5 == 0)
            s += i;
    }
    printf("%d", s);
}