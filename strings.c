#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

void covert_string_to_uppercase(char *string)
{
    // must include #include <ctype.h>
    int i;
    for (i = 0; string[i]; i++)
    {
        string[i] = toupper(string[i]);
    }
}

void covert_string_to_lowercase(char *string)
{
    // must include #include <ctype.h>
    int i;
    for (i = 0; string[i]; i++)
    {
        string[i] = tolower(string[i]);
    }
}

void string_manipulation()
{
    char greetings[] = "Hello World";

    // The size of an array
    int size_of_string = strlen(greetings);
    printf("The size of the array is: %d\n", size_of_string);

    // copping strings
    char string_one[] = "Copy a string one";
    char string_two[] = "Copy a string two";
    strcpy(string_one, string_two);
    printf("string one:%s\n", string_one);
    printf("string two:%s\n", string_two);

    // reading strings
    char string[] = "Teaching myself c programming";
    printf("%s\n", string);

    // Getting strings from the user
    char user_input[80];
    printf("Enter a string less than 80 charaters: ");
    gets(user_input);
    printf("User input string: %s\n", user_input);

    // converting charaters to uppercase
    covert_string_to_uppercase(user_input);
    printf("The user input in uppercase\n");
    puts(user_input);
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

    // string manipulation
    string_manipulation();

    return 0;
}