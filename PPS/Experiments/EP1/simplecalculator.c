#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to perform division with error handling for division by zero
int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}

// Function to calculate the power of a number
int powa(int base, int exponent) {
    return (int)pow(base, exponent);
}

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial of a negative number is not defined.\n");
        exit(EXIT_FAILURE);
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate the square root of a number
int square_root(int n) {
    if (n < 0) {
        printf("Error: Square root of a negative number is not defined.\n");
        exit(EXIT_FAILURE);
    }
    return (int)sqrt(n);
}

// Main function to run the simple calculator
int main() {
    int a, b, choice;
    printf("============= Simple Calculator =============\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("7. Square Root\n");
    printf("8. Exit\n");
    printf("Enter your choice (1-8): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
    } else if (choice == 5) {
        printf("Enter base and exponent: ");
        scanf("%d %d", &a, &b);
    } else if (choice == 6 || choice == 7) {
        printf("Enter an integer: ");
        scanf("%d", &a);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Result: %d\n", subtract(a, b));
            break;
        case 3:
            printf("Result: %d\n", multiply(a, b));
            break;
        case 4:
            printf("Result: %d\n", divide(a, b));
            break;
        case 5:
            printf("Result: %d\n", powa(a, b));
            break;
        case 6:
            printf("Result: %d\n", factorial(a));
            break;
        case 7:
            printf("Result: %d\n", square_root(a));
            break;
        case 8:
            printf("Exiting the calculator. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    return 0;
}