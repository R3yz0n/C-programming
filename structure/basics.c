#include <stdio.h>
int a;
struct employee
{
    int id;
    char name[20];
    int phone;
} e;

void sagar()
{
    struct employee e;
    e.name = "ravi";
    gets(e.name);
    puts(e.name);

    printf("enter");
    scanf("%d", &e.id);
}

void main()
{
    sagar();
    int a;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("enter the info of e%d", i + 1);

    //     scanf("%d", &e[i].id);
    //     printf("enter the name of employee %d", i + 1);
    //     scanf("%s", e[i].name);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("E%d = %d\n", i + 1, e[i].id);
    //     printf("E%d name= %s\n", i + 1, e[i].name);
    // }
}