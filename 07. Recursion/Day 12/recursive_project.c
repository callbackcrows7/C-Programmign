#include <stdio.h>
#include <string.h>

int f_calls = 0; // Global counter to keep track of the number of function calls
int fibo[10]; // Global array to store the calculated Fibonacci numbers

// Function prototypes
void get_input(int *n);
int fibonacci(int n);

int main(void){
    int n; // Define an integer variable n
    char suffixes[3]; // Define a character array.

    // Initialize fibo array with -1 using memset function
    memset(fibo, -1, sizeof(fibo));

    // Set the Fibonacci sequence base cases
    fibo[0] = 0;
    fibo[1] = 1;

    // Get the input from the user with validation
    get_input(&n);

    // Ensure the input does not exceed the predefined size of the array
    if (n >= 10) {
        printf("Input exceeds the supported range (0-9).\n");
        return 1;
    }

    // Check user input and set the suffixes after the user input
    if (n == 1) {
        strcpy(suffixes, "st");
    }
    else if (n == 2) {
        strcpy(suffixes, "nd");
    }
    else if (n == 3) {
        strcpy(suffixes, "rd");
    }
    else {
        strcpy(suffixes, "th");
    }

    // Calculate and print the Fibonacci number
    printf("The %d%s Fibonacci number is: %d\n", n, suffixes, fibonacci(n));

    // Print the total number of function calls
    printf("Number of function calls: %d\n", f_calls);

    return 0;
}

// Function to get input from user with validation
void get_input(int *n){
    printf("Enter a non-negative integer less than 10: ");
    // Check input validation
    while (scanf("%d", n) != 1 || *n < 0 || *n >= 10){
        printf("Invalid input. Enter a non-negative integer less than 10: ");
        while(getchar() != '\n'); // Clear invalid input from buffer
    }
}

// Function to calculate Fibonacci number
int fibonacci(int n){
    // Increment the function call counter
    f_calls += 1;

    // If the Fibonacci number is already calculated, return the stored value, Or If n less than equal to 1 return fibonacci base case. 
    if (fibo[n] != -1 || n <= 1){
        return fibo[n];
    }

    // Calculate Fibonacci number for n >= 2 and store the result in fibo[n]
    fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return fibo[n]; // Return the calculated value
}