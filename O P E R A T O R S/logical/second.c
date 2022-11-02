#include <stdio.h>
void main()
{
    // Short circuit in caase of &&
    int a = 5, b = 3;
    int short_circuit = a < b && ++b;
    printf("%d\n", short_circuit);
    printf("%d", b);
    
}