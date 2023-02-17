#include <stdio.h>
#include <time.h>
#include <stdarg.h> // used for creating functions with multiple arguements
/*
The date and time functions can give three types of date and time:
1. Calender time => Current date and time based on the Gregorian calender
2. Local time=>Calender time in a specific timezone
3. Date Saving time=> local time under the daylight saving rule
FUNCTIONS:
time() => returns the calender time
time_t is an arithmetic type that is used to represent time
time_t time(time_t *timer); *timer is apointer variable pointing at the memory storage that can hold
the calender time returned by the time function
localtime()=> converts calender time to local time
struct tm *localtime(const time_t *timer);
tm is a structure that contains the components of the calender time
To convert the date and time represented by the structure tm, you can call the asctime()
function
*/

// Fixed number of arguements functions
int sum(int x, int y)
{
    return x + y;
}

// processing unlimited number of arguements

double Adddouble(int num, ...);

int maximum_number(int num, ...)
{
    int largest = 0;
    va_list numbers;
    va_start(numbers, num);
    for (int i = 0; i < num; i++)
    {
        int number = va_arg(numbers, int);
        if (number > largest)
        {
            largest = number;
        }
    }
    va_end(numbers);
    return largest;
}

int main()
{
    time_t now;
    time(&now);
    printf("Current date and time is: %s\n", asctime(localtime(&now)));
    // Sum
    int total = sum(30, 50);
    printf("The total sum of x and y is: %d\n", total);

    // multiple arguements
    double d1 = 1.5;
    double d2 = 2.5;
    double d3 = 3.5;
    double d4 = 4.5;
    double final_result = Adddouble(4, d1, d2, d3, d4);
    printf("The final result of the double: %lf\n", final_result);

    // Maximum number
    int num1 = 2;
    int num2 = 500;
    int num3 = 10;
    int num4 = 3000;
    int num5 = 200;
    int max_number = maximum_number(5, num1, num2, num3, num4, num5);
    printf("The max number is: %d\n", max_number);
    return 0;
}

/*
There are three routines declared in the header file stdarg.h that enable you to write
functions that take a variable number of arguments. They are va_start(), va_arg(), and va_end()
Also included in stdarg.h is a data type, va_list, which defines an array type suitable
for containing data items needed by va_start(), va_arg(), and va_end().
To initialize a given array that is needed by va_arg() and va_end(), you have to use the
va_start() macro routine before any arguments are processed.
*/

double Adddouble(int number_of_arguements, ...)
{
    // va_list is the type of list of arguements
    // args is the va_list variable name
    // va_list args is like int args but for functional arguements
    double result = 0.0;
    va_list numbers;
    va_start(numbers, number_of_arguements);
    for (int i = 0; i < number_of_arguements; i++)
    {
        result += va_arg(numbers, double);
    }
    va_end(numbers);
    return result;
}