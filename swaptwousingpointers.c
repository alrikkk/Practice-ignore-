#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a; // Save the value at address 'a' into a temporary variable
    *a = *b;       // Copy the value at address 'b' into address 'a'
    *b = temp;     // Copy the temporary value into address 'b'
}

int main() {
    int num1 = 10;
    int num2 = 20;

    // Display values before swapping
    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    // Call swap function by passing the memory addresses of the variables
    swap(&num1, &num2);

    // Display values after swapping
    printf("After swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
