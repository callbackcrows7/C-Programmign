#include <stdio.h>

int fact (int n) {
    if (n == 1){
        return 1; // exits the program
    }else{
        return n * fact(n - 1);
    }
}

int sum (int n) {
    if (n == 1){
        return 1; // exits the program
    }else{
        return n + sum(n - 1);
    }
}

int main(void) {
    int n = 5;

    printf("%d! is: %d\n", n, fact(n));

    printf("%d+ is: %d\n", n, sum(n));
    	
    return 0;
}