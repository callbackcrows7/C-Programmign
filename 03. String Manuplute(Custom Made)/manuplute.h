// function to calculate a string length 01
//-----------------------------------------
size_t str_len_1(const char* _str){
    size_t len = 0; // Initialize length counter.
    int i; // Initialize starting counter

    // Loop until null terminator is found
    for ( i = 0; _str[i] != '\0'; i++)
    {
        len++; // Increment length for each character
    }
    return len; // Return the calculated length
}



// function to calculate a string length 02
//-----------------------------------------
size_t str_len_2(const char* str){
    size_t len = 0; // Initialize length counter 

    // Loop until null terminator is found 
    while (str[len] != '\0')
    {
        len++; // Increment length for each character
    }

    return len; // Return the calculated length
}



// function to calculate a string length 03
//-----------------------------------------
size_t str_len_3(const char* str) {
    size_t length = 0; // Initialize length counter 
 
    // Loop until null terminator is found 
    while (*str != '\0') { 
        length++; // Increment length for each character 
        str++; // Move to the next character 
    } 
 
 return length; // Return the calculated length 
}



// Function to copy one string to another 01
//------------------------------------------
char* str_cpy_1(char* destination, const char* source) {
    // Declare a variable i of type size_t and initialize it to 0
    // size_t is an unsigned integer type used for sizes and counts
    size_t i = 0;

    // Loop through each character of the source string until the null terminator is encountered
    for (i = 0; source[i] != '\0'; i++) {
        // Copy each character from the source string to the destination string
        destination[i] = source[i];
    }

    // Add the null terminator to the end of the destination string
    destination[i] = '\0';

    // Return the destination string
    return destination;
}



// Function to copy one string to another 02
//------------------------------------------
char* str_cpy_2(char* destination, const char* source) {
    // Declare a variable i of type size_t and initialize it to 0
    // size_t is an unsigned integer type used for sizes and counts
    size_t i = 0;

    // Loop through each character of the source string until the null terminator is encountered
    while (source[i] != '\0') {
        // Copy each character from the source string to the destination string
        destination[i] = source[i];
        i++;  // Increment the index
    }

    // Add the null terminator to the end of the destination string
    destination[i] = '\0';  

    // Return the pointer to the destination string
    return destination; 
}



// function to copy one string to another 03
//------------------------------------------
char* str_cpy_3(char* destination, const char* source) {
    char* start = destination; // Store the starting address of the destination string 
    
    // Copy characters until null terminator is found 
    while (*source != '\0') { 
        *destination = *source; // Copy character from source to destination 
        destination++; // Move to the next character in destination 
        source++; // Move to the next character in source 
    } 
 
    *destination = '\0'; // Append null terminator to destination string 
    return start; // Return the starting address of the destination string 
    
}



// Function to concatenate two strings 01
//---------------------------------------
char* str_cat_1(char* _str1, const char* _str2) {
    // Declare a variable i and j of type size_t and initialize it to 0
    // size_t is an unsigned integer type used for sizes and counts
    size_t i = 0;
    size_t j = 0;

    // Find the end of the _str1 string using a for loop
    for (i; _str1[i] != '\0'; i++) {
        // Just increment i to find the null terminator ('\0')
    }

    // Loop through each character of the _str2 string until the null terminator ('\0') is encountered
    for (j; _str2 != '\0'; j++) {
        // Copy each character from the _str2 to the _str1.
        _str1[i + j] = _str2[j]; // ( _str1[i +j] = _str2[j] ) Means for each character in _str2, it is copied to the position i + j in _str1.

    }

    // Add the null terminator to the position i + j in _str1 string.
    _str1[i + j] = '\0';
    // Return the pointer to the _str1 string
    return _str1;
}


// Function to concatenate two strings 02
//---------------------------------------
char* str_cat_2(char* _str1, const char* _str2) {
    // Declare a variable i of type size_t and initialize it to 0
    // size_t is an unsigned integer type used for sizes and counts
    size_t i = 0;

    // Find the end of the _str1 string
    while (_str1[i] != '\0') {
        i++; // Move to the next character in _str1 string
    }

    // Set j to start appending from the end of _str1 string
    size_t j = 0;

    // Loop through each character of the _str2 string until the null terminator ('\0') is encountered
    while (_str2[j] != '\0') {
        // Copy each character from the _str2 string to the _str1 string
        _str1[i + j] = _str2[j]; // ( _str1[i +j] = _str2[j] ) Means for each character in _str2, it is copied to the position i + j in _str1.
        j++; // Move to the next character in _str2 string
    }
    
    // Add the null terminator to the position i + j in _str1 string.
    _str1[i + j] = '\0';

    // Return the _str1 string
    return _str1;
}



