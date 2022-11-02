#include <stdio.h>
struct st
{
    char name[20];
    int roll;
    float marks;
    char gender;
    unsigned long long phno;
};
void main()
{
    struct st s = {"Sagar Thapa", 28, 901.5, 'M', 9821914646};
    printf("Name = %s\nroll no = %d\nmarks = %f\ngender = %c\nphone no = %lu", s.name, s.roll, s.marks, s.gender, s.phno);
}