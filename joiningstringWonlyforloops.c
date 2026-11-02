
#include <stdio.h>

void mergeStrings(char s1[], char s2[], char result[])
{
    int i = 0, j = 0;

    // Copy first string
    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }

    // Copy second string
    while (s2[j] != '\0')
    {
        result[i] = s2[j];
        i++;
        j++;
    }

    // Add null character at the end
    result[i] = '\0';
}

int main()
{
    char s1[100], s2[100], result[200];

    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    mergeStrings(s1, s2, result);

    printf("Merged string: %s\n", result);

    return 0;
}
