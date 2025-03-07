#include <stdio.h>

#define MAX 10 // Maximum size of the matrix

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

// Function to add two matrices
void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j]; // Addition logic
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix A
    printf("Enter elements of Matrix A:\n");
    inputMatrix(A, rows, cols);

    // Input matrix B
    printf("Enter elements of Matrix B:\n");
    inputMatrix(B, rows, cols);

    // Add matrices
    addMatrices(A, B, C, rows, cols);

    // Print matrices
    printf("Matrix A:\n");
    printMatrix(A, rows, cols);

    printf("Matrix B:\n");
    printMatrix(B, rows, cols);

    printf("Sum of Matrices (A + B):\n");
    printMatrix(C, rows, cols);

    return 0;
}
