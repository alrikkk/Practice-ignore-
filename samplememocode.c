#include <stdio.h>

int memo[100] = {0}; // Initialize the memo array

int fib_memo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != 0) return memo[n]; // If already computed, return the stored value

    memo[n] = fib_memo(n-1) + fib_memo(n-2);
    return memo[n];
}   