#include <stdio.h>
#include <stdlib.h>

// function prototypes:
void calculate_sum_of_matrix(int rows, int cols, int matrix_1[rows][cols], int matrix_2[rows][cols]);
void calculate_sub_of_matrix(int rows, int cols, int matrix_1[rows][cols], int matrix_2[rows][cols]);

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
    int matrix_1[rows][cols];
    int matrix_2[rows][cols];

    
    // read the elements of the first matrix row-wise from user.
    for ( i = 0; i < rows; i++)
    {
        printf("Enter the elements of the first matrix row-wise [row no:(%d)]\n", i);
        printf("--------------------------------------------------------------\n");
        for ( j = 0; j < cols; j++)
        {
            printf("Enter element [%d] [%d]: ", i, j);
            scanf("%d", &matrix_1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");// create a new line.

    // read the elements of the second matrix row-wise from user.
    for ( i = 0; i < rows; i++)
    {
        printf("Enter the elements of the second matrix row-wise [row no:(%d)]\n", i);
        printf("---------------------------------------------------------------\n");
        for ( j = 0; j < cols; j++)
        {
            printf("Enter element [%d] [%d]: ", i, j);
            scanf("%d", &matrix_2[i][j]);
        }
        printf("\n");
    
    }

    printf("\n");// create a new line.

    calculate_sum_of_matrix(rows, cols, matrix_1, matrix_2);
    calculate_sub_of_matrix(rows, cols, matrix_1, matrix_2);

    

    return 0;
}

// Function to calculate sum of the matrixes
void calculate_sum_of_matrix(int rows, int cols, int matrix_1[rows][cols], int matrix_2[rows][cols]){
    // define variables
    int i, j;
    int sum_of_matrix[rows][cols];
    // calculates the sum of the matrixes.
    for ( i = 0; i < rows; i++)
    {

        for ( j = 0; j < cols; j++)
        {
            sum_of_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
            printf("Sum of matrixes [%d] [%d] is: %d\n", i, j, sum_of_matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n"); // create a new line.

    return;
}

// Function to calculate sub of the matrixes
void calculate_sub_of_matrix(int rows, int cols, int matrix_1[rows][cols], int matrix_2[rows][cols]){
    // define variables
    int i, j;
    int sub_of_matrix[rows][cols];
    // calculates the sub of the matrixes.
    for ( i = 0; i < rows; i++)
    {

        for ( j = 0; j < cols; j++)
        {
            sub_of_matrix[i][j] = matrix_1[i][j] - matrix_2[i][j];
            printf("Subtract of matrixes [%d] [%d] is: %d\n", i, j, sub_of_matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n"); // create a new line.

    return;
}