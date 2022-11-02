#include <stdio.h>
struct student
{
    char name[20];
    int marks;
    int roll;
};
void display(struct student);
void main()
{
    struct student s;
    printf("enter name");
    scanf("%s", s.name);
    printf("enter makrs");
    scanf("%d", &s.marks);
    printf("enter roll");
    scanf("%d", &s.roll);
    display(s);
    printf("\n\nafter call\n");
    printf("%s", s.name);
    printf("\n%d", s.marks);
    printf("\n%d", s.roll);
}
void display(struct student r)
{
    fflush(stdin);
    gets(r.name);
    r.marks = 9999;
    printf("\n%s", r.name);
    printf("\n%d", r.marks);
    printf("\n%d", r.roll);
}