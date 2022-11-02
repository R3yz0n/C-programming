#include <stdio.h>
struct student
{
    char name[20];
    int id;
};
struct student call(struct student r)
{
    gets(r.name);
    r.id = 999;
    return r;
}
void main()

{
    struct student s = {"hello", 10}, show;
    show = call(s);
    puts(show.name);
    printf("%d", show.id);
}