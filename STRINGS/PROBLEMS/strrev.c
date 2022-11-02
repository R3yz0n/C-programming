#include <stdio.h>
#include <string.h>
void main()
{

    char a[20];
    gets(a);
    puts(a);
    int l = strlen(a);
    char temp;
    for (int i = 0; i < l / 2; i++)
    {
        temp = a[i];
        a[i] = a[l - i - 1];
        a[l - i - 1] = temp;
    }
    puts(a);
    // char temp[10];
    // int j = 0;
    // for (int i = l - 1; i >= 0; i--)
    // {
    //     temp[j] = a[i];
    //     j++;
    // }
    // temp[j] = '\0';
    // puts(temp);
}