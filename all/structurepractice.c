#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[5];
    int highest = 0;

    // Read employee details
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Name: ");
        scanf(" %49[^\n]", employees[i].name);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find employee with highest salary
    for (int i = 1; i < 5; i++) {
        if (employees[i].salary > employees[highest].salary) {
            highest = i;
        }
    }

    // Print highest-paid employee
    printf("\nHighest Paid Employee\n");
    printf("ID: %d\n", employees[highest].id);
    printf("Name: %s\n", employees[highest].name);
    printf("Salary: %.2f\n", employees[highest].salary);

    return 0;
}
