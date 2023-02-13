#include <stdio.h>

void pattern_one()
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_two()
{
    int rows, i, j, space;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    space = 1;
    for (i = 1; i <= rows - 1; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;
        for (j = 1; j <= 2 * (rows - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern_three()
{
    int rows, i, j, space;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    pattern_one();
    pattern_two();
    pattern_three();
    return 0;
}