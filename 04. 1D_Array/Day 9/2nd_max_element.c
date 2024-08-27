// Find second max element of array.
#include <stdio.h>

int main(void)
{   int col, max;
    int size_of_array;
    printf("Please enter array size: ");
    scanf("%d", &size_of_array);

    int my_array [size_of_array];

    printf("Please enter array element: ");
    for ( col = 0; col < size_of_array; col++)
    {
        scanf("%d", &my_array[col]);
    }

    max = my_array[0];
    for ( col = 0; col < size_of_array; col++)
    {
        if (max < my_array[col])
        {
            max = my_array[col];
        }
    }
    printf("Second max value is: %d", max - 1);
        
    return 0;
}
