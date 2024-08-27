#include <stdio.h>


int main(void){

    // Declare variables
    int i, j;
    int rows, cols, sum = 0;
    
    // read an array from user.
    printf("Please Enter Number of Rows: ");
    scanf("%d", &rows);

    printf("\n");

    printf("Please Enter Number of Cols: ");
    scanf("%d", &cols);

    // define an array.
    int arr [rows][cols];


    printf("Please Enter Array Element Number: ");

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    printf("The array element are: ");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            if (arr[i][j] % 3 != 0 )
            {
                continue;
            }
            else
            {
                printf("%d\t", (arr[i][j]));
            }
            
        }
        
    }
    

    printf("\n");
    printf("Sum of array is: %d\n", sum);
    

    return 0;
}