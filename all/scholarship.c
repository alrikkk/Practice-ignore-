#include <stdio.h>
#include <stdbool.h>

int main() {
    float percentage;
    int family_income;
    bool extracurricular;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    printf("Enter family income: ");
    scanf("%d", &family_income);

    printf("Participates in extracurricular activities? (1 for TRUE, 0 for FALSE): ");
    scanf("%d", &extracurricular);

    if (percentage >= 85 &&
        family_income <= 500000 &&
        extracurricular == true) {

        printf("Eligible for Scholarship\n");
    }
    else {
        printf("Not Eligible for Scholarship\n");
    }

    return 0;
}