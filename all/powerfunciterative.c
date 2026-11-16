#include <stdio.h>

long long powerIterative(int a, int n) {
    long long result = 1;
    int iterations = 0;

    for (int i = 1; i <= n; i++) {
        result = result * a;
        iterations = iterations + 1;
    }

    printf("Iterations: %d\n", iterations);
    return result;
}

int main() {
    int a, n;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter non-negative exponent (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Please enter a non-negative integer for the exponent.\n");
        return 1;
    }

    long long ans = powerIterative(a, n);
    printf("Result (%d^%d): %lld\n", a, n, ans);

    return 0;
}
