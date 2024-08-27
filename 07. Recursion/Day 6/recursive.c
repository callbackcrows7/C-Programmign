#include <stdio.h>

// Function prototypes
void recursive();

int main(void) {
    recursive(1);
    return 0;
}

void recursive() {
    static int count = 1;

    if (count == 5){
        return;
    }

    printf("Count: %d\n", count);
    count += 1;
    recursive();
}