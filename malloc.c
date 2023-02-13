#include <stdio.h>
#include <stdlib.h>

void example_malloc()
{
    // When values are not assigned they default to gabbage
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
}

/*
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target in c.
The returned array must be malloced
*/
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    /*
    We use two nested for loops to iterate through all pairs of numbers in the nums array.
    If the sum of two numbers is equal to the target, we store their indices in the indices array and return it.
    If no two numbers add up to the target, we return a returnSize of 0.
    */
    int i, j;
    int *indices = (int *)malloc(2 * sizeof(int));
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                indices[0] = i;
                indices[1] = j;
                *returnSize = 2;
                return indices;
            }
        }
    }
    *returnSize = 0;
    return indices;
}

int main()
{

    example_malloc();

    // Two sums solution
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int *indices = twoSum(nums, 4, target, &returnSize);
    if (returnSize == 2)
    {
        printf("The indices that add up to the target are: %d and %d\n", indices[0], indices[1]);
    }
    else
    {
        printf("No two numbers add up to the target\n");
    }
    free(indices);

    return 0;
}