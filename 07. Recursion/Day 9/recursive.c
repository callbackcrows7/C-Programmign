#include <stdio.h>

// Function prototype
void rev(char* str);

int main(void){
    char greet[] = "Hello, world!";
    rev(greet);

    return 0;
}
// Function to reverse a string
void rev(char* str){

    if (*str != '\0'){
        rev(str + 1);
        printf("%c", *str);
    }
    
}