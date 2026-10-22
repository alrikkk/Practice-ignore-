#include <stdio.h>

// ---------- Helper Function 1 ----------
float calculateTotal(float marks[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total = total + marks[i];
    }
    return total;
}

// ---------- Helper Function 2 ----------
float calculateAverage(float total, int n) {
    if (n == 0) {
        return 0;
    }
    float average = total / n;
    return average;
}

// ---------- Helper Function 3 ----------
const char* findGrade(float average) {
    if (average >= 90) {
        return "A+";
    } else if (average >= 80) {
        return "A";
    } else if (average >= 70) {
        return "B";
    } else if (average >= 60) {
        return "C";
    } else if (average >= 50) {
        return "D";
    } else {
        return "F";
    }
}

// ---------- Main Program ----------
int main() {
    int n;
    
    // Read number of subjects
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    
    // Declare marks array dynamically based on user input size
    float marks[n];
    
    // Read n marks into the array
    for (int i = 0; i < n; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    
    // Call helper functions
    float total = calculateTotal(marks, n);
    float average = calculateAverage(total, n);
    const char* grade = findGrade(average);
    
    // Display the results
    printf("\nTotal Marks : %.2f\n", total);
    printf("Average Marks : %.2f\n", average);
    printf("Grade : %s\n", grade);
    
    return 0;
}
