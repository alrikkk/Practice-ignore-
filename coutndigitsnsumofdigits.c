#include <stdio.h>

// Function to count the number of digits
int count_digits(int n) {
    // If the number is negative, convert it to positive
    if (n < 0) {
        n = -n;
    }
    
    // Special case for 0: it has exactly 1 digit
    if (n == 0) {
        return 1;
    }
    
    int count = 0;
    while (n > 0) {
        count++;      // Add 1 to our count
        n = n / 10;   // Drop the last digit
    }
    return count;
}

// Function to calculate the sum of all digits
int sum_digits(int n) {
    // If the number is negative, convert it to positive
    if (n < 0) {
        n = -n;
    }
    
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Extract the last digit and add it to sum
        n = n / 10;    // Drop the last digit
    }
    return sum;
}

int main() {
    int user_input;
    
    // Get integer from the user
    printf("Enter an integer: ");
    scanf("%d", &user_input);
    
    // Call functions and print results
    int digits = count_digits(user_input);
    int sum = sum_digits(user_input);
    
    printf("Number of digits: %d\n", digits);
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}
