#include <stdio.h>
#include <stdlib.h>

void example_calloc()
{
    // When values are not assigned they default to zero
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *array = (int *)calloc(n, sizeof(int));
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

int main()
{
    example_calloc();
    return 0;
}