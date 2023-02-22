#include <stdio.h>
#include <stdlib.h>

// creating a function that is a pointer
//  data type * name_of_function
// In the function parameters we are derefencing the array and the return_size
int *array_iteration(int *array, int size, int target, int *return_size)
{
    int i, j;
    // creating a pointer that stores the location of the memory allocated of 8bytes so that we can use it
    int *indices = (int *)malloc(2 * sizeof(int)); // 8 bytes => 4*2
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                indices[0] = i;
                indices[1] = j;
                *return_size = 2;
                return indices;
            }
        }
    }
    // happens when theere are no two numbers that add up to target
    *return_size = 0;
    return indices;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 8, 9};
    int size_of_array = sizeof(array) / sizeof(array[0]);
    int target = 9;
    int return_size;
    int *indices = array_iteration(array, size_of_array, target, &return_size);
    if (return_size == 2)
    {
        printf("The indices that add up to the target are: %d and %d\n", indices[0], indices[1]);
        printf("The values that add up to the target are: %d and %d\n", array[indices[0]], array[indices[1]]);
    }
    else
    {
        printf("No two numbers add up to the target\n");
    }
    // clearing the memory
    free(indices);
    return 0;
}