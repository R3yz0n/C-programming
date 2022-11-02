#include <stdio.h>
void main()
{
    int i = 1;
loop_1:
    printf("%d", i);
    i++;
    if (i < 10)
        goto loop_1;
}