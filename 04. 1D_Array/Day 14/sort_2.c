// sort an array. method 2             
#include <stdio.h>

int main(void)
{
    // define variables.
    int i, j, temp;

    // initialize a unsorted array
    int my_arr[] = {1, 10, 7, 6, 5,};

    // calculate array length
    size_t length = sizeof(my_arr)/sizeof(my_arr[0]);

    // sort array elements using bubble sort algorithm
    for ( i = 0; i < length; i++)
    {
        for ( j = 0; j < length - 1; j++)
        {
            if (my_arr[j] > my_arr[j + 1])
            { 
                temp = my_arr[j]; 
                my_arr[j] = my_arr[j + 1];	 
                my_arr[j + 1] = temp; 
            } 
 
        } 
 
    }

    // print sorted array elements
    for ( i = 0; i < length; i++) 
    { 
        printf("%d ", my_arr[i]); 
    }

    return 0; 
}


// find array element
#include <stdio.h>

int main(void)
{
    int i, is_found = -1, search_key;
    int my_arr[] = {1, 10, 7, 6, 5, 4, 3, 2, 9, 8};

    size_t length = sizeof(my_arr)/sizeof(my_arr[0]);

    printf("Please enter the search key:");
    scanf("%d", &search_key);

    for ( i = 0; i < length; i++)
    {
        if (search_key == my_arr[i])
        {
            is_found = my_arr[i];
            break;
        }
        
    }
    
    if (is_found == -1)
    {
        printf("Item not found");
    }
    else
    {
        printf("Item found at index: %d", (is_found -1));
    }
    
    return 0;
    
}


// declarations of 1d 2d and 3d arrays
#include <stdio.h>

int main(void){
    
    //declaring a one-dimensional array.
    int my_arr_one_d[7] = {1, 2, 3, 4, 5, 6, 7};

    printf("Output is: %d\n", my_arr_one_d[3]);

    size_t


    // declaring a Two-dimensional array.
    int my_arr_two_d[7][7] = {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21},
        {22, 23, 24, 25, 26, 27, 28},
        {29, 30, 31, 32, 33, 34, 35},
        {36, 37, 38, 39, 40, 41, 42},
        {43, 44, 45, 46, 47, 48, 49}
    };

    // printf("Output is: %d\n", my_arr_two_d[6][5]);


    // declaring a Two-dimensional array.
    int my_arr_three_d[3][7][7] = {
        {
            {1, 2, 3, 4, 5, 6, 7},
            {8, 9, 10, 11, 12, 13, 14},
            {15, 16, 17, 18, 19, 20, 21},
            {22, 23, 24, 25, 26, 27, 28},
            {29, 30, 31, 32, 33, 34, 35},
            {36, 37, 38, 39, 40, 41, 42},
            {43, 44, 45, 46, 47, 48, 49}
        },
        {
            {50, 51, 52, 53, 54, 55, 56},
            {57, 58, 59, 60, 61, 62, 63},
            {64, 65, 66, 67, 68, 69, 70},
            {71, 72, 73, 74, 75, 76, 77},
            {78, 79, 80, 81, 82, 83, 84},
            {85, 86, 87, 88, 89, 90, 91},
            {92, 93, 94, 95, 96, 97, 98}
        },
        {
            {99, 100, 101, 102, 103, 104, 105},
            {106, 107, 108, 109, 110, 111, 112},
            {113, 114, 115, 116, 117, 118, 119},
            {120, 121, 122, 123, 124, 125, 126},
            {127, 128, 129, 130, 131, 132, 133},
            {134, 135, 136, 137, 138, 139, 140},
            {141, 142, 143, 144, 145, 146, 147}
        }
    };

   return 0;
}