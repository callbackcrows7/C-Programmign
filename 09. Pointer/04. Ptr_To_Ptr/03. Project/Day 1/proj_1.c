#include <stdio.h>

// Function prototype
int add(int a, int b);
int sub(int a, int b);
int pro(int a, int b);
int div(int a, int b);

int main(void){
    // Declare variables
    int a = 10, b = 20;

    // Declare an array of pointers to function
    int (*func_arr[])(int, int) = {add, sub, pro, div};

    // Calculation a and b.
    int result_1 = func_arr[0](a, b);
    int result_2 = func_arr[1](a, b);
    int result_3 = func_arr[2](a, b);
    int result_4 = func_arr[3](a, b);

    // Printing the result.
    printf("%d + %d = %d\n", a, b, result_1);
    printf("%d - %d = %d\n", a, b, result_2);
    printf("%d * %d = %d\n", a, b, result_3);
    printf("%d / %d = %d\n", a, b, result_4);


    return 0;
}

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int pro(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a / b;
}