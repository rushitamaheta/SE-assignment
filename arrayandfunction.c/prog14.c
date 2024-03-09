//14.Perform 2D matrix array

#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to input elements into a matrix
void inputMatrix(int matrix[ROWS][COLS]) {
	int i,j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[ROWS][COLS]) {
	int i,j;
    printf("Matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
	
	int i,j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
	int i,k,j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];

    // Input two matrices
    printf("For Matrix 1:\n");
    inputMatrix(matrix1);
    printf("\nFor Matrix 2:\n");
    inputMatrix(matrix2);

    // Print the input matrices
    printf("\nInput Matrices:\n");
    printf("Matrix 1:\n");
    printMatrix(matrix1);
    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    // Add the matrices
    addMatrices(matrix1, matrix2, result);
    printf("\nAddition of Matrices:\n");
    printMatrix(result);

    // Multiply the matrices
    multiplyMatrices(matrix1, matrix2, result);
    printf("\nMultiplication of Matrices:\n");
    printMatrix(result);

    return 0;
}

