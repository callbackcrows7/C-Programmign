/* 
 * File:    fibonacci number.c
 * version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 18, 2024, 10:24 AM
 */

#include <stdio.h>
#include <conio.h>

// Function to calculate fibonacci number
int calculate_lucas(int x) {
    // define variable
    int luc;
    // declare variables
    int first = 2, second = 1;
    
    // calculate lucas number
    for (int i = 3; i <= x; i++)
    {
        luc = first + second;
        first = second;
        second = luc;
    }
    
    return luc;
}

// start main function
int main(void) {
    // declare variables
    int first = 2, second = 1;

    // define variable
    int num, result;
    char ch;

    // create conditional output
    do {
        //Read numbers from the user
        printf("\nPlease enter any integer numbers: ");
        scanf("%d", &num);
        printf("\n");

        // print first and second numbers
        printf("%d\t %d\t", first, second);

        // calculate and print fibonacci numbers
        for (int i = 3; i <= num; i++) {
            result = calculate_lucas(i);
            printf("%d\t", result);
        }
        printf("\n"); // create a new line

        // Prompt user to continue or quit
        printf("Press 'ANY KEY' to continue, Press ESC to quit: ");
        ch = getch();
        printf("\n"); // create a new line

    } while (ch != 27);  // 27 is the ASCII value for ESC

    return 0;
}
