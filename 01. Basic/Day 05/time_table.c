/* 
 * File:    time_table.c
 * Version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 * 
 * Description:
 * This program generates times tables for user-defined positive integer inputs. 
 * It prompts the user to enter a positive integer and then displays the times table
 * for that number from 1 to 10. The program continues to generate times tables 
 * until the user decides to quit.
 * 
 * Created on: April 16, 2024, 7:22 AM
 */

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int time_table(int x); // Function to generate and print a times table for a given integer
void clear_input_buffer(); // Function to clear any remaining characters in the input buffer

// Main function to interact with the user and generate times tables
int main(void) {
    // Define variables
    int num, i, attempts;
    char ch;

    printf("Welcome to the Simple Times Table Generator\n\n");

    // Prompt the user to enter a positive integer and generate a times table
    do
    {
        // Read a positive integer from the user
        attempts = 0; // Reset the number of attempts
        while (1) {
            printf("Please enter a positive integer: ");
            if (scanf("%d", &num) != 1 || num <= 0) {
                printf("Invalid input. Please enter a positive integer.\n");
                clear_input_buffer(); // Clear input buffer
                attempts++;
                if (attempts >= 3) { // Limit number of attempts
                    printf("Too many invalid inputs. Exiting.\n");
                    exit(EXIT_FAILURE);
                }
            } else {
                clear_input_buffer(); // Clear input buffer
                break; // Break out of the loop if input is valid
            }
        }

        // Generate and print the times table for the input integer
        time_table(num);

        clear_input_buffer(); // Clear input buffer before the next iteration

        // Prompt the user to continue or quit
        printf("Do you want to generate another times table? (Enter 'y' for yes, 'n' for no): ");
        ch = getchar(); // Read the character
        printf("\n"); // Move to the next line

        // Clear the screen and move the cursor to the top-left corner
        system("clear || cls");

    } while (ch == 'y' || ch == 'Y'); // Continue until 'n' is pressed

    printf("Goodbye!\n");

    return 0;
}

// Function to generate and print a times table for a given integer
// Parameters:
//    x: The integer for which the times table is generated
// Returns:
//    0 indicating successful execution
int time_table(int x) {
    // Generate and print the times table
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", x, i, x * i);
    }
    printf("\n");

    return 0;
}

// Function to clear any remaining characters in the input buffer
void clear_input_buffer() {
    while (getchar() != '\n');
}