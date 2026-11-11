#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n = 3;

    struct Student *classList = malloc(n * sizeof(struct Student));

    FILE *fp = fopen("desptop/students.txt", "r+");
    if (fp == NULL) {
        printf("Error openning file.\n");
        return 1;
    }

    return 0;
}