// /* 
//  * File:    palindrome number.c
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

// // Function to check is number palindrome or not
// int check_is_palindrome(int x, int y) {
//     if (x == y) {
//         printf("%d is a palindrome number.\n", x);
//     }else {
//         printf("%d is not a palindrome number.\n", x);
//     }
//     return 0;
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
//         // Print is number palindrome or not
//         check_is_palindrome(num, result);
//         printf("\n"); // Create a new line 

//         // Prompt user to continue or quit
//         printf("Press 'c' to continue, Press ESC to quit: ");
//         ch = getch();
//         printf("\n"); // Create a new line

//     } while (ch != 27); // 27 is the ASCII value for ESC

//     return 0;
// }

#include<stdio.h>

int main()
{
    int num, rem, sum = 0;
    scanf("%d", &num);

    //Write your code here
    int temp = num;
    while(num != 0){
        rem = num % 10;
        sum = (sum * 10) + rem;
         /= 10;
    }
    printf("%d\n", sum);

    if(sum == num){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }

    return 0;
}