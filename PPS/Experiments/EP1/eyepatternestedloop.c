#include <stdio.h>

int main() {
    int i, j, k;

    for ( i = 1; i <= 5; i++) {
        if (i == 1 || i == 5) {
            for (j = 1; j <= 6; j++) {
                printf("# ");
            }
            printf("\n");
        }
        else { 
            for (k = 1; k <= 4; k++) {
                printf(" ");
            }
            printf("# # \n");
        }
    }
    return 0;
}