// only applied to integers like %
#include <stdio.h>
void main()
{
    int a;
    // this is because 15 & 15(chars inside printf is 15 ) is 15 xd.
    a = 0 ^ printf("hellohellohello\n");
    printf("%d\n", a);
    float x = "what is up guys??" && "sr";
    // avoid string it compares the address

    printf("%f", x);
    int here;
    here = printf("sagar") > printf("okay");
    printf("\n%d", here);
}