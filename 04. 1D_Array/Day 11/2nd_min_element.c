// Find second min element of array.
#include <stdio.h>

int main(void)
{   int col, min;
    int size_of_array;
    printf("Please enter array size: ");
    scanf("%d", &size_of_array);

    int my_array [size_of_array];

    printf("Please enter array element: ");
    for ( col = 0; col < size_of_array; col++)
    {
        scanf("%d", &my_array[col]);
    }

    min = my_array[0];
    for ( col = 0; col < size_of_array; col++)
    {
        if (min > my_array[col])
        {
            min = my_array[col];
        }
    }
    printf("Second min value is: %d", min + 1);
        
    return 0;
}