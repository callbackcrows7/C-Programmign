#include <stdio.h>

int main(void){
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int *ptr = arr;
    int **ptr2 = &ptr;

    printf("value of [%d][%d] is: %d\n");

    return 0;
}