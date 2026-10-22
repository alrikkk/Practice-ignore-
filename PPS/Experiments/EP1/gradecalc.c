#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;

    // Input marks for three subjects
    printf("Enter marks for first subject: ");
    scanf("%f", &mark1);
    printf("Enter marks for second subject: ");
    scanf("%f", &mark2);
    printf("Enter marks for third subject: ");
    scanf("%f", &mark3);

    // Calculate average
    average = (mark1 + mark2 + mark3) / 3.0;

    printf("Average Marks: %.2f\n", average);

    // Grade calculation
    if (average >= 90) {
        printf("Grade: A\n");
    } else if (average >= 80) {
        printf("Grade: B\n");
    } else if (average >= 70) {
        printf("Grade: C\n");
    } else if (average >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}