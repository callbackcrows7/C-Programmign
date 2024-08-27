// short an array. method 1             
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
        for ( j = 0; j < length; j++)
        {
            if (my_arr[i] < my_arr[j])
            { 
                temp = my_arr[i]; 
                my_arr[i] = my_arr[j]; 
                my_arr[j] = temp; 
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

/*
                    Visualization Bubble sort

1. Original array: [1, 10, 7, 6, 5]
    After the first iteration:
        No swaps occurred.
            Because:
            i = 1 and j = 1 (i !< j) so ans is no swap.
            i = 1 and j = 10(i !< j) so ans is no swap.
            i = 1 and j = 7 (i !< j) so ans is no swap.
            i = 1 and j = 6 (i !< j) so ans is no swap.
            i = 1 and j = 5 (i !< j) so ans is no swap.

2. Modified array: [1, 10, 7, 6, 5]
    After the second iteration:
        i = 10 and j = 1 (i < j)  so ans is swap, resulting in [1, 10].
        i = 10 and j = 10(i !< j) so ans is no swap, resulting in [1, 10].
        i = 10 and j = 7 (i < j)  so ans is wap, resulting in [1, 7, 10]
        i = 10 and j = 6 (i < j)  so ans is swap, resulting in [1, 7, 6, 10]
        i = 10 and j = 5 (i < j)  so ans is swap, resulting in [1, 7, 6, 5, 10]

3. Modified array: [1, 7, 6, 5, 10]
    After the third iteration:
    	i = 7 and j = 1 (i < j)  so ans is swap, resulting in [1, 7]
        i = 7 and j = 7 (i !< j) so ans is no swap, resulting in [1, 7]
        i = 7 and j = 6 (i < j)  so ans is swap, resulting in [1, 6, 7]
        i = 7 and j = 5 (i < j)  so ans is swap, resulting in [1, 6, 5, 7]
        i = 7 and j = 10(i !< j) so ans is no swap, resulting in [1, 6, 5, 7, 10]


4. Modified array: [1, 6, 5, 7, 10]
    After the fourth iteration:
        i = 6 and j = 1 (i < j)  so ans is swap, resulting in [1, 6]
        i = 6 and j = 6 (i !< j) so ans is no swap, resulting in [1, 6]
        i = 6 and j = 5 (i < j)  so ans is swap, resulting in [1, 5, 6]
        i = 6 and j = 7 (i !< j) so ans is no swap, resulting in [1, 5, 6, 7]
        i = 6 and j = 10(i !< j) so ans is no swap, resulting in [1, 5, 6, 7, 10]

Sorted array: [1, 5, 6, 7, 10]

*/