#include <stdio.h>
struct student
{
    char name[20];
    int marks;
    int roll;
};
void display(struct student *);
void main()
{
    struct student s[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter name");

        fflush(stdin);
        gets(s[i].name);
        printf("enter marks");

        scanf("%d", &s[i].marks);
    }
    display(s);
}
void display(struct student *r)
{
    for (int i = 0; i < 2; i++)
    {
        printf("%s\t%d\n", (r + i)->name, (r + i)->marks);
    }
}