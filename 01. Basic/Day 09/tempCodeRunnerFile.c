/* 
 * File:    sum of digit.c
 * version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 17, 2024, 3:30 PM
 */

#include <stdio.h>
#include <conio.h>

// Function to calculate sum of digit
long double calculate_sum_of_digit(long double num){
    
    // define main variable
    long double rem, sum = 0;

    // calculate the sum of digits
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    return sum; // return the sum of digits
}

// start main function
int main(void) {
    // Define main variables
    long double num, result;
    char ch;

    // Create conditional output
    do {
        // Read numbers from the user
        printf("\n"); // create new line
        printf("Please enter any positive numbers like (123): ");
        scanf("%Lf", &num);   
        printf("\n"); // create new line

        // Calculate sum of digit
        result = calculate_sum_of_digit(num);
        // Print sum of digit;
        printf("Sum of digit is: %.2Lf\n", result);
        printf("\n"); // Create a new line 

        // Prompt user to continue or quit
        printf("Press 'c' to continue, Press ESC to quit: ");
        ch = getch();
        printf("\n"); // Create a new line

    } while (ch != 27); // 27 is the ASCII value for ESC

    return 0;
}
