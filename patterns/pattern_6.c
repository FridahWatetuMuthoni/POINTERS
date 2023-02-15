#include <stdio.h>

void pattern_one()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern_two()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            // If spaces are increasing k= what i starts with
            // if spaces are decreasing k= what i ends with
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern_three()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            // If spaces are increasing k= what i starts with
            // if spaces are decreasing k= what i ends with
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern_four()
{

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
void pattern_five()
{

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
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