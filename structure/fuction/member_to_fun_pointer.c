#include <stdio.h>
struct student
{
    char name[20];
    int age;
    int roll;
    float marks;
};
void print(char *, int *, int *, float *);
void main()
{
    struct student s = {"Sagar THapa", 21, 16, 99.5};
    print(s.name, &s.age, &s.roll, &s.marks);
}
void print(char *b, int *age, int *roll, float *marks)
{

    printf("%s\n%d\n%d\n%f", b, *age, *roll, *marks);
}