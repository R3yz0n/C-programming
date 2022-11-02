#include <stdio.h>
#include <string.h>
void main()
{
    int i = 0;
    char city[9] = "NEW YORK";
    while (city[i] != '\0')
    {
        printf("%c", city[i]);
        i++;
    }
}