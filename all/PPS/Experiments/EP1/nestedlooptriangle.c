#include <stdio.h>

int main() {
    int i,j,a;

    // Printing it upright
    /*for (i = 1; i <= 6; i++) {

        for (a = 1; a <= 6 - i; a++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("# ");
        }
        printf("\n");
    }*/

    for (i = 6; i >= 1; i--) {

        for (a = 1; a <= 6 - i; a++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}