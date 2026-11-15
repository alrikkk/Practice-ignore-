#include <stdio.h>

int main() {
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int sumMainDiag = 0, sumSecDiag = 0;

    for (int i = 0; i < 3; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }

        printf("Row %d Sum: %d | Col %d Sum: %d\n", i + 1, rowSum, i + 1, colSum);

        sumMainDiag += mat[i][i];
        sumSecDiag += mat[i][2 - i];
    }
    printf("Main Diagonal Sum: %d\n", sumMainDiag);
    printf("Secondary Diagonal Sum: %d\n", sumSecDiag);
    return 0;
}