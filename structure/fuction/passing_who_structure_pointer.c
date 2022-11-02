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
    struct student s = {"sagar thapa", 105, 17};
    struct student *p = &s;
    display(p);
}
void display(struct student *A)
{
    printf("%s\n", A->name);
    printf("%d\n", A->marks);
    printf("%d\n", ++(A->roll));
}
