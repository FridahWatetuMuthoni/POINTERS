#include <stdio.h>

// Recursion is the process in which a function calls itsself directly or indirectly

int func(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 1 + func(n - 1);
    }
}

int func2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 7 + func2(n - 2);
    }
}

int main()
{
    int n = 3;
    printf("%d\n", func(n));

    int n2 = 4;
    printf("%d\n", func2(n2));
    return 0;
}