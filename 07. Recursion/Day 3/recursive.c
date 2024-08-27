#include <stdio.h>

// Function prototypes
void recursive(int count);

int main(void) {
    int count = 0;

    recursive(count);
    
    return 0;
}

void recursive(int count) {

    if (count == 5){
        return;
    }
    
    printf("I am learning recursion\n");
    recursive(count + 1);
    
}