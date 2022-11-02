#include <stdio.h>
struct student
{
    int roll_no, age;
    float marks;
} ram;
struct teacher
{
    int id, age;
} ram;

void main()
{

    printf("Enter the age of ram(student)");
    scanf("%d", &ram.age);
    printf("enter the age of ram(teacher)");
    scanf("%d", &ram.age);
}