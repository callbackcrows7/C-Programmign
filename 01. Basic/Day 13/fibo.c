/* 
 * File:    fibonacci number.c
 * version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 18, 2024, 9:50 AM
 */

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

// Function to calculate fibonacci number
int calculate_fibonacci(int x) {
    // define variable
    int fibo;
    // declare variables
    int first = 0, second = 1, count = 0;
    
    // calculate fibonacci number
    while (count < x) {
        if (count <= 1) {
            fibo = count;
        } else {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        count++;
    }
    return fibo;
}

// Function to check if input is a positive integer
bool is_positive_integer(int x) {
    return x > 0;
}

// start main function
int main(void) {
    // define variable
    int num, result;
    char ch;

    // create conditional output
    do {
        //Read numbers from the user
        printf("\nPlease enter a positive integer: ");
        if (scanf("%d", &num) != 1 || num < 0) {
            printf("Invalid input. Please enter a positive integer.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        printf("\n");

        // calculate and print fibonacci numbers
        for (int i = 1; i <= num; i++) {
            result = calculate_fibonacci(i);
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
