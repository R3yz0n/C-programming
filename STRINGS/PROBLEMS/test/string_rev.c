#include <stdio.h>
void main()
{

    char a[20];
    int i = 0;
    gets(a);
    while (a[i] != '\0')
    {
        i++;
    }
    char temp;
    for (int j = 0; j < i / 2; j++)
    {
        temp = a[j];
        a[j] = a[i - 1 - j];
        a[i - 1 - j] = temp;
    }
    puts(a);
}