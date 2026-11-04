#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {                           
        printf("Error: Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }
    int result = fibonacci(n);
    printf("Fibonacci of %d is %d\n", n, result);
    return 0;
}