#include <stdio.h>
#include <stdlib.h>

// function prototypes:
void transpose_matrix(int rows, int cols, int matrix[rows][cols]);

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
        printf("--------------------------------------------------------------\n");
        for ( j = 0; j < cols; j++)
        {
            printf("Enter element [%d] [%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");// create a new line.


    transpose_matrix(rows, cols, matrix);

    return 0;
}

// Function to calculate sum of the matrixes
void transpose_matrix(int rows, int cols, int matrix[rows][cols]){
    // define variables
    int i, j;
    int trans_of_matrix[rows][cols];
    // calculates the sum of the matrixes.
    for ( i = 0; i < rows; i++)
    {

        for ( j = 0; j < cols; j++)
        {
            trans_of_matrix[i][j] = matrix[j][i];
            printf("Transpose of matrix [%d] [%d] is: %d\n", i, j, trans_of_matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n"); // create a new line.

    return;
}