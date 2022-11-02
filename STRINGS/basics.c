#include <stdio.h>

#include <string.h>
void main()
{
    char b[5] = "sagar";

    int i = 0;

    char a[5] = {'s', 'a', 'g', 'a', 'r'};
    // printf("%s\n", a);

    // for (int j = 0; j < 10; j++)
    // {
    //     printf("%d ==", j);
    //     scanf(" %c", &a[j]);
    // }
    puts(b);

    while (b[i] != '\0')

    {
        printf("%c", b[i]);
        i++;
    }
}