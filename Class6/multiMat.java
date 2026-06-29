import java.util.Scanner;

public class multiMat {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int row, col, m, n;

        System.out.print("Enter the 1st matrix size (row column): ");
        row = sc.nextInt();
        col = sc.nextInt();

        System.out.print("Enter the 2nd matrix size (row column): ");
        m = sc.nextInt();
        n = sc.nextInt();

        if (col != m) {
            System.out.println("Matrix multiplication is not possible.");
            return;
        }

        int[][] mat1 = new int[row][col];
        int[][] mat2 = new int[m][n];
        int[][] mat3 = new int[row][n];

        System.out.println("Enter the 1st matrix elements:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                mat1[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter the 2nd matrix elements:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mat2[i][j] = sc.nextInt();
            }
        }

        // Matrix Multiplication
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < n; j++) {
                mat3[i][j] = 0;
                for (int k = 0; k < col; k++) {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        System.out.println("\n1st Matrix:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(mat1[i][j] + "\t");
            }
            System.out.println();
        }

        System.out.println("\n2nd Matrix:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
            f    System.out.print(mat2[i][j] + "\t");
            }
            System.out.println();
        }

        System.out.println("\nMultiplication of Two Matrices:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(mat3[i][j] + "\t");
            }
            System.out.println();
        }

        sc.close();
    }
}