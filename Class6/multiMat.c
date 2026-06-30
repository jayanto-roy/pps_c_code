#include<stdio.h>

int main()
{
    int row, col, m, n, i, j, k;
    int mat1[3][3], mat2[3][3], mat3[3][3];

    printf("Enter the 1st matrix size: ");
    scanf("%d%d",&row,&col);

    printf("Enter the 2nd matrix size: ");
    scanf("%d%d",&m,&n);

    if(col != m)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    printf("Enter the 1st matrix elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter the 2nd matrix elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("\n1st Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n2nd Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    for(i=0;i<row;i++)
    {
        for(j=0;j<n;j++)
        {
            mat3[i][j]=0;

            for(k=0;k<col;k++)
            {
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("\nMultiplication of two matrices:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}


