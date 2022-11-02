#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    char sex;
    int salary;
};
void main()
{
    struct employee e;
    printf("Enter the data for employee\n");
    printf("enter the name = ");
    gets(e.name);
    printf("enter the id = ");
    scanf("%d", &e.id);
    printf("enter the sex = ");
    scanf(" %c", &e.sex);
    printf("enter the salary = ");
    scanf("%d", &e.salary);
    printf("\n\nThe data of an employee are\n");
    printf("Name : %s", e.name);
    printf("\nID : %d", e.id);
    printf("\nSex : %c", e.sex);
    printf("\nSalary : %d", e.salary);
}