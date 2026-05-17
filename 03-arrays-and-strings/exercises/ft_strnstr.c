#include <stdio.h>

// - haystack: A pointer to the string being searched.
// - needle: A pointer to the substring to search for.
// - len: The maximum number of characters to search within the haystack string. 

// Description and Usage
// - The strnstr function searches for the first occurrence of the null-terminated 
// string needle in the string haystack, where no more than len characters in 
// haystack are examined.
// - Characters that appear after a null character (\0) within the search limit in
// haystack are not searched.

// Return Values
// The function returns a pointer to the located substring, with the following conditions: 
// - If needle is an empty string, the function returns haystack.
// - If needle is not found within the first len characters of haystack, it returns NULL.
// - Otherwise, it returns a pointer to the first character of the first occurrence of 
//     needle within the search limit.
char *ft_strnstr(const char *s1, const char *s2, size_t len) {
    int i, j;

    if(*s2 == '\0')
        return (char *)s1;

    i = 0;
    while(s1[i] && i < len) {
        j = 0;
        while(s1[i + j] && s2[j] && s2[j] == s1[i + j] && (i + j) < len) {
            j++;
        }
        if(s2[j] == '\0')
            return (char *)s2;
        i++;
    }
    return (0);
}

int main(void) {
    char s1[] = "Hello, World!";
    char s2[] = "Wo";

  	// Find the occurence of "Wo" in first 9 char in string s1
    char *pos = ft_strnstr(s1, s2, 9);
    
    if (pos != 0)
        printf("\nOutput: %s\n", pos); 
    else
        printf("\nNot Found\n");

    return (0);
}
