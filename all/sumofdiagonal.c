#include <stdio.h>
int main() {
    int a[3][3], sum[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }
    printf("\nSum of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Sum of row %d: %d\n", i, sum[i]);
    }
    return 0;
}