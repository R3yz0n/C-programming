#include <stdio.h>
void main()
{
    // THese operators are used to compare two quantities and depending on their relation and take certain decisions.
    //  THe result of relational expression is either true or false, 1 or 0.

    int str, a, b, c, d;
    a = 3, b = 4, c = -1;
    str = a + b * c <= b;
    printf("%d", str);
    printf("\n a!=b=%d\n a<b=%d \nb+c==a=%d", a != b, a < b, b + c == a);
}