#include <stdio.h>
#include <stdlib.h>
void example_free()
{
    int *arr = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        arr[i] = i + 1;
    }
    free(arr);
    // accessing memory that is not assigned to you is very dangerous
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    example_free();
    return 0;
}