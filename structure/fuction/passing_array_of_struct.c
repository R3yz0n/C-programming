#include <stdio.h>
struct student
{
    char name[20];
    int marks;
    int roll;
};
void display(struct student[]);
void main()
{
    struct student s[2] = {"Sagar", 10, 29, "GanGstar", 2333, 999};
    struct student a;
    display(s);
    printf("\n%s", s[0].name);
}
void display(struct student r[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("%s\t%d\n", r[i].name, r[i].marks);
    }
    gets(r[0].name);
}