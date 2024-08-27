#include <stdio.h>
#include <stdlib.h>
#include "one_d_hader.h"

int main(void){
    // Declare variable and pointer
    int *dynamic_array = NULL;
    int cols;

    // Get the cols of the array from the user with validation
    get_cols(&cols);

    // Allocate memory for the dynamic array with error checking
    allocate_memory(cols, &dynamic_array);

    // Collect elements from the user with validation
    get_element_from_user(cols, dynamic_array);
    clear_console(); // Clear the console

    // Print the elements of the array
    print_elements(cols, dynamic_array);

    //free the allocated memory and set the pointer to NULL
    free_memory(&dynamic_array);

    return 0;
}