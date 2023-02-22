#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int add(int *a, int *b)
{
    return *a + *b;
}

int *get_pointer(int x)
{
    int *ptr = &x; // create a pointer to the address of c
    return ptr;    // return the pointer
}

// dynamically creating an array of the size that is passed to the function
// returning the pointer to the dynamically created arr
int *create_array(int size)
{
    int *arr = malloc(size * sizeof(int));
    return arr;
}

int main()
{
    // Functin pointers
    int a = 10;
    int b = 20;

    int (*func_pointer)(int *, int *);
    func_pointer = add;
    int total = func_pointer(&a, &b);
    printf("The total is :%d\n", total);

    // A function that returns a pointer
    int size = 10;
    int *my_array = create_array(size);
    // using the dynamically created array
    for (int i = 0; i < size; i++)
    {
        my_array[i] = i;
    }
    // Getting the values of the array
    for (int i = 0; i < size; i++)
    {
        printf("Array[%d]=%d\n", i, my_array[i]);
    }
    // Note that the caller of this function is responsible for freeing the memory allocated by malloc
    free(my_array); // Free the memory when done using the array
    return 0;
}