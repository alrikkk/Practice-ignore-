#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) return 0; // Handles n <= 1 correctly
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Found a divisor, not prime
    }
    return 1; // No divisors found, number is prime
}

int main() {
    printf("Prime numbers between 1 and 100:\n");
    
    // Loop from 1 to 100 inclusive
    for (int i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d ", i); 
        }
    }
    printf("\n");

    return 0;
}
