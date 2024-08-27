#include <stdio.h>

// Function prototypes
void recursive(int count);

int main(void) {
    int count = 1;

    recursive(count);

    return 0;
}

void recursive(int count) {

    if (count == 5){
        return;
    }

    printf("Count: %d\n", count);
 
    recursive(count + 1);
}
