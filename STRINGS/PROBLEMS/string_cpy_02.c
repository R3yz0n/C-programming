#include <stdio.h>
#include <string.h>
void main()
{

    char a[] = "sagar thapa";
    char b[15];
    int i = 0;

    while (a[i] != '\0')

    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    puts(b);

    // char a[20] = "a";
    // strcpy(a, "yo bitch");
    // puts(a);

    // for (int i = 0; i < 20; i++)
    // {
    //     printf("%d ", a[i]);
    // }
}