#include <stdio.h>
void main()
{
    char a[20];
    char b[10];

    gets(a);
    gets(b);
    int i = 0;
    int j = 0;
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