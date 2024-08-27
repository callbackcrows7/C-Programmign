#include <stdio.h>

int main(void){
    // Define a file pointer and open it for reading
    FILE *file = fopen("person.txt", "r");

    // Check if the file pointer is successfully opened or not
    if (file == NULL){
        perror("Error opening test.txt file");
        return 1;
    }

    // Define a char data type variable character
    char characters;
    char *str;
    int len = 0;

    // Read characters from the file until the end of file is reached
    while ((characters = fgetc(file)) != EOF){
        //printf("%c", characters);
        str[len] = characters;
        len++;
    }

    for (len = 0; len < 1000; len++)
    {
        printf("%c", str[len]);
    }
    
    // Close the file pointer
    fclose(file);

    return 0;
}