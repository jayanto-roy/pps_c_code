#include <stdio.h>

int main()
{
    int arr[3][3];
    int i, j;

    // Input elements
    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display elements
    printf("\nThe 2D Array is:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

        printf("Element at Row 2, Column 3 = %d\n", arr[1][2]);
    printf("Element at Row 3, Column 1 = %d\n", arr[2][0]);

    return 0;
}