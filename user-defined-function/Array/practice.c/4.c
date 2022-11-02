#include <stdio.h>
int leap(int);
void main()
{
    for (int i = 1900; i < 2000; i++)
    {
        if (leap(i) == 1)
            printf("%d ", i);
    }
}
int leap(int y)
{

    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                return 1;
            }
            else
                return 0;
        }
        else
        {
            return 1;
        }
    }
    else
        return 0;
}