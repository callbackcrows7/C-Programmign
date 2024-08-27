#include <stdio.h>
#include <stdlib.h>

int main(void){
        // Execute the "dir" command on windows using system function.
        int result = system("ls");
        // Check if the successfully executed or not
        if (result == 0){
           printf("The command successfully executed\n");
        }else{
            printf("Error executing the command\n");
        }

    return 0;
}


#include <stdio.h>