#include <stdio.h>

// Passing arrays to functions
// arrays variable acts like pointers.They point to the first element of an array
int sum_of_numbers_in_an_arr(int arr[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

// Passing a string pointer to a function

void greatings(char *name)
{
    printf("Hello World, my name is %s\n", name);
}

// interger pointers

void calculate_location(int *latitude, int *longitude)
{
    printf("Latitide: %p\n", latitude);
    printf("Longitude: %p\n", longitude);
    *latitude = *latitude + 2;
    *longitude = *longitude - 4;
}

// functional pointers
/*
Function pointers in C are variables that can store the memory address of functions and can be used in a program
to create a function call to functions pointed by them.
Function pointers in C need to be declared with an asterisk symbol and function parameters (same as the function they will point to)
before using them in the program. Declaration of function pointers in C includes the return type and data type of different function arguments.
An asterisk symbol before the pointer name differentiates the function pointer from
a usual function declaration. Functions can aspect function pointer as a function argument and
later call it inside the function body. Such passed functions are called callback functions.

*/

int *multiplication(int *x, int *y)
{
    int *total = (*x) * (*y);
    printf("x:%d, y: %d\n", *x, *y);
    printf("The total: %d\n", total);
    return total;
}

int func(int a, int b)
{
    return a + b;
}

int main()
{
    int numbers[] = {52, 78, 78, 74, 98, 78, 95};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int total = sum_of_numbers_in_an_arr(numbers, size);
    printf("The total sum is: %d\n", total);

    // greatings function
    char name[] = "Fridah";
    greatings(name);

    // integer pointers
    int latitude = 32;
    int longitude = -64;
    calculate_location(&latitude, &longitude);
    printf("Avast Now at:[%d,%d]\n", latitude, longitude);

    // functional pointers
    int num1 = 80;
    int num2 = 20;
    // function pointer declaration
    // note that our pointer declaration has identical
    // arguments as the function it will point to
    // int (*func_pointer)(int, int);
    int *func_pointer;
    // pointing the pointer to functions memory address
    // func_pointer = multiplication;
    func_pointer = multiplication(&num1, &num2);
    // calling the function using function pointer
    // int multi = (*func_pointer)(&num1, &num2);
    printf("Multiplication result is %d\n", func_pointer);

    return 0;
}