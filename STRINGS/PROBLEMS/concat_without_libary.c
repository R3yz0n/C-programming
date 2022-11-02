#include <stdio.h>
#include <string.h>
void main()
{
    char a[20];
    char b[20];
    gets(a);
    gets(b);

    // length of a
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    int j = 0;
    // j is the length of b
    while (b[j] != '\0')
    {
        j++;
    }

    for (int k = 0; k <= j; k++)
    {
        a[k + i] = b[k];
    }

    puts(a);
}