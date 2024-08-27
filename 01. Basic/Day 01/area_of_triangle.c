/* 
 * File:    area of triangle.c
 * version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 15, 2024, 3:59 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate the area of a triangle
// Parameters:
//    base: the base of the triangle
//    height: the height of the triangle
// Returns:
//    The area of the triangle
float calculate_area(float base, float height) {
    float area = 0.5 * base * height;
    return area;
}

// Main function to interact with the user and calculate the area of a triangle
int main(void) {
    float base, height, area;
    char ch;

    // Prompting the user to enter the base and height of the triangle and calculating its area
    do {
        // Read base and height of the triangle from user
        printf("Please enter the base and height of the triangle (positive numbers): ");
        while (scanf("%f %f", &base, &height) != 2 || base <= 0 || height <= 0) {
            printf("Invalid input. Please enter positive numbers: ");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        
        printf("\n"); // create a new line.

        // Calculate area of triangle
        area = calculate_area(base, height);

        // Round the area to two decimal places
        area = roundf(area * 100) / 100; // multiply by 100, round, and then divide by 100 to round to two decimal places

        // Print area of triangle
        printf("Area of the triangle is: %.2f\n\n", area);

        // Clear input buffer
        while (getchar() != '\n');

        // Prompt user to continue or quit
        printf("Press 'q' to quit, or any other key followed by 'Enter' to continue: ");
        scanf(" %c", &ch); // Read the character
        printf("\n"); // Create a new line
    } while (ch != 'q'); // Continue until 'q' is pressed


    return 0;
}



////Update version of the code.


// #include <stdio.h>
// #include <stdlib.h>

// // Function prototypes
// float getPositiveNumber(const char* prompt);
// float calculateArea(float base, float height);
// void clearInputBuffer();

// int main() {
//     float base, height, area;
//     char ch;

//     // Loop until the user chooses to quit
//     do {
//         // Prompt the user to enter base and height of the triangle
//         base = getPositiveNumber("Enter the base of the triangle (positive number): ");
//         height = getPositiveNumber("Enter the height of the triangle (positive number): ");

//         // Clear the console
//         #ifdef _WIN32
//         system("cls");
//         #else
//         system("clear");
//         #endif
        

//         // Calculate the area of the triangle
//         area = calculateArea(base, height);

//         // Print the area of the triangle
//         printf("Area of the triangle is: %.2f\n\n", area);

//         // Prompt the user to continue or quit
//         printf("Press 'q' to quit, or any other key followed by Enter to continue: ");
//         scanf(" %c", &ch);
//         clearInputBuffer(); // Clear input buffer

//         printf("\n");
//     } while (ch != 'q'); // Continue until 'q' is pressed

//     return 0;
// }

// // Function to prompt the user to enter a positive number
// float getPositiveNumber(const char* prompt) {
//     float number;

//     // Prompt user until a positive number is entered
//     do {
//         printf("%s", prompt);
//         while (scanf("%f", &number) != 1 || number <= 0) {
//             printf("Invalid input. Please enter a positive number.\n");
//             clearInputBuffer(); // Clear input buffer
//             printf("%s", prompt);
//         }
//         clearInputBuffer(); // Clear input buffer
//     } while (number <= 0);

//     return number;
// }

// // Function to calculate the area of a triangle
// float calculateArea(float base, float height) {
//     return 0.5 * base * height;
// }

// // Function to clear input buffer
// void clearInputBuffer() {
//     while (getchar() != '\n');
// }