/* 
 * File:    spelling.c
 * version: 1.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 16, 2024, 6:20 AM
 */

#include <stdio.h>
#include <conio.h>

// function to spelling number.
int spelling(int x){
    switch (x)
    {
    case 0:
        printf("Zero\n");
        break;

    case 1:
        printf("One\n");
        break;

    case 2:
        printf("Two\n");
        break;

    case 3:
        printf("Three\n");
        break;

    case 4:
        printf("Four\n");
        break;

    case 5:
        printf("Five\n");
        break;

    case 6:
        printf("Six\n");
        break;

    case 7:
        printf("Seven\n");
        break;
        
    case 8:
        printf("Eight\n");
        break;
        
    case 9:
        printf("Nine\n");
        break;
        
    default:
        printf("Invalid input!\n");
        break;
    }
}

// start main function
int main(void) {
    // define variables
    int digit;
    char ch;

    // create conditional output.
    do
    {
        // read digit form user
        printf("Please enter a digit between 0 to 9: ");
        scanf("%d", &digit);
        printf("\n"); // create a new line

        // print spelling number
        spelling(digit);
        printf("\n"); // create a new line

        // Prompt user to continue or quit
        printf("Press 'ANY KEY' to continue, Press ESC to quit: ");
        ch = getch();
        printf("\n\n"); // create two new line

    } while (ch != 27); // 27 is the ASCII value for ESC


    return 0;
}