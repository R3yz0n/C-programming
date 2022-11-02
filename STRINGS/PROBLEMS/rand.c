#include <stdio.h>
void main()
{
    int fact = 1;
    for (int i = 5; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("%d", fact);
}