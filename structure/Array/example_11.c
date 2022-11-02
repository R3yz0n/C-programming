#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    char address[20];
    int salary;
};
void main()
{
    struct employee e[20], temp;
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the name");
        fflush(stdin);
        gets(e[i].name);
        strupr(e[i].name);
        printf("enter the address");
        gets(e[i].address);
        printf("enter the salary");
        scanf("%d", &e[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(e[j].name, e[j + 1].name) > 0)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    printf("Name\tAddress\tSalary\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\n", e[i].name, e[i].address, e[i].salary);
    }
}