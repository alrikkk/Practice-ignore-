#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int calls = 0; // Global counter for recursive calls

bool isPalindromeRecursive(char str[], int left, int right) {
    calls = calls + 1;

    if (left >= right) {
        printf("Recursive calls: %d\n", calls);
        return true;
    }

    if (str[left] != str[right]) {
        printf("Recursive calls: %d\n", calls);
        return false;
    }

    return isPalindromeRecursive(str, left + 1, right - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int n = strlen(str);

    if (isPalindromeRecursive(str, 0, n - 1)) {
        printf("Result: true (It is a palindrome)\n");
    } else {
        printf("Result: false (Not a palindrome)\n");
    }

    return 0;
}
