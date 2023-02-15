#include <stdio.h>

void pattern_one()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern_two()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern_three()
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

void pattern_four()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2)
            {
                printf("%d", 1);
            }
            else
            {
                printf("%d", 0);
            }
        }
        printf("\n");
    }
}

void pattern_five()
{
    int i, j, col;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void pattern_six()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == 5 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern_seven()
{
    int i, j, k = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
}

void pattern_eight()
{
    int i, j, k = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (k % 2)
            {
                printf("%d", 0);
            }
            else
            {
                printf("%d", 1);
            }
            k++;
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
    printf("\n");
    pattern_six();
    printf("\n");
    pattern_seven();
    printf("\n");
    pattern_eight();
    printf("\n");
    return 0;
}