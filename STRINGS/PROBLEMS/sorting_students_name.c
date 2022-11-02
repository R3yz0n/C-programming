#include <stdio.h>
#include <string.h>
// program to sort Caps name in alphabet
void main()
{
    char list[50][10];
    char temp[10];

    for (int i = 0; i < 5; i++)
    {
        gets(list[i]);
    }
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (strcmp(list[j], list[j + 1]) > 0)
            {
                strcpy(temp, list[j]);
                strcpy(list[j], list[j + 1]);
                strcpy(list[j + 1], temp);
            }
        }
    }
    printf("\nSorted list is \n");

    for (int i = 0; i < 5; i++)
    {
        puts(list[i]);
    }
}