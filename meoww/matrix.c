#include <stdio.h>

#define MAX 10 // Maximum size of the matrix

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int row1, int col1, int row2, int col2) {
    // Initialize the result matrix C with zeros
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                C[i][j] += A[i][k] * B[k][j]; // Multiplication logic
            }
        }
    }
}

// Function to input a matrix
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int row1, col1, row2, col2;

    // Input matrix A dimensions
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &row1, &col1);

    // Input matrix B dimensions
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &row2, &col2);

    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Error: Matrix multiplication is not possible (columns of A must be equal to rows of B).\n");
        return 1;
    }

    // Input matrices
    printf("Enter elements of Matrix A:\n");
    inputMatrix(A, row1, col1);

    printf("Enter elements of Matrix B:\n");
    inputMatrix(B, row2, col2);

    // Multiply matrices
    multiplyMatrices(A, B, C, row1, col1, row2, col2);

    // Print the result
    printf("Resultant Matrix (A × B):\n");
    printMatrix(C, row1, col2);

    return 0;
}
