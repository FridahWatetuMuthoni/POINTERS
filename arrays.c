#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_of_elements(int numbers[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += numbers[i];
    }
    return total;
}

int get_random_number_from_array()
{
    /*
    Note: It's important to seed the random number generator using the srand() function and time(0)
    as its argument, to ensure that you get a different random number every time you run the program.
    */
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_size = sizeof(array) / sizeof(array[0]);
    srand(time(0));
    int random_index = rand() % array_size;
    printf("Random number from the array: %d\n", array[random_index]);
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

    int nums[] = {32, 45, 48, 87};
    int *nums_first = nums;
    printf("The first element address:%p, The first element value:%d\n", nums_first, *nums_first);
    printf("The second element address:%p, The second element value:%d\n", nums_first + 1, *(nums_first + 1));

    get_random_number_from_array();

    return 0;
}