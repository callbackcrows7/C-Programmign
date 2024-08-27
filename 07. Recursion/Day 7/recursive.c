#include <stdio.h>

// Function prototypes
int fact(int n);

int main(void) {
    int n = 5;

    printf("Factorial of %d! is: %d\n", n, fact(n));

    return 0;
}

int fact(int n) {

    if (n == 0){
        return 1;
    }

   return n * fact(n - 1);
}