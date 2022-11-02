#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20] = "sagar";

    char s2[10] = "thapa";

    printf("%s\n", strcat(s1, s2));

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", s1[i]);
    }
    char main[30];
    strcpy(main, s1);
    puts(main);
}