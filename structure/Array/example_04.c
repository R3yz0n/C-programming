#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
    char grade;
};
void main()
{
    struct student s[10];
    for (int i = 0; i < 3; i++)
    {
        printf("Name of %d student = ", i + 1);
        fflush(stdin);
        gets(s[i].name);
        printf("Roll no = ");
        scanf("%d", &s[i].roll);
        printf("Marks = ");
        scanf("%f", &s[i].marks);
        printf("grade = ");
        scanf(" %c", &s[i].grade);
    }
    for (int i = 0; i < 3; i++)
    {

        printf("\n\n");

        printf("%s\n", s[i].name);
        printf("roll no = %d\n", s[i].roll);
        printf("marks = %f\n", s[i].marks);
        printf("grade = %c", s[i].grade);
    }
}