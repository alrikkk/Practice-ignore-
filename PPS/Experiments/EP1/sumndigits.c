#include <stdio.h>

int count_digits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int sum_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int digit_count = count_digits(number);
    int digit_sum = sum_digits(number);

    printf("Number of digits: %d\n", digit_count);
    printf("Sum of digits: %d\n", digit_sum);

    return 0;
}

// 😂