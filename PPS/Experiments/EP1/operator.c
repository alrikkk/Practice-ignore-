#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double ts1, ts2, ts3;

    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    printf("Enter the value of c: ");
    scanf("%lf", &c);

    // a ** b ** c is evaluated from right to left
    // because the exponentiation operator is right-associative.
    ts1 = pow(a, pow(b, c));

    // Parentheses force a ** b to be calculated first.
    // Therefore, this is (a ** b) ** c.
    ts2 = pow(pow(a, b), c);

    // This explicitly shows a ** (b ** c).
    ts3 = pow(a, pow(b, c));

    printf("\nThe result for a ** b ** c is: %.2f\n", ts1);
    printf("The result for (a ** b) ** c is: %.2f\n", ts2);
    printf("The result for a ** (b ** c) is: %.2f\n", ts3);

    return 0;
}