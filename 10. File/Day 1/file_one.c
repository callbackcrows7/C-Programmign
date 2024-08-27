#include <stdio.h>

int main(void){
    // Declare and initialize a char array name
    int numbers[] = {10, 20, 30, 40, 50};

    // Declare a file pointer fp
    FILE *w_fp;

    // Open the file pointer write mode.
    w_fp = fopen("example.txt", "w");

    // Check if the file pointer is opened correctly or not
    if (w_fp == NULL){
        // print error message
        perror("Error opening file pointer");
        return 1; // Exit program with an error message
    }

    //Write a integer and a string to the file pointer
    fprintf(w_fp, "Array Element Are: ");
    for(int i = 0; i < sizeof(numbers) / sizeof(int); i++){
        fprintf(w_fp, "%d ", numbers[i]);
    }
    //Close the file pointer
    fclose(w_fp);


    // Define a buffer array to store the integers
    int buff_arr[100];
    int pos = 0; // Set the buff_arr index stating position

    // Open the file pointer read mode.
    w_fp = fopen("example.txt", "r");

    // Check if the file pointer is opened correctly or not
    if (w_fp == NULL){
        // print error message
        perror("Error opening file pointer");
        return 1; // Exit program with an error message
    }

    // Set the cursor position at index 18
    fseek(w_fp, 18, SEEK_CUR);

    // Read the integer from the file and store theme in the array
    while (fscanf(w_fp, "%d", &buff_arr[pos]) != EOF){
        pos++; // Increment buf_arr index position
    }
    
    // Close the file pointer
    fclose(w_fp);

    // Print the integer to verify the contents
    printf("Array Element Are: ");
    for (int i = 0; i < pos; i++){
        printf("%d ", buff_arr[i]);
    }
    
    return 0;
}
