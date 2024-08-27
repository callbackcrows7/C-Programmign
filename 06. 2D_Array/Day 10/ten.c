#include <stdio.h>

// function prototypes:
int is_upper_triangular(int n, int matrix[n][n]);

int main(){
    // define variables
    int n, i, j;
    
    // read number of rows from user.
    printf("Enter the matrix order: ");
    scanf("%d", &n);

    // initialize matrix
    int matrix[n][n];
   

    // read the elements of the matrix row-wise from user.
    for ( i = 0; i < n; i++)
    {
        printf("Enter the elements of the matrix row-wise [row no:(%d)]\n", i);
        printf("--------------------------------------------------------------\n");
        for ( j = 0; j < n; j++)
        {
            printf("Enter element [%d] [%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");// create a new line.

    if (is_upper_triangular(n, matrix))
    {
        printf("The matrix is upper triangular.\n");
    }
    else
    {
        printf("The matrix is not upper triangular.\n");
    }
    

    return 0;
}

// Function to check if a matrix is symmetric
int is_upper_triangular(int n, int matrix[n][n]){
    // define variables
    int i, j;
    // calculates the sum of the matrixes.
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i > j && matrix[i][j] != 0)
            {
                return 0; // Not upper triangular
            }
        }
    }

    // If all conditions are met, the matrix is upper triangular

    return 1;
}