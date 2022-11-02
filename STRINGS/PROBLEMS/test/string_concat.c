#include <stdio.h>
void main()
{

    char a[10] = "sagar";
    char b[10] = "thapa";
    int i = 0, j = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    while (b[j] != '\0')
    {
        a[i] = b[j];
        j++;
        i++;
    }
    a[i] = '\0';

    puts(a);
}