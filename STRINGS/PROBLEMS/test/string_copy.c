#include <stdio.h>
void main()
{
    char src[10], des[10];
    gets(src);
    int i = 0;
    while (src[i] != '\0')
    {
        des[i] = src[i];
        i++;
    }
    des[i] = '\0';
    puts(des);
}