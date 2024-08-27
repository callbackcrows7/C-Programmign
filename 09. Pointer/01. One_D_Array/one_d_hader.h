// Function to get the columns of the array from the user with validation
void get_cols(int *cols){
    // Get the size of the array from the user and check its validity
    printf("How many columns do you need in the array?: ");
    while(scanf("%d", cols) != 1 || *cols <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        while (getchar() != '\n'); // Clear invalid input from buffer
    }
}

// Function to allocate memory for the dynamic array with error checking
void allocate_memory(int cols, int **dynamic_array) {
    // Allocate memory dynamically for the array
    *dynamic_array = (int *)malloc(cols * sizeof(int));
    // Check memory allocation error
    if (*dynamic_array == NULL){
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE); // Exit the program with failure status
    }
}

// Function to collect elements from the user with validation
void get_element_from_user(int cols, int *dynamic_array){
    for (int i = 0; i < cols; i++){
        printf("Enter element at index[%d]: ", i);
        while(scanf("%d", &dynamic_array[i]) != 1) {
            printf("Invalid input. Please enter an integer for index[%d]: ", i);
            while(getchar() != '\n'); // Clear invalid input from buffer
        }
    }
}

// Function to clear console (cross-platform)
void clear_console() {
    // Instead of clearing the console, inform the user that the screen will be cleared.
    printf("Press Enter to clear the console...");
    while (getchar() != '\n'); // Wait for user to press Enter
    getchar(); // Wait for the second Enter press
    system("cls||clear");
}

// Function to print the elements of the array
void print_elements(int cols, int *dynamic_array){
    printf("Dynamic array elements are: ");
    for(int i = 0; i < cols; i++){
        printf("%d\t", dynamic_array[i]);
    }
    printf("\n");
}

// Function to free the allocated memory and set the pointer to NULL
void free_memory(int **dynamic_array){
    free(*dynamic_array);
    *dynamic_array = NULL;
}