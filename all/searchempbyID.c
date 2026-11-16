#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee searchEmployeeByID(struct Employee emp[], int n, int targetID) {
    for (int i = 0; i <= n - 1; i++) {
        if (emp[i].id == targetID) {
            return emp[i];
        }
    }

    struct Employee notFound;
    notFound.id = -1;
    return notFound;
}

int main() {
    int n, targetID;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%49s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEnter target Employee ID to search: ");
    scanf("%d", &targetID);

    struct Employee result = searchEmployeeByID(emp, n, targetID);

    if (result.id != -1) {
        printf("\nEmployee Found:\n");
        printf("ID: %d\n", result.id);
        printf("Name: %s\n", result.name);
        printf("Salary: %.2f\n", result.salary);
    } else {
        printf("\nEmployee with ID %d not found.\n", targetID);
    }

    return 0;
}
