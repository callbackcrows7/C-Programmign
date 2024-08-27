// /* 
//  * File:    calculator.c
//  * Version: 2.0
//  * Author:  MD. SHAHRIAR AHAMMAD
//  * Description: 
//  *    This program is a simple calculator that performs basic arithmetic operations 
//  *    such as addition, subtraction, multiplication, and division. It prompts the user 
//  *    to enter an operator (+, -, *, /) and two numbers, then displays the result of 
//  *    the operation. The program continues running until the user chooses to exit.
//  * Created on April 16, 2024, 6:44 AM
//  */

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// // Function prototypes
// double add(double a, double b);
// double sub(double a, double b);
// double multi(double a, double b);
// double divide(double a, double b);
// int is_valid_operator(char op);
// int is_valid_number(double num);
// void clear_input_buffer();


// int main(void) {
//     double num_one, num_two;
//     char operator, choice;

//     printf("Welcome to Simple Calculator\n");

//     do {
//         // Prompt user to enter operator
//         printf("\nPlease enter an operator (+, -, *, /): ");
//         scanf(" %c", &operator);

//         // Validate operator
//         if (!is_valid_operator(operator) || getchar() != '\n') {
//             printf("Invalid operator!\n");
//             while (getchar() != '\n'); // Clear input buffer
//             continue;
//         }

//         // Prompt user to enter numbers
//         printf("\nPlease enter two numbers: ");
//         // Check if two numbers are entered and if they are valid
//         if (scanf("%lf %lf", &num_one, &num_two) != 2 || !is_valid_number(num_one) || !is_valid_number(num_two)) {
//             printf("Invalid input! Please enter numeric values.\n");
//             while (getchar() != '\n'); // Clear input buffer
//             continue;
//         }
      
//         printf("\n"); // create a new line.

//         // Perform arithmetic operation based on operator
//         switch (operator) {
//             case '+':
//                 printf("(%.2lf + %.2lf) = %.2lf\n", num_one, num_two, add(num_one, num_two));
//                 break;
//             case '-':
//                 printf("(%.2lf - %.2lf) = %.2lf\n", num_one, num_two, sub(num_one, num_two));
//                 break;
//             case '*':
//                 printf("(%.2lf * %.2lf) = %.2lf\n", num_one, num_two, multi(num_one, num_two));
//                 break;
//             case '/':
//                 printf("(%.2lf / %.2lf) = %.2lf\n", num_one, num_two, divide(num_one, num_two));
//                 break;
//             default:
//                 printf("Invalid input!\n");
//                 break;
//         }

//         printf("\n"); // create a new line

//         clear_input_buffer(); // Clear input buffer before next iteration

//         // Prompt user to continue or quit
//         printf("Press 'q' to quit, or any other key followed by 'Enter' to continue: ");
//         scanf(" %c", &choice);

//         // Clear screen and move cursor to top-left corner
//         system("clear || cls");

//     } while (choice != 'q'); // Continue until 'q' is pressed

//     printf("Thank you for using Simple Calculator.\n");

//     return 0;
// }

// // Function definitions remain the same as before...

// // Function to calculate addition
// // Parameters:
// //    a: the value of the first operand of the addition.
// //    b: the value of the second operand of the addition.
// // Returns:
// //    The result of adding a and b.
// double add(double a, double b) {
//     return a + b;
// }

// // Function to calculate subtraction
// // Parameters:
// //    a: the value of the first operand of the subtraction.
// //    b: the value of the second operand of the subtraction.
// // Returns:
// //    The result of subtracting b from a.
// double sub(double a, double b) {
//     return a - b;
// }

// // Function to calculate multiplication
// // Parameters:
// //    a: the value of the first operand of the multiplication.
// //    b: the value of the second operand of the multiplication.
// // Returns:
// //    The result of multiplying a and b.
// double multi(double a, double b) {
//     return a * b;
// }

// // Function to calculate division
// // Parameters:
// //    a: the value of the numerator.
// //    b: the value of the denominator.
// // Returns:
// //    The result of dividing a by b.
// // Notes:
// //    If the denominator is 0, the function will print an error message and terminate the program.
// double divide(double a, double b) {
//     if (b == 0) {
//         printf("Error: Division by zero is not allowed\n");
//         exit(EXIT_FAILURE); // Terminate the program with a failure status
//     } else {
//         return a / b;
//     }
// }

// // Function to check if operator is valid
// int is_valid_operator(char op) {
//     return op == '+' || op == '-' || op == '*' || op == '/';
// }

// // Function to check if number is valid
// int is_valid_number(double num) {
//     // Check if num is a valid number
//     return !isnan(num) && num != HUGE_VAL && num != -HUGE_VAL;
// }

