
#include <stdio.h>
#include <string.h>

void printReverseRecursive(char string[], int index)
{
    // Base case
    if (string[index] == '\0')
    {
        return;
    }

    // Recursive call
    printReverseRecursive(string, index + 1);

    // Print current character after recursive call
    printf("%c", string[index]);
}

void printReverse(char string[])
{
    printReverseRecursive(string, 0);
    printf("\n");
}

int main()
{
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Remove newline character
    string[strcspn(string, "\n")] = '\0';

    printf("String in reverse order: ");
    printReverse(string);

    return 0;
}
