// /* 
//  * File:    reverse number.c
//  * version: 2.0
//  * Author:  MD. SHAHRIAR AHAMMAD
//  *
//  * Created on April 17, 2024, 4:10 PM
//  */

// #include <stdio.h>
// #include <conio.h>

// // Function to calculate reverse number
// int calculate_reverse_number(int a){
//     // define and declare a temporary variable
//     int temp = a;
//     // define main variable
//     int rem, sum = 0;

//     // calculate the reverse number
//     while (temp != 0)
//     {
//         rem = temp % 10;
//         sum = (sum * 10) + rem;
//         temp = temp / 10;
//     }

//     return sum; // return the sum of digits
// }

// // start main function
// int main(void) {
//     // Define main variables
//     int num, result;
//     char ch;

//     // Create conditional output
//     do {
//         // Read numbers from the user
//         printf("\n"); // create new line
//         printf("Please enter any integer numbers like (123): ");
//         scanf("%d", &num);
//         printf("\n"); // create new line

//         // Calculate reverse number
//         result = calculate_reverse_number(num);
//         // Print sum of digit;
//         printf("The reverse number is: %d\n", result);
//         printf("\n"); // Create a new line 

//         // Prompt user to continue or quit
//         printf("Press 'c' to continue, Press ESC to quit: ");
//         ch = getch();
//         printf("\n"); // Create a new line

//     } while (ch != 27); // 27 is the ASCII value for ESC

//     return 0;
// }
