/* 
 * File:    factorial.c
 * version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 16, 2024, 9:16 AM
 */

#include <stdio.h>
#include <conio.h>

// function to calculate factorial
int calculate_factorial(int x){
    // declare variable
    float fact = 1;

    // calculate factorial
    for ( int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

// start main function
int main(void) {
    // define variables
    float num, result;
    char ch;

    // create conditional output 
    do
    {
        // read number form user
        printf("Please enter any integer number: ");
        scanf("%f", &num);
        printf("\n"); // create a new line

        // calculate factorial
        result = calculate_factorial(num);

        // print factorial
        printf("%.2f! = %.2f\n", num, result);
        printf("\n"); // create a new line

        // Prompt user to continue or quit
        printf("Press 'ANY KEY' to continue, Press 'ESC' to quit: ");
        ch = getch();
        printf("\n"); // create a new line

    } while (ch != 27); // 27 is the ASCII value for ESC

    
    return 0;
}