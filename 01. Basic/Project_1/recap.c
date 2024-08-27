#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h> // Include conio.h for Windows-specific getch() function

// function to generate and print random numbers
void create_rand(int given_number) {
    // generate random number
    int lucky_number = rand() % 10;

    // check if lucky number and given number are equal or not
    if (given_number == lucky_number) {
        printf("You are a winner!\n");
    } else {
        printf("You are a loser! The lucky number is: %d\n", lucky_number);
    }
    printf("\n"); // create a new line
}

// main function
int main(void) {
    // seed the random number generator
    srand((unsigned)time(NULL));

    // define variables
    int given_num;
    char ch;

    // create conditional output
    do {
        printf("\n"); // create a new line

        // read input from user
        printf("Enter an integer number between 0 and 9: ");
        if (scanf("%d", &given_num) != 1 || given_num < 0 || given_num > 9) {
            printf("Invalid input. Please enter a number between 0 and 9.\n");
            while (getchar() != '\n'); // clear input buffer
            continue;
        }
        printf("\n"); // create a new line

        // generate random number
        create_rand(given_num);

        // Prompt user to continue or quit
        printf("Press 'ENTER' to continue, Press ESC to quit: ");
        ch = _getch(); // Use _getch() from conio.h to read a single character without waiting for Enter
        printf("\n\n"); // create two new lines

    } while (ch != 27); // 27 is the ASCII value for ESC

    return 0;
}
