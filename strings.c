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

    // TO UPPERCASE WITH strupr
    char greeting[] = "hello";
    strupr(greeting);
    puts(greeting);
}

void strings_basics()
{
    char string[] = "Hello People";
    char *string_ptr = string; // the pointer points to the first charater of the array
    while (*string_ptr != '\0')
    {
        printf("%c", *string_ptr);
        *string_ptr++;
    }

    // USING A POINTER TO STORE A STRING

    // storing our string using an array
    char str_arr[] = "This is the string array";

    // storing the string using a pointer
    char *str_ptr = "Hello pointer people";

    // Creating a temporary pointer to iterate over the string
    char *temp = str_ptr;
    while (*temp != '\0')
    {
        printf("%c", *temp);
        *temp++;
    }

    // ARRAY OF STRINGS
    char strings[4][12] = {
        "String",
        "Topics",
        "Pointers",
        "World"};
    // To avoid memory wastage created by the above two d array beacuse not all the strings need 12 charaters we are going to use a pointer
    char *strs[4] = {"String", "Topics", "Pointers", "World"};

    for (int i = 0; i < 4; i++)
    {
        int j = 0;
        while (*(strs[i] + j) != '\0')
        {
            printf("%c", *(strs[i] + j));
            j++;
        }
        printf("\n");
    }
}

void user_input()
{
    // In this array we can store 5 subjects each with a length of 20 charaters
    char subjects[5][20];
    int i, j;
    printf("Enter five different subjects\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", subjects[i]);
    }
    printf("The name of the subjects are \n");

    // iterating over the five subjects
    for (i = 0; i < 5; i++)
    {
        // initializing j=0 to indicate the first charater of the subject at index i
        j = 0;
        while (*(subjects[i] + j) != '\0')
        {
            printf("%c", *(subjects[i] + j));
            j++;
        }

        // Beacause  j is at the end of the ith string.its indicates the size of the string
        printf("<- size=%d\n", j);
    }
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

    strings_basics();

    return 0;
}