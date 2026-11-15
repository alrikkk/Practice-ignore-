#include <stdio.h>

int main() {
    int mat[3][3] = {{0,0,3},{0,5,0},{7,0,0}};
    int rows = 3, cols = 3, zeroCount = 0;
    int totalElements = rows * cols;
    int threshold = totalElements / 2;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    printf("Zeros: %d, Total: %d, Threshold: %d\n", zeroCount, totalElements, threshold);

    if (zeroCount > threshold) {
        printf("The matrix is a Sparse Matrix.\n");
    }
    else {
        printf("The matrix is not a Sparse Matrix.\n");
    }
    return 0;
}