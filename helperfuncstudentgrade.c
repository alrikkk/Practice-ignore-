#include <stdio.h>

int calculateTotal(int marks[], int n) {
    int i, total = 0;
    for (i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}