#include <stdio.h>

void example_code()
{
    // An array of three integers
    int *p = (int *)malloc(sizeof(int) * 3);
    *p = 2;       // first element
    *(p + 1) = 3; // second element
    *(p + 2) = 4; // third element
}

void type_casting_example()
{
    int a = 1025;
    int *a_pointer = &a;
    char *p0; // creating a pointer
    // TYPE CASTING {int to char}
    p0 = (char *)a_pointer; // gives the new pointer the address of a
}

int main()
{
    example_code();
    type_casting_example();
    return 0;
}