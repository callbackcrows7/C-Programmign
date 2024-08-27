#include <stdio.h>

int main(void){
    // Define a file pointer and open it for reading
    FILE *file = fopen("person.txt", "r");

    // Check if the file pointer is successfully opened or not
    if (file == NULL){
        perror("Error opening test.txt file");
        return 1; // Exit the program with an error code
    }

    // Define a char data type variable character
    char characters;
    
    // Read characters from the file until the end of file is reached
    while (!feof(file)){
        characters = fgetc(file);

        // Check if feof is true before using the character
        if(!feof(file)){
            // Print the character
            printf("%c", characters);
        }

    }

    // Close the file pointer
    fclose(file);

    return 0;
}