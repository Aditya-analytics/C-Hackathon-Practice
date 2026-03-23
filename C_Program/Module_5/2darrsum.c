#include <stdio.h>
#include <conio.h>
int main() {
    int m, n, i, j;

    // Ask user for matrix size
    printf("Enter number of rows (M): ");
    scanf("%d", &m);
    printf("Enter number of columns (N): ");
    scanf("%d", &n);

    int A[m][n], B[m][n], Sum[m][n];

    // Input elements for Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print the result
    printf("\nSum of Matrix A and B is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
