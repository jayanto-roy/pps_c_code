#include <stdio.h>

int main() {
    int layer, row, col;
    int i, j, k;

    // Input dimensions
    printf("Enter number of layers: ");
    scanf("%d", &layer);

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[layer][row][col];

    // Input elements
    printf("\nEnter %d elements:\n", layer * row * col);

    for(i = 0; i < layer; i++) {
        printf("\nLayer %d:\n", i + 1);
        for(j = 0; j < row; j++) {
            for(k = 0; k < col; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Display elements
    printf("\nThree-Dimensional Array:\n");

    for(i = 0; i < layer; i++) {
        printf("\nLayer %d:\n", i + 1);
        for(j = 0; j < row; j++) {
            for(k = 0; k < col; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}