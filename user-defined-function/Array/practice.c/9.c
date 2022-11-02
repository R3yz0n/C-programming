#include <stdio.h>
#include <string.h>
// read list of 50 students and display in alphabetical form
void sort(char[5][10]);
void main()
{
    char name[5][10];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &name[i]);
    }
    printf("\n");
    sort(name);
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", name[i]);
    }
}

void sort(char name[5][10])
{
    char temp[10];

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
}