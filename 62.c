#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void sum_rows_and_columns(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int i, j;
   
    // Sum of each row
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        int row_sum = 0;
        for(j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("Row %d sum: %d\n", i+1, row_sum);
    }

    // Sum of each column
    printf("\nSum of each column:\n");
    for(j = 0; j < cols; j++) {
        int col_sum = 0;
        for(i = 0; i < rows; i++) {
            col_sum += matrix[i][j];
        }
        printf("Column %d sum: %d\n", j+1, col_sum);
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
   
    // User input for rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix values
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call function to compute row and column sums
    sum_rows_and_columns(matrix, rows, cols);

    return 0;
}
