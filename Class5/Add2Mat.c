#include <stdio.h>

int main() {
    int row, col, i, j;

    // Input matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int A[row][col], B[row][col], Sum[row][col];

    // Input first matrix
    printf("\nEnter elements of First Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Second Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display first matrix
    printf("\nFirst Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nSecond Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Display sum matrix
    printf("\nSum of Two Matrices:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}