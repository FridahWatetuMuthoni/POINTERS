#include <stdio.h>

// Boxes Patterns

void pattern_one()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern_two()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void pattern_three()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_four()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%c ", 64 + j);
        }
        printf("\n");
    }
}

void pattern_five()
{

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    pattern_one();
    printf("\n");
    pattern_two();
    printf("\n");
    pattern_three();
    printf("\n");
    pattern_four();
    printf("\n");
    pattern_five();
    return 0;
}