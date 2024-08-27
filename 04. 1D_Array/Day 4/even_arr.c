// print array even elements only.
#include <stdio.h>

int main(void)
{   int col, size_of_array;

    printf("Please enter array size: ");
    scanf("%d", &size_of_array);

    int my_array [size_of_array];

    printf("Please enter array element: ");
    for ( col = 0; col < size_of_array; col++)
    {
        scanf("%d", &my_array[col]);
    }

    for ( col = 0; col < size_of_array; col++)
    {
        if (my_array[col] % 2 != 0)
        {
            continue;
        }
        else
        {
            printf("%d ", my_array[col]);
        }
        
    }
    
    return 0;
}