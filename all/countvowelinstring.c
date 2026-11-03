
#include <stdio.h>
#include <ctype.h>

int countVowelsRecursive(char string[], int index)
{
    // Base case
    if (string[index] == '\0')
    {
        return 0;
    }

    // Convert current character to lowercase
    char currentChar = tolower(string[index]);

    // Check if it is a vowel
    if (currentChar == 'a' || currentChar == 'e' ||
        currentChar == 'i' || currentChar == 'o' ||
        currentChar == 'u')
    {
        return 1 + countVowelsRecursive(string, index + 1);
    }
    else
    {
        return countVowelsRecursive(string, index + 1);
    }
}

int countVowels(char string[])
{
    return countVowelsRecursive(string, 0);
}

int main()
{
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    int count = countVowels(string);

    printf("Number of vowels in the string: %d\n", count);

    return 0;
}
