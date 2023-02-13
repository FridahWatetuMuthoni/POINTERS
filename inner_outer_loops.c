#include <stdio.h>
#include <stdlib.h>

void inner_loops(int n)
{

    // prints the columns
    for (int i = 0; i < n; i++)
    {
        // prints the rows
        for (int j = 0; j < n; j++)
        {
            printf("*\t");
        }

        printf("\n");
    }
}

void array_iteration()
{
    int arr[] = {52, 8, 89, 88, 74, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            printf("Value of j %d", arr[i]);
            printf("Value of j %d", arr[j]);
            printf("\n");
        }
        printf("\n");
    }
}

int main()
{
    int number_of_times = 6;
    inner_loops(number_of_times);
    array_iteration();
    return 0;
}