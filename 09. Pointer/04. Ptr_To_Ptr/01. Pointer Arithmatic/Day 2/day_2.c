#include <stdio.h>

int main(void){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 9}
    };

    int (*ptr)[3] = arr;

    printf("Value at array[0][0]: %d\n", ptr[0][0]); // Value: 1
    printf("Value at array[0][1]: %d\n", ptr[0][1]); // Value: 2
    printf("\n");

    printf("Value at array[1][0]: %d\n", ptr[1][0]); // Value: 4
    printf("Value at array[1][1]: %d\n", ptr[1][1]); // Value: 15
    printf("\n");

    printf("Value at array[2][0]: %d\n", ptr[2][0]); // Value: 7
    printf("Value at array[2][1]: %d\n", ptr[2][1]); // Value: 8
    printf("\n");

    return 0;
} 