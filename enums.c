#include <stdio.h>

/*
A enumerated type is a user defined data type which is used to assign names to integral
constants because names are easier to handle in a program
Reasons to use enum instead of #define
1. Enums can be declared in the local scope
2. Enum names are automatically initialized by the compiler
Only itegral values are allowed
all enums constant must be unique in their scope
*/

int main()
{

    enum Bool
    {
        False, // false will get the value of 0
        True   // true will get the value of 1
    };

    enum Bool var;
    var = True;
    printf("%d\n", var);

    enum point
    {
        x = 0,
        y = 0,
        z = 0
    };
    printf("%d %d %d\n", x, y, z);

    // WE can assign values in any order.All unassigned names will get the values as value of the previous name +1
    enum points
    {
        a = 2,
        b = 34,
        c,
        d = 0
    };
    printf("%d %d %d %d \n", a, b, c, d);
    return 0;
}