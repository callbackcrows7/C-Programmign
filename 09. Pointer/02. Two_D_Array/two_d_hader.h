// Function to scan rows with validations
void scan_rows(int *rows){
    printf("How many row do you need in the matrix: ");
    // Check input validations
    while(scanf("%d", rows) != 1 || *rows <= 0){
        printf("Invalid input. Enter a non-zero integer.");
        while (getchar() != '\n'); // Clear invalid input from buffer
    }
}

// Function to scan cols with validations
void scan_cols(int *cols){
    printf("How many columns do you need in the each row: ");
    // Check input validations
    while(scanf("%d", cols) != 1 || *cols <= 0){
        printf("Invalid input. Enter a non-zero integer.");
        while (getchar() != '\n'); // Clear invalid input from buffer
    }
}

// Function to allocate memory for the matrix(each row) with error checking.
void allocate_memory_each_row(int **matrix, int rows){
    matrix = (int**) malloc(rows * sizeof(int*));
    // Check error for allocating memory
    if(matrix == NULL){
        fprintf(stderr, "Memory allocation failure.\n");
        exit(EXIT_FAILURE); // Exit the program with a failure status
    }
}

// Function to allocate memory for each row(columns) of a matrix with error checking
void allocate_memory_each_col(int **matrix, int rows, int cols){
    for(int i = 0; i < rows; i++){
        matrix[i] = (int *) malloc(rows * sizeof(int));
        // Check error for allocating memory
        if (matrix[i] == NULL){
            // If allocation fails, free previously allocated memory
            for (int j = 0; j < i; j++){
                free(matrix[j]);
                matrix[j] = NULL;
            }
            free(matrix);
            matrix == NULL;
            fprintf(stderr, "Memory allocation failure\n");
            exit(EXIT_FAILURE); // Exit the program with a failure status.
        }
    }
}

// Function to collect elements from the user with validation
void get_elements(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at index[%d][%d]: ", i, j);
            while (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Enter an integer element at index[%d][%d]: ", i, j);
                while (getchar() != '\n'); // Clear invalid input from buffer
            }
        }
    }
}

// Function to print the elements of the matrix
void print_elements(int **matrix, int rows, int cols) {
    printf("Array elements are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to deallocate each row of a matrix(column) and set the pointer to NULL
void free_each_row(int **matrix, int rows){
    for(int i = 0; i < rows; i++){
        free(matrix[i]);
        matrix[i] = NULL;
    }
}

// Function to deallocate memory for the matrix(each row) and set the pointer to NULL
void free_matrix(int** matrix){
    free(matrix);
    matrix = NULL;
}

// Function to clear console (cross-platform)
void clear_console() {
    // Instead of clearing the console, inform the user that the screen will be cleared.
    printf("Press Enter to clear the console...");
    while (getchar() != '\n'); // Wait for user to press Enter
    getchar(); // Wait for the second Enter press
    system("cls||clear");
}
