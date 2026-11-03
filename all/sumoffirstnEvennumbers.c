#include <stdio.h>

// Sub-task 1: Validate input n (pass-by-value)
// In C, 1 means 'true' and 0 means 'false'
int validateInput(int n) {
    if (n <= 0) {
        printf("Error: n must be a positive integer.\n");
        return 0; // false
    } else {
        return 1; // true
    }
}

// Sub-task 2: Compute the sum of first n even numbers (pass-by-value)
int sumFirstNEven(int n) {
    // Validate input by calling sub-task 1
    // The exclamation mark (!) means "NOT"
    if (!validateInput(n)) {
        return -1; // Error code
    }

    int sum = 0;
    int evenNumber = 0;

    // Loop n times to generate and sum even numbers
    for (int i = 1; i <= n; i++) {
        evenNumber = 2 * i; // i-th even number
        sum = sum + evenNumber;
    }

    return sum;
}

// Main program
int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = sumFirstNEven(n); // pass-by-value

    if (result != -1) {
        printf("Sum of first %d even numbers is: %d\n", n, result);
    }

    return 0;
}
