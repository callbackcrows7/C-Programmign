#include <stdio.h>

int main(void){
    int x = 10;
    int *ptr = &x;
    int **ptr2 = &ptr;

    printf("Before modify value of x is: %d\n", **ptr2);

    **ptr2 = 20; // increment value of x using pointer to pointer.

    printf("After modify value of x is: %d\n", **ptr2);

    

    return 0;
}