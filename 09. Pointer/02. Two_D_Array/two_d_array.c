#include <stdio.h>
#include <stdlib.h>
#include "two_d_hader.h"

int main(void){
    // declare variables
    int rows, cols;

    // Declare a matrix
    int **matrix;

    // Scan rows and columns from user input with validations
    scan_rows(&rows);
    scan_cols(&cols);

    // Clear the console
    clear_console();

    // Allocating memory for the matrix(each row) with error checking.
    allocate_memory_each_row(matrix, rows);

    // Allocating memory for the matrix(each column) with error checking
    allocate_memory_each_col(matrix, rows, cols);

    // Collect elements from the user with validation
    get_elements(matrix, rows, cols);

    // Clear the console
    clear_console();

    // Print the elements of the matrix
    print_elements(matrix, rows, cols);

    // Free memory for the each row (column) af the matrix and set the pointer to NULL.
    free_each_row(matrix, rows);

    // free memory af the matrix and set the pointer to NULL
    free_matrix(matrix);

    return 0;
}