#include <stdio.h>
void main()
{
    int number;
    int attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    while (1)
    {
        printf("GUESS THE  NUMBER ");
        scanf("%d", &number);

        if (number > 69)
        {
            printf("LOWER NUMBER PLEASE\n");
        }
        else if (number < 69)
        {
            printf("HIGHER NUMBER PLEASE\n");
        }
        else if (number == 69)
        {
            printf("YOU HAD A CORRECT GUESS\n");
            break;
        }
        attempts++;
    }
    printf("\nYOU GUESSED IT IN %d ATTEMPTS", attempts);
}