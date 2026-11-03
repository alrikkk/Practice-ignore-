#include <stdio.h>

// ---------- Helper Function (Recursive) ----------
int reverseHelper(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    int lastDigit = n % 10;
    rev = (rev * 10) + lastDigit;
    return reverseHelper(n / 10, rev); // integer division handles floor(n/10)
}

// ---------- Wrapper Function ----------
int reverseNumber(int n) {
    if (n == 0) {
        return 0;
    }
    
    int sign = 1;
    if (n < 0) {
        sign = -1;
        n = -n; // Make n positive for recursive processing
    }
    
    int reversed = reverseHelper(n, 0);
    return sign * reversed;
}

// ---------- Main Program ----------
int main() {
    int n;
    
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    
    int result = reverseNumber(n);
    printf("Reversed number = %d\n", result);
    
    return 0;
}
