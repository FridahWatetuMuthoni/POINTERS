#include <stdio.h>

void increment(int *a_pointer)
{
    *a_pointer = *a_pointer + 15;
}

int main()
{

    // INTERGERS
    int a = 10;
    int *a_pointer = &a;
    increment(a_pointer);
    printf("%d\n", a);

    return 0;
}