#include <stdio.h>
#include <stdlib.h> // For abs() function

// ---------- Recursive GCD Function ----------
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b); // Recurse with gcd(b, a mod b)
}

// ---------- Main Program ----------
int main() {
    int orig_a, orig_b;
    int a, b;
    
    printf("Enter two numbers: ");
    if (scanf("%d %d", &orig_a, &orig_b) != 2) {
        printf("Invalid input!\n");
        return 1;
    }
    
    // Take absolute values as Euclid's algorithm works with non-negative numbers
    a = abs(orig_a);
    b = abs(orig_b);
    
    // Handle negatives and zero edge cases explicitly
    if (a == 0 && b == 0) {
        printf("GCD is undefined for (0, 0)\n");
    } else {
        int result = gcd(a, b);
        printf("GCD of %d and %d = %d\n", orig_a, orig_b, result);
    }
    
    return 0;
}
