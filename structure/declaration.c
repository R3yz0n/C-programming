#include <stdio.h>
struct studen
{
    char name[20];
    int roll_no;
    float marks;
};
void main()
{
    struct studen s1 = {"Sagar Thapa", 16, 450};
    printf("name is %s\n", s1.name);
    printf("roll no is %d\n", s1.roll_no);
    printf("marks is %d ", s1.marks);
}