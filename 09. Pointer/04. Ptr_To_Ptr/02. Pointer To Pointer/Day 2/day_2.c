#include <stdio.h>

int main(void){
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*ptr)[3] = arr;
    int (**ptr2)[3] = &ptr;

    
    printf("Address of array first row is: %p\n", &arr[0]);
    printf("Address of array first row first column is: %p\n", &arr[0][0]);
    printf("Address of pointer is: %p\n", (void*)ptr);
    printf("Address of pointer to pointer is: %p\n", (void*)*ptr2);
    printf("Memory address of pointer to pointer is: %p\n", (void **)ptr2);
    printf("\n");

    (*ptr2)++; // Increment pointer to pointer 

    printf("Address of array second row is: %p\n", &arr[1]);
    printf("Address of array second row first column is: %p\n", &arr[1][0]);
    printf("Address of pointer is: %p\n", (void*)ptr);
    printf("Address of pointer to pointer is: %p\n", (void*)*ptr2);
    printf("Memory address of pointer to pointer is: %p\n", (void **)ptr2);

    return 0;
}