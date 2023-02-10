#include <stdio.h>
#include <stdlib.h>
void example_realloc()
{
    int *arr = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        arr[i] = i + 1;
    }
    // Reallocting the memory
    int *arr_2 = (int *)realloc(arr, sizeof(int) * 8);
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", arr_2[i]);
    }
    printf("\n");

    /*
    You can free the memory with realloc too
    int *A = (int *)malloc(4 * sizeof(int));
    int *B = (int *) realloc(*A,0)
    */
}

int main()
{
    example_realloc();
    return 0;
}