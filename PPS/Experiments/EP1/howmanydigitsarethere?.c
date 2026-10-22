#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the number of digits in n
    int count = 0;
    if (n == 0) {
        count = 1; // Special case for 0
    } else {
        while (n != 0) {
            n /= 10; // Remove the last digit
            count++;
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}