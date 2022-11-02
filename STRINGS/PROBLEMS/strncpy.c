#include <stdio.h>
#include <string.h>
void main()
{

    char source[6] = "hello";
    char des[4];

    strncpy(des, source, 2);

    puts(des);
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", des[i]);
    }
}