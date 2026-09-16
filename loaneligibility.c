#include <stdio.h>
#include <string.h>

int main() {
    int age, income, credit_score;
    char employed[10];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your income: ");
    scanf("%d", &income);

    printf("Are you employed? (TRUE/FALSE): ");
    scanf("%9s", employed);

    printf("Enter your credit score: ");
    scanf("%d", &credit_score);

    if (age >= 21 && age <= 60 &&
        income >= 25000 &&
        strcmp(employed, "TRUE") == 0 &&
        credit_score >= 650) {

        printf("Eligible for Loan\n");
    } else {
        printf("Not Eligible for Loan\n");
    }

    return 0;
}