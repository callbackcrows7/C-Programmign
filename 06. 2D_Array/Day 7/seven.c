#include <stdio.h>
#include <stdlib.h>

// function prototypes:
void transpose_matrix(int rows, int cols, int matrix[rows][cols]);
void print_vowels(int rows, int cols, int matrix[rows][cols]);
int is_vowel(char ch);

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
        printf("Enter the character of the matrix row-wise [row no:(%d)]\n", i);
        printf("--------------------------------------------------------------\n");
        for ( j = 0; j < cols; j++)
        {
            printf("Enter element [%d] [%d]: ", i, j);
            scanf(" %c", &matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");// create a new line.

    print_vowels(rows, cols, matrix);

    return 0;
}

// function to check if the character is vowel or not
int is_vowel(char ch){
    // check if the character is vowel or not
    return (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U');
}

// Function to calculate sum of the matrixes
void print_vowels(int rows, int cols, int matrix[rows][cols]){
    // define variables
    int i, j;

    // calculates the sum of the matrixes.
    for ( i = 0; i < rows; i++)
    {

        for ( j = 0; j < cols; j++)
        {
            if (is_vowel(matrix[i][j]))
            {
                printf("Vowel of matrix [%d] [%d] is: %c\n", i, j, matrix[i][j]);
            }
            
        }
        printf("\n");
    }

    printf("\n"); // create a new line.

    return;
}