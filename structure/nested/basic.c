#include <stdio.h>
struct student
{
    char name[20];
    struct info
    {
        int roll;
    } in;
} s;
void main()
{
    // struct student s;
    // struct info in;
    printf("enter the name");
    scanf("%s", s.name);
    printf("enter the info");
    scanf("%d", &s.in.roll);
    printf("\nname is %s", s.name);
    printf("\nsroll is %d", s.in.roll);
}