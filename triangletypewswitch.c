#include <stdio.h>

int main() {
    float a, b, c;
    int type;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Checking for valid triangle
    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            type = 1; // Equilateral
        }
        else if (a == b || b == c || a == c) {
            type = 2; // Isosceles
        }
        else {
            type = 3; // Scalene
        }

        switch(type) {

            case 1:
                printf("The triangle is Equilateral.\n");
                break;

            case 2:
                printf("The triangle is Isosceles.\n");
                break;

            case 3:
                printf("The triangle is Scalene.\n");
                break;

            default:
                printf("Unknown triangle type.\n");
        }

    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}