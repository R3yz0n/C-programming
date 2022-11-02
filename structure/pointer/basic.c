#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks;
};
void main()
{
    struct student s;
    struct student *p;
    p = &s;
    printf("enter the roll no");

    scanf("%d", &p->roll);
    printf("enter name");
    fflush(stdin);
    gets(p->name);
    printf("enter marks");
    scanf("%d", &p->marks);
    printf("%d\n%s\n%d", p->roll, p->name, p->marks);
}