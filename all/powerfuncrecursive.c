#include <stdio.h>

int calls = 0;

long long powerRecursive(int a, int n) {
    calls = calls + 1;

    if (n == 0) {
        printf("Recursive calls: %d\n", calls);
        return 1;
    }

    return a * powerRecursive(a, n - 1);
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

    long long ans = powerRecursive(a, n);
    printf("Result (%d^%d): %lld\n", a, n, ans);

    return 0;
}
