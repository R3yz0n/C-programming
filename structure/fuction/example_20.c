#include <stdio.h>
#include <string.h>
struct em
{
    char name[20];
    char address[20];
    float salary;
};
void main()
{
    int n = 3;
    struct em e[10], t;
    for (int i = 0; i < n; i++)
    {
        printf("enter name");
        fflush(stdin);
        gets(e[i].name);
        printf("address");
        fflush(stdin);
        gets(e[i].address);
    }
    for (int i = 0; i < n - i; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(e[j].name, e[j + 1].name) > 0)
            {
                t = e[j];
                e[j] = e[j + 1];
                e[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\n", e[i].name, e[i].address);
    }
}