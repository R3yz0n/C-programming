#include <stdio.h>
#include <string.h>
void main()
{
    char names[5][10];
    char temp[10];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &names[i]);
        strupr(names[i]);
    }
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("\nThe sorted list is \n");

    for (int i = 0; i < 5; i++)
    {
        puts(names[i]);
    }
}