int main(void){
    // Declare source and destination file pointers
    FILE *source, *destination;

    // Define a char type variable ch
    char ch;

    // Open source file in read mode using fopen() function
    source = fopen("person.txt", "r");

    // Check if the source file exists
    if (source == NULL){
        // print error message
        perror("The source file does not exist\n");
        return 1; // Exit the program with an error message
    }

    // Open destination file in write mode using fopen() function
    destination = fopen("person_2.txt", "w");

    // Check if the destination file exists
    if (destination == NULL){
        // print error message
        perror("Error creating destination file\n");
        fclose(source); // Close the source file
        return 2; // Exit the program with an error message

    }
    
    // Copy content from source file to destination file
    while ((ch = fgetc(source)) != EOF){
        // Write character to destination file
        fputc(ch, destination);
    }
    
    // Close both files
    fclose(source);
    fclose(destination);

    printf("Data copied from source file to destination file successfully\n");

    return 0;
}