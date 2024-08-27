#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Declare and initialize a char array name
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Declare a file pointer fp
    FILE *w_fp;

    // Open a binary file in write mode.
    w_fp = fopen("example.bin", "wb");

    // Check if the file pointer is opened correctly or not
    if (w_fp == NULL){
        // print error message
        perror("Error opening file pointer");
        return 1; // Exit program with an error message
    }

    // Write the size of the array to the file
    fwrite(&size, sizeof(int), 1, w_fp);

    // Write the integer array to the file
    fwrite(numbers, sizeof(int), size, w_fp);

    //Close the file pointer
    fclose(w_fp);


    // Open the binary file in read mode.
    w_fp = fopen("example.bin", "rb");

    // Check if the file pointer is opened correctly or not
    if (w_fp == NULL){
        // print error message
        perror("Error opening file pointer");
        return 1; // Exit program with an error message
    }

    // Read the size of the array from the file
    int size_o;
    fread(&size_o, sizeof(int), 1, w_fp);

    // Allocate memory for the array
    int *buff_arr = (int*)malloc(size_o * sizeof(int));

    // Check memory allocation
    if(buff_arr == NULL){
        perror("Memory allocation failed");
        fclose(w_fp); // Close the file pointer
        return 1; // Exit with an error code.
    }

    // Read the integer array from the file and store theme in the array
    fread(buff_arr, sizeof(int), size_o, w_fp);
    
    // Close the file pointer
    fclose(w_fp);

    // Print the integer to verify the contents
    printf("Array element are: ");
    for (int i = 0; i < size_o; i++){
        printf("%d ", buff_arr[i]);
    }
    
    return 0;
}