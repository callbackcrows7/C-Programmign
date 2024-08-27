/* 
 * File:    area_of_triangle.c
 * Version: 2.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 15, 2024, 4:10 PM
 * Description:
 *    This program calculates the area of a triangle based on the lengths of its sides.
 *    It utilizes Heron's formula to compute the area. The user is prompted to input the
 *    lengths of the three sides of the triangle, and the program validates whether these
 *    inputs form a valid triangle according to the triangle inequality theorem. If the
 *    inputs are valid, the program calculates and displays the area of the triangle. The
 *    user is then given the option to continue entering new triangle sides or to quit.
 *    The program ensures input validation and correct error handling.
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// Function prototypes
float calculate_area_of_triangle(float x, float y, float z);
bool is_valid_triangle(float x, float y, float z);


// Main function to interact with the user and calculate the area of a triangle
int main(void) {
    // Define variables
    float side1, side2, side3, area;
    char choice;

    // Prompt the user to enter the three sides of the triangle and calculate its area
    do {
        // Read the three sides of the triangle from the user
        printf("Please enter the values of the three sides of the triangle (a, b & c): ");
        if (scanf("%f %f %f", &side1, &side2, &side3) != 3 || !is_valid_triangle(side1, side2, side3)) {
            printf("Invalid input. Please enter positive numbers that satisfy the triangle inequality theorem.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }

        printf("\n"); // Create a new line

        // Calculate the area of the triangle
        area = calculate_area_of_triangle(side1, side2, side3);

        // Round the area to two decimal places
        area = roundf(area * 100) / 100; // multiply by 100, round, and then divide by 100 to round to two decimal places
        
        // Print the area of the triangle
        printf("Area of the triangle is %.2f\n", area);
        printf("\n"); // Create a new line

        // Clear the input buffer
        while (getchar() != '\n');

        // Prompt the user to continue or quit
        printf("Do you want to calculate the area of another triangle? (y/n): ");
        scanf(" %c", &choice); // Read the character
        printf("\n"); // Create a new line

        // Clear screen and move cursor to top-left corner
        system("clear || cls");
        
    } while (choice == 'y' || choice == 'Y'); // Continue until 'n' is pressed
    
    printf("Goodbye!\n");

    return 0;
}

// Function definitions remain the same as before...

// Function to calculate the area of a triangle
// Parameters:
//    x: the length of the first side of the triangle
//    y: the length of the second side of the triangle
//    z: the length of the third side of the triangle
// Returns:
//    The area of the triangle
float calculate_area_of_triangle(float x, float y, float z) {
    // Calculate the semi-perimeter
    float s = (x + y + z) / 2;
    // Calculate the area of the triangle using Heron's formula
    float area = sqrt(s * (s - x) * (s - y) * (s - z));
    
    return area;
}

// Function to check if a triangle with given sides is valid or not
// Parameters:
//    x: the length of the first side of the triangle
//    y: the length of the second side of the triangle
//    z: the length of the third side of the triangle
// Returns:
//    True if the triangle is valid according to the triangle inequality theorem and all sides are positive, otherwise false
bool is_valid_triangle(float x, float y, float z) {
    // Check if all sides are positive and if the triangle inequality theorem holds
    return (x > 0 && y > 0 && z > 0) && (x + y > z) && (x + z > y) && (y + z > x);
}