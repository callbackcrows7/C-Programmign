/* 
 * File:    GCD & LCM.c
 * version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 17, 2024, 6:24 AM
 */

#include <stdio.h>
#include <conio.h>

// Function to calculate GCD
int calculateGCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// Function to calculate LCM
int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main(void) {
    // Define main variables
    int num_1, num_2, GCD, LCM;
    char ch;

    // Create conditional output
    do {
        // Read numbers from the user
        printf("\n"); // create new line
        printf("Please enter two integer numbers: ");
        if (scanf("%d %d", &num_1, &num_2) != 2) {
            printf("Invalid input. Please enter integers only.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        printf("\n"); // create new line

        // Calculate GCD value
        GCD = calculateGCD(num_1, num_2);
        // Print GCD value
        printf("GCD is: %d\n", GCD);

        // Calculate LCM value
        LCM = calculateLCM(num_1, num_2);
        // Print LCM value
        printf("LCM is: %d\n", LCM);
        printf("\n"); // Create a new line 

        // Prompt user to continue or quit
        printf("Press 'c' to continue, Press ESC to quit: ");
        ch = getch();
        printf("\n"); // Create a new line

    } while (ch != 27); // 27 is the ASCII value for ESC

    return 0;
}
