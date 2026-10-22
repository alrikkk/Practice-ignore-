#include <stdio.h>
#include <string.h>
#include <ctype.h> // Required for tolower() and isspace()

// ---------- Recursive Palindrome Checker ----------
int isPalindrome(char s[], int left, int right) {
    if (left >= right) {
        return 1; // TRUE - base case: met in middle
    }
    if (s[left] != s[right]) {
        return 0; // FALSE - mismatch found
    }
    return isPalindrome(s, left + 1, right - 1);
}

// ---------- Main Program ----------
int main() {
    char raw_str[256];
    char clean_str[256];
    
    printf("Enter a string: ");
    // fgets reads the entire line, including spaces
    if (fgets(raw_str, sizeof(raw_str), stdin) == NULL) {
        return 1;
    }
    
    // Strip trailing newline character added by fgets
    raw_str[strcspn(raw_str, "\n")] = '\0';
    
    // --- Optional Option: Convert to lowercase & strip spaces ---
    int j = 0;
    for (int i = 0; raw_str[i] != '\0'; i++) {
        // If the character is not a space, keep it
        if (!isspace((unsigned char)raw_str[i])) {
            clean_str[j] = tolower((unsigned char)raw_str[i]);
            j++;
        }
    }
    clean_str[j] = '\0'; // Null-terminate the cleaned string
    
    // Get the length of the processed string
    int len = strlen(clean_str);
    
    // Check if palindrome (passing 0 and length - 1)
    int result = isPalindrome(clean_str, 0, len - 1);
    
    // Display result matching your manual's exact format
    if (result == 1) {
        printf("\"%s\" is a palindrome.\n", raw_str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", raw_str);
    }
    
    return 0;
}
