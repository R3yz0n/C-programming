#include <stdio.h>
struct employee
{
    char name[20];
    char address[20];
    int age;
    float salary;
};
void main()
{
    struct employee e[50];
    int n;
    float avg_salary = 0;
    printf("enter the count of employee");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the info about %d employee", i + 1);
        fflush(stdin);
        gets(e[i].name);
        fflush(stdin);
        gets(e[i].address);
        scanf("%d", &e[i].age);
        scanf("%f", &e[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        avg_salary += e[i].salary;
    }
    avg_salary /= n;
    printf("Name\tAddress\tAge\tSalary\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%f\n", e[i].name, e[i].address, e[i].age, e[i].salary);
    }
    printf("\n\nthe average salary is %f", avg_salary);
}