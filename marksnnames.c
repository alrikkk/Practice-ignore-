#include <stdio.h>
#include <string.h>

int main(void) {
    int marks[5] = {85, 90, 78, 92, 88};
    char student[20] = "Aisha";
    printf("Student: ");
    for (int i = 0; i < (int)strlen(student); i++) {
        printf("%c", student[i]);
    }
    printf("\n");
    printf("Marks: ");
    int total = 0;
    for (int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
        total += marks[i];
    }

    printf("\n");

    float avg = (total / 5.0f);
    printf("Average: %.2f\n", avg);

    return 0;
}