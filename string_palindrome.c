#include <stdio.h>
#include <string.h>

int main()
{

    char name[] = "anna";
    int size = strlen(name);
    char new_arr[10];
    int j = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        new_arr[j] = name[i];
        j++;
    }

    int i = 0;
    while (new_arr[i] != '\0')
    {
        printf("%c", new_arr[i]);
        i++;
    }
    printf("\n");

    if ((strcmp(name, new_arr)) == 0)
    {
        printf("The strings are the same ,its a paridrome");
    }
    else
    {
        printf("The strings are not the same.Hense its not a palidrome");
    }
    return 0;
}