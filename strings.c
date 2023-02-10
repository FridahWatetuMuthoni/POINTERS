#include <stdio.h>

void print(char *string)
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // STRINGS
    // Arrays and pointers are different types that are used in similar manner
    char string[] = "Hello Wolrd";
    char *string_pointer = string;
    string_pointer[2] = 'g';
    printf("Using the string pointer to get the charater at index 2: %c\n ", string_pointer[2]);
    printf("Using the string pointer to get the charater at index 1: %c\n ", string_pointer[1]);
    printf("The size of the string: %lu\n", sizeof(string));
    printf("The length of the size: %lu\n", strlen(string));
    // The print function
    char greetings[] = "Hello Love, How are you?";
    print(greetings);
    // string constants that can not be modified
    char *constant_string = "Welcome Home";

    return 0;
}