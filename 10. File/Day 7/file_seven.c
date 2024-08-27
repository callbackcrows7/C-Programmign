#include <stdio.h>

int main(void){
    // Define a int data type variable a
    int a;

    // Read int from user input until the end of file is reached
    while (printf("Enter an integer number: "), scanf("%d", &a) != EOF){
        printf("The output is: %d\n", a);
        printf("\n");
    }

    return 0;
}