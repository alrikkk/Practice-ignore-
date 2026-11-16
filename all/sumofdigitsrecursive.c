#include <stdio.h>

int recSteps = 0;

int sumDigitsRecursive(int num) {
    recSteps = recSteps + 1;

    if (num == 0) {
        return 0;
    }

    return (num % 10) + sumDigitsRecursive(num / 10);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    int result = sumDigitsRecursive(num);
    printf("Sum of digits: %d\n", result);
    printf("Recursive steps: %d\n", recSteps);

    return 0;
}
