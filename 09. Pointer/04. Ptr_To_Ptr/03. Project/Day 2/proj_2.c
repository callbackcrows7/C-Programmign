#include <stdio.h>

int main(void){
    int x = 10;
    int y;
    int *p;

    printf("Value of x is: %d\n", x);

    p = &x;
    y = *p;
    *p = 15;

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p: %d\n", *p);
    printf("\n");

    printf("Address of x is: %p\n", &x);
    printf("Address of y is: %p\n", &y);
    printf("\n");

    printf("Value of p is: %p\n", p);

    return 0;
}