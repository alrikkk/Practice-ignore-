#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

// Function to calculate area
float area(struct Rectangle r) {
    return r.length * r.width;
}

// Function to calculate perimeter
float perimeter(struct Rectangle r) {
    return 2 * (r.length + r.width);
}

int main() {
    struct Rectangle r;

    printf("Enter length: ");
    scanf("%f", &r.length);

    printf("Enter width: ");
    scanf("%f", &r.width);

    printf("\nArea = %.2f\n", area(r));
    printf("Perimeter = %.2f\n", perimeter(r));

    return 0;
}
