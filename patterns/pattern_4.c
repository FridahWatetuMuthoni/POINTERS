#include <stdio.h>

void pattern_one()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}
void pattern_two()
{
    int i, j;
    for (i = 5; i >= 0; i--)
    {
        for (j = 0; j <= i - 1; j++)
        {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}
void pattern_three()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i - 1; j <= 4; j++)
        {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}
void pattern_four()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 4; j >= i - 1; j--)
        {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}
void pattern_five()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i - 1; j--)
        {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}
void pattern_six()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = i - 1; j >= 0; j--)
        {
            printf("%c", 65 + j);
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
    return 0;
}