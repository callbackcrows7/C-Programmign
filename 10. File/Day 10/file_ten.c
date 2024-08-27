#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void){
    // Declare a file path
    const char* file_path = "\"C:/game/Hitman.2.Silent.Assassin/Hitman 2 Silent Assassin/hitman2.exe\"";

    // Check if the file has execute or search permissions
    if (access(file_path, X_OK) != 1){
        // Execute the file using system function.
        int result = system(file_path);
        // Check if the successfully executed or not
        if (result == 0){
           printf("The file successfully executed\n");
        }else{
            printf("Error executing the file\n");
        }
        
    }else{
        printf("The file %s dose not has execute or search permissions\n", file_path);
    }

    return 0;
}