#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "manuplute.h"

int main(void){
    
    char str[] = "Hello, Iam shawon";
    char ch = 's';
    
    char *result = str_char_1(str, ch);

    if (result != NULL)
    {
        printf("substring found at index: %d\n", result -str);
    }
    
    return 0;
}