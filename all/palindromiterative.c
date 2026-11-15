#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindromeIterative(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    int iterations = 0;

    while (left < right) {
        iterations = iterations + 1;

        if (str[left] != str[right]) {
            printf("Iterations: %d\n", iterations);
            return false;
        }

        left = left + 1;
        right = right - 1;
    }

    printf("Iterations: %d\n", iterations);
    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    if (isPalindromeIterative(str)) {
        printf("Result: true (It is a palindrome)\n");
    } else {
        printf("Result: false (Not a palindrome)\n");
    }

    return 0;
}
