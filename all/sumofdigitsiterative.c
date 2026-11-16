#include <stdio.h>

int sumDigitsIterative(int num) {
    int sum = 0;
    int steps = 0;

    while (num > 0) {
        sum = sum + (num % 10);
        num = num / 10;
        steps = steps + 1;
    }

    printf("Iterative steps: %d\n", steps);
    return sum;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    int result = sumDigitsIterative(num);
    printf("Sum of digits: %d\n", result);

    return 0;
}
