#include <stdio.h>

int main() {
    int i,j,k;
    for (i =1; i <= 5; i++) {
        if (i == 3) {
            for (k = 1; k <= 5; k++) {
                printf("* ");
            }
            printf("\n");
        }
        else {
            for (k = 1; k <= 5 - i; k++) {
                printf(" ");
            }
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}