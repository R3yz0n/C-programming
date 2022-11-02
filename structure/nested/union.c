#include <stdio.h>
union student
{
    char name[20];
    int id;
    char ch;
};
void main()
{

    union student s;
    printf("enter name");
    scanf("%s", s.name);
    printf("enter id");
    scanf("%d", &s.id);
    puts(s.name);
    printf("%d", s.id);
}