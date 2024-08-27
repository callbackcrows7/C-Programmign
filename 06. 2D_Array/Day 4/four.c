#include <stdio.h>
#include <stdlib.h>

void calculate_rows_product(int rows, int cols, int matrix[rows][cols]);
void calculate_cols_product(int rows, int cols, int matrix[rows][cols]);

int main(){
    // define variables
    int rows, cols, i, j;

    // initialize variables
    

    // read number of rows from user.
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // read number of columns from user.
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("\n");// create a new line

    // initialize matrix
    int matrix[rows][cols];

    
    // read the elements of the matrix row-wise from user.
    for ( i = 0; i < rows; i++)
    {
        printf("Enter the elements of the matrix row-wise [row no:(%d)]\n", i);
        printf("------------------------------------------------------\n");
        for ( j = 0; j < cols; j++)
        {
            printf("Enter element [%d] [%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");// create a new line.

    // calculate the product of each row of the matrix
    calculate_rows_product(rows, cols, matrix);

    // calculate the product of each column of the matrix
    calculate_cols_product(rows, cols, matrix);
    

    return 0;
}



// Function to calculate the product of each row of the matrix
void calculate_rows_product(int rows, int cols, int matrix[rows][cols]){
    // define variables
    int i, j;
    
    // calculates the product of each row of the matrix.
    for ( i = 0; i < rows; i++)
    {
        int product = 1;

        for ( j = 0; j < cols; j++)
        {
            product *= matrix[i][j];
        }
        printf("Product of (%d)no. rows is: %d\n", i, product);
        
    }

    printf("\n"); // create a new line.

    return;
}

// Function to calculate the product of each column of a matrix
void calculate_cols_product(int rows, int cols, int matrix[rows][cols]){
    // define variables
    int i, j;
    
    // calculates the product of each row of the matrix.
    for ( j = 0; j < cols; j++)
    {
        int product = 1;
        
        for ( i = 0; i < rows; i++)
        {
            product *= matrix[i][j];
        }
        printf("Product of (%d)no. cols is: %d\n", j, product);
        
    }
    printf("\n"); // create a new line.

    return;
}