/* 
 * File:    find prime number.c
 * version: 1.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on April 16, 2024, 8:32 AM
 */

#include <stdio.h>
#include <conio.h>

// Function to calculate prime number.
int calculate_prime(int a){
    // define variables
    int i, count = 0;

    // calculate prime number
    for ( i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            count++;
            break;
        }

    }
    return count;
}

// Function to check is number prime or not
int check_is_prime(int a, int b){
    // check is number prime or not
    if (a == 0)
    {
        printf("%d is a prime number.\n", b);
    }
    else
    {
        printf("%d is not a prime number.\n", b);
    }
}

// start main function
int main(void) {
    // define variables
    int num, result;
    char ch;

    // create conditional output
    do
    {
        // read number form user
        printf("Please enter any integer number: ");
        scanf("%d", &num);
        printf("\n"); // create a new line

        // calculate prime number
        result = calculate_prime(num);

        // print is number prime or not
        check_is_prime(result, num);
        printf("\n"); // create a new line

        // Prompt user to continue or quit
        printf("Press 'Any Key' to continue, Press 'ESC' to quit: ");
        ch = getch();
        printf("\n\n"); // create two new line

    } while (ch != 27); // 27 is the ASCII value for ESC

    return 0;
}


// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     int i = 2, is_prime = 0;

//     while ( i < N) 
//     {
//         if (N % i == 0)
//         {
//             is_prime ++;
//         }

//         i ++;
        
//     }
    
//     if (is_prime == 0)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }

//     return 0;
// }