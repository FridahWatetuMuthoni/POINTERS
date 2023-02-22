#include <stdio.h>
#include <string.h>

int main()
{
    int number = 121;
    int result = 0;
    int q = number;

    // When we divide a number by ten the reminder of the division is always the last digit of the number

    while (q != 0)
    {
        int remainder = q % 10;
        result = result * 10 + remainder;
        q = q / 10;
    }

    printf("The reversed number: %d\n", result);

    // check if the number is a palindrome
    if (number == result)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }

    return 0;
}