#include <stdio.h>
void add(char[], char[]);
void main()
{
    char a[20];
    char b[20];
    gets(a);
    gets(b);
    add(a, b);
    puts(a);
}
void add(char a[], char b[])
{
    int i = 0;
    int j = 0;

    while (a[i] != '\0')
    {
        i++;
    }
    while (b[j] != '\0')
    {
        j++;
    }
    int k = 0;
    while (k <= j)
    {
        a[i + k] = b[k];
        k++;
    }
}