// Function to concatenate two strings 03
//---------------------------------------
char* str_cat_3(char* _str1, const char* _str2) {
    char* start = _str1; // Store the starting address of the _str1 string 
 
    // Find the end of the _str1 string 
    while (*_str1 != '\0') { 
        _str1++; // Move to the next character in _str1 string 
    } 
 
    // Copy characters from _str2 to _str1 
    while (*_str2 != '\0') { 
        *_str1 = *_str2; // Copy character from _str2 to _str1
        _str1++; // Move to the next character in _str1
        _str2++; // Move to the next character in _str2
    } 
 
    *_str1 = '\0'; // Append null terminator to _str1 string 
    return start; // Return the starting address of the concatenated string 
}



// Function to compare two strings 01
//-----------------------------------
int str_cmp_1(const char *str1, const char *str2) {
    // Define a variable i of type size_t
    // size_t is an unsigned integer type used for sizes and counts
    size_t i;
    // Loop through each character of both strings
    for (i = 0; str1[i] && (str1[i] == str2[i]); i++) {
        // No action needed inside the loop body
        // Continue looping while characters are equal and not the null terminator
    }
    // Return the difference between the characters where they first differ
    // Cast characters to unsigned char to ensure correct comparison and handling of characters with negative values
    return (unsigned char)str1[i] - (unsigned char)str2[i];
}




// Function to compare two strings 02
//-----------------------------------
int str_cmp_2(const char *str1, const char *str2) {
    size_t i = 0;  // Initialize index variable
    // Loop through each character of both strings while they are equal and not the null terminator
    while (str1[i] && (str1[i] == str2[i])) {
        i++;  // Increment index to check next character
    }
    // Return the difference between the characters where they first differ
    // Cast characters to unsigned char to ensure correct comparison and handling of characters with negative values
    return (unsigned char)str1[i] - (unsigned char)str2[i];
}


// Function to compare two strings 03
//-----------------------------------
int str_cmp_3(const char *str1, const char *str2) {
    // Loop through each character of both strings while they are equal and not the null terminator
    while (*str1 && (*str1 == *str2)) {
        str1++;  // Move to the next character in str1
        str2++;  // Move to the next character in str2
    }
    // Return the difference between the characters where they first differ
    // Cast characters to unsigned char to ensure correct comparison and handling of characters with negative values
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}



// Function to (case-insensitive) compare two strings 01
//------------------------------------------------------
int str_casecmp_1(const char *str1, const char *str2) {
    // Define a variable i of type size_t
    // size_t is an unsigned integer type used for sizes and counts
    size_t i;

    // Loop through each character of both strings while they are equal and not the null terminator
    for (i = 0; str1[i] && (tolower((unsigned char)str1[i]) == tolower((unsigned char)str2[i])); i++) {
        // No action needed inside the loop body
        // Continue looping while characters are equal and not the null terminator
    }
    // Return the difference between the characters where they first differ, ignoring case
    // Convert characters to lowercase using tolower function and cast them to unsigned char to ensure correct handling
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}


// Function to (case-insensitive) compare two strings 02
//------------------------------------------------------
int str_casecmp_2(const char *str1, const char *str2) {
    size_t i = 0;  // Initialize index variable

    // Loop through each character of both strings while they are equal and not the null terminator
    while (str1[i] && (tolower((unsigned char)str1[i]) == tolower((unsigned char)str2[i]))) {
        i++;  // Increment index to check next character
    }
    // Return the difference between the characters where they first differ, ignoring case
    // Convert characters to lowercase using tolower function and cast them to unsigned char to ensure correct handling
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}



// Function to (case-insensitive) compare two strings 03
//------------------------------------------------------
int str_casecmp_3(const char *str1, const char *str2) {
    // Loop through each character of both strings while they are equal and not the null terminator
    while (*str1 && (tolower((unsigned char)*str1) == tolower((unsigned char)*str2))) {
        str1++;  // Move to the next character in str1
        str2++;  // Move to the next character in str2
    }
    // Return the difference between the characters where they first differ, ignoring case
    // Convert characters to lowercase using tolower function and cast them to unsigned char to ensure correct handling
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}


// Function to convert a character to lowercase
//---------------------------------------------
char tolower_custom(char c) {
    // Check if the character is an uppercase letter
    if (c >= 'A' && c <= 'Z') {
        // If it is, convert it to lowercase by adding the difference between 'a' and 'A' to the character
        return c + ('a' - 'A');
    }
    // If the character is not an uppercase letter, return it as it is
    return c;
}



// Function to convert a character to uppercase
//---------------------------------------------
char toupper_custom(char c) {
    // Check if the character is a lowercase letter
    if (c >= 'a' && c <= 'z') {
        // If it is, convert it to uppercase by subtracting the difference between 'a' and 'A' from the character
        return c - ('a' - 'A');
    }
    // If the character is not a lowercase letter, return it as it is
    return c;
}



// Custom implementation of strstr() function 01
//----------------------------------------------
char *strstr_custom_1(const char *haystack, const char *needle) {
    if (needle[0] == '\0') // If needle is empty, return haystack
        return (char *)haystack;

    for (size_t i = 0; haystack[i]; i++) { // Iterate through each character of haystack
        size_t j; // Declare j outside the loop

        for (j = 0; haystack[i + j] && needle[j] && haystack[i + j] == needle[j]; j++) {
            // Check for matching characters
        }

        if (needle[j] == '\0') // If all characters in needle are found in haystack
            return (char *)&haystack[i]; // Return the position where needle starts
    }

    return NULL; // If needle is not found in haystack
}



// Custom implementation of strstr() function 02
//----------------------------------------------
char *strstr_custom_2(const char *haystack, const char *needle) {
    size_t i = 0; // Initialize i

    if (needle[0] == '\0') // If needle is empty, return haystack
        return (char *)haystack;

    while (haystack[i]) { // Iterate through each character of haystack
        size_t j = 0; // Initialize j for each position in haystack

        while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j]) { // Check for matching characters
            j++;
        }

        if (needle[j] == '\0') // If all characters in needle are found in haystack
            return (char *)&haystack[i]; // Return the position where needle starts

        i++; // Move to the next character in haystack
    }

    return NULL; // If needle is not found in haystack
}



// Custom implementation of strstr() function 03
//----------------------------------------------
char *strstr_custom_3(const char *haystack, const char *needle) {
    if (*needle == '\0') // If needle is empty, return haystack
        return (char *) haystack;

    while (*haystack) { // Iterate through each character of haystack
        const char *h = haystack; // Pointer to current position in haystack
        const char *n = needle; // Pointer to beginning of needle

        while (*h && *n && *h == *n) { // Check for matching characters
            h++; // Move to the next character in haystack
            n++; // Move to the next character in needle
        }

        if (*n == '\0') // If all characters in needle are found in haystack
            return (char *) haystack; // Return the position where needle starts

        haystack++; // Move to the next character in haystack
    }

    return NULL; // If needle is not found in haystack
}



// Custom implementation of strchar() or strchr() function 01
//-----------------------------------------------------------
char* str_char_1(const char* str, char ch) {
    // Iterate through the string until we reach the end
    for (size_t i = 0; str[i] != '\0'; i++) {
        // Check if the current character matches the target character
        if (str[i] == ch) {
            return (char*)(str + i); // If found, return a pointer to that character
        }
    }
    return NULL; // If the character is not found, return NULL
}


// Custom implementation of strchar() or strchr() function 02
//-----------------------------------------------------------
char* str_char_2(const char* str, char ch) {
    size_t i = 0; // Initialize i

    // Iterate through the string until we reach the end
    while (str[i] != '\0') {
        // Check if the current character matches the target character
        if (str[i] == ch) {
            return (char*)(str + i); // If found, return a pointer to that character
        }
        i++; // Move to the next index in the string
    }
    return NULL; // If the character is not found, return NULL
}



// Custom implementation of strchar() or strchr() function 03
//-----------------------------------------------------------
char* str_char_3(const char* str, char ch) {
    // Iterate through the string until we reach the end
    while (*str != '\0') {
        // Check if the current character matches the target character
        if (*str == ch) {
            return (char*)str; // If found, return a pointer to that character
        }
        str++; // Move to the next character in the string
    }
    return NULL; // If the character is not found, return NULL
}




// Custom implementation of strtok() function 01
//----------------------------------------------
char* str_tok(char* str, const char* delim) {
    static char* buffer = NULL;  // Keeps track of the position in the string

    if (str != NULL) {
        buffer = str;  // If a new string is passed, update the buffer
    }

    if (buffer == NULL || *buffer == '\0') {  // If buffer is empty or at the end, return NULL
        return NULL;
    }

    char* token_start = buffer;  // Starting point of the token
    char* token_end = strpbrk(buffer, delim);  // Find the next occurrence of delimiter
    
    if (token_end != NULL) {
        *token_end = '\0';  // Replace the delimiter with NULL character
        buffer = token_end + 1;  // Update buffer to point to the next character after the delimiter
    } else {
        buffer = NULL;  // If no more delimiters found, mark buffer as NULL
    }
    return token_start;  // Return the starting point of the token
}



// Custom implementation of strpbrk() function 01
//-----------------------------------------------
char* my_strpbrk(const char* s1, const char* s2) {
    const char* p1 = s1;  // Pointer to iterate through string s1
    const char* p2;       // Pointer to iterate through string s2

    // Loop through each character in s1 until the null terminator is reached
    while (*p1 != '\0') {
        p2 = s2;  // Reset p2 to the beginning of s2 for each character in s1

        // Loop through each character in s2
        while (*p2 != '\0') {
            // If the character in s1 matches any character in s2, return the pointer to the match
            if (*p1 == *p2) {
                return (char*)p1;
            }
            p2++;  // Move to the next character in s2
        }
        p1++;  // Move to the next character in s1
    }

    // If no match is found, return NULL
    return NULL;
}



// Custom implementation of strrev() function 01
//-----------------------------------------------
void str_rev(char *str) {
    // Calculate the length of the string
    int length = strlen(str);
    
    // Temporary variable to store characters during swapping
    char temp;
    
    // Loop through the string up to its midpoint
    for (int i = 0; i < length / 2; i++) {
        // Swap characters from the beginning with characters from the end
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}