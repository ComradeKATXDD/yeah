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

// Function to find the transpose of a matrix
void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j]; // Swapping rows and columns
        }
    }
}

int main() {
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    inputMatrix(matrix, rows, cols);

    // Find transpose
    transposeMatrix(matrix, transposed, rows, cols);

    // Print original matrix
    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    // Print transposed matrix
    printf("Transpose of the Matrix:\n");
    printMatrix(transposed, cols, rows); // Notice rows and cols are swapped

    return 0;
}