// // Function to clear input buffer
// void clear_input_buffer() {
//     while (getchar() != '\n');
// }



/* 
 * File:    calculator.c
 * Version: 2.01
 * Author:  MD. SHAHRIAR AHAMMAD
 * Description: 
 *    This program is a simple calculator that performs basic arithmetic operations 
 *    such as addition, subtraction, multiplication, and division. It prompts the user 
 *    to enter an operator (+, -, *, /) and two numbers, then displays the result of 
 *    the operation. The program continues running until the user chooses to exit.
 * Created on April 16, 2024, 6:44 AM
 * Updated on August 16, 2024, 03:19 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// Function prototypes
double add(double a, double b);
double sub(double a, double b);
double multi(double a, double b);
double divide(double a, double b);
int is_valid_operator(char op);
int is_valid_number(double num);
void clear_input_buffer();
void clear_console();


int main(void) {
    double num_one, num_two;
    char operator, choice;

    printf("Welcome to Simple Calculator\n");

    do {
        // Prompt user to enter operator
        printf("\nPlease enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        // Validate operator
        if (!is_valid_operator(operator) || getchar() != '\n') {
            printf("Invalid operator!\n");
            clear_input_buffer(); // Clear input buffer
            continue;
        }

        clear_console(); // Clear the current console.

        // Prompt user to enter numbers
        while (true) {
            printf("\nPlease enter two numbers: ");
            // Check if two numbers are entered and if they are valid
            if (scanf("%lf %lf", &num_one, &num_two) != 2 || !is_valid_number(num_one) || !is_valid_number(num_two)) {
                printf("Invalid input! Please enter numeric values.\n");
                clear_input_buffer(); // Clear input buffer
            } else {
                break;
            }
        }
        
        clear_console(); // Clear the current console.

        printf("\n"); // create a new line.

        // Perform arithmetic operation based on operator
        switch (operator) {
            case '+':
                printf("(%.2lf + %.2lf) = %.2lf\n", num_one, num_two, add(num_one, num_two));
                break;
            case '-':
                printf("(%.2lf - %.2lf) = %.2lf\n", num_one, num_two, sub(num_one, num_two));
                break;
            case '*':
                printf("(%.2lf * %.2lf) = %.2lf\n", num_one, num_two, multi(num_one, num_two));
                break;
            case '/':
                printf("(%.2lf / %.2lf) = %.2lf\n", num_one, num_two, divide(num_one, num_two));
                break;
            default:
                printf("Invalid input!\n");
                break;
        }

        printf("\n"); // create a new line

        clear_input_buffer(); // Clear input buffer before next iteration

        // Prompt user to continue or quit
        printf("Press 'q' to quit, or any other key followed by 'Enter' to continue: ");
        scanf(" %c", &choice);

        // Clear screen and move cursor to top-left corner
        clear_console();

    } while (choice != 'q'); // Continue until 'q' is pressed

    printf("Thank you for using Simple Calculator.\n");

    return 0;
}

// Function definitions remain the same as before...

// Function to calculate addition
// Parameters:
//    a: the value of the first operand of the addition.
//    b: the value of the second operand of the addition.
// Returns:
//    The result of adding a and b.
double add(double a, double b) {
    return a + b;
}

// Function to calculate subtraction
// Parameters:
//    a: the value of the first operand of the subtraction.
//    b: the value of the second operand of the subtraction.
// Returns:
//    The result of subtracting b from a.
double sub(double a, double b) {
    return a - b;
}

// Function to calculate multiplication
// Parameters:
//    a: the value of the first operand of the multiplication.
//    b: the value of the second operand of the multiplication.
// Returns:
//    The result of multiplying a and b.
double multi(double a, double b) {
    return a * b;
}

// Function to calculate division
// Parameters:
//    a: the value of the numerator.
//    b: the value of the denominator.
// Returns:
//    The result of dividing a by b.
// Notes:
//    If the denominator is 0, the function will print an error message and terminate the program.
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed\n");
        exit(EXIT_FAILURE); // Terminate the program with a failure status
    } else {
        return a / b;
    }
}

// Function to check if operator is valid
int is_valid_operator(char op) {
    return op == '+' || op == '-' || op == '*' || op == '/';
}

// Function to check if number is valid
int is_valid_number(double num) {
    // Check if num is a valid number
    return !isnan(num) && num != HUGE_VAL && num != -HUGE_VAL;
}

// Function to clear input buffer
void clear_input_buffer() {
    while (getchar() != '\n');
}

// Function to clear current console
void clear_console() {
    system("clear || cls");
}