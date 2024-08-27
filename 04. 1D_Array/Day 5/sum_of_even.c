// print sum of th even elements only.
#include <stdio.h>

int main(void)
{   int col, size_of_array, sum = 0;

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
        if (my_array[col] % 2 == 0)
        {
            sum += my_array[col];
        }
        
    }
    printf("The sum of the even elements of the array is: %d\n", sum);
    return 0;
}