#include <stdio.h>

int sum_of_elements(int numbers[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += numbers[i];
    }
    return total;
}

int main()
{
    // ARRAYS
    // Arrays are always passed to functions as reference
    // Hence we can not get the size of a array inside the second function
    int numbers[] = {20, 56, 45, 78, 987, 75, 65};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int total = sum_of_elements(numbers, size);
    printf("Total sum of elements: %d\n", total);

    return 0;
}