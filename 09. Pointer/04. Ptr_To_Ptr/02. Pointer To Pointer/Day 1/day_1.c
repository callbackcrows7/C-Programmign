#include <stdio.h>

void clear_pointer(int **pointer);

int main(void) {

    // Declare an int variable x and initialize it with 10.
    int x = 10;

    // Declare an int pointer variable ptr and initialize it with variable x memory address.
    int *ptr = &x;

    // print value of x through pointer variable.
    printf("Value of x is: %d\n", *ptr);

    // Clear the pointer variable
    clear_pointer(&ptr);

    // Check if pointer variable cleared or not
    if(ptr == NULL){
        fprintf(stderr, "Pointer cleared.\n");
        return 1; // Exit with an error code
    }

    return 0;
}

// Function to clear the pointer
void clear_pointer(int **pointer){
    *pointer = NULL;
}