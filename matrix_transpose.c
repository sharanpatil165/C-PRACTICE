#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to transpose a matrix
void transposeMatrix(int mat[ROWS][COLS], int result[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[][ROWS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int result[COLS][ROWS];
    
    printf("Original Matrix (%d x %d):\n", ROWS, COLS);
    printMatrix(mat, ROWS, COLS);
    
    transposeMatrix(mat, result);
    
    printf("\nTransposed Matrix (%d x %d):\n", COLS, ROWS);
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
