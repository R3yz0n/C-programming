#include <stdio.h>
#include <string.h>
void main()
{
    char a[9] = "sagar";

    char b[10] = "thapa";
    int l = strlen(a) + 3;
    printf("%d\n", l);
    strncat(a, b, 3);
    puts(a);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
}