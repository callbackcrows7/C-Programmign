/* 
 * File:    pattern one.c
 * version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 19, 2024, 06:00 AM
 */

#include <stdio.h>
#include <conio.h>

// Function to create a pattern.
int create_pattern(int num) {
    // define variables
    int row, col;

    // create a pattern
    for ( row = 1; row <= num; row++)
    {
        for ( col = num; col >= row; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}

// start main function
int main(void) {
    // define variable.
    char ch;
    int num;

    // create conditional output.
    do {
        //Read numbers from the user
        printf("\nPlease enter any integer numbers: ");
        scanf("%d", &num);
        printf("\n");

        // create and print pattern.
        create_pattern(num);
        printf("\n"); // create a new line.

        // Prompt user to continue or quit.
        printf("Press 'ANY KEY' to continue, Press ESC to quit: ");
        ch = getch();
        printf("\n"); // create a new line.

    } while (ch != 27);  // 27 is the ASCII value for ESC.

    return 0;
}
