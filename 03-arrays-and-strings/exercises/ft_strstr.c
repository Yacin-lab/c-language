#include <stdio.h>

// The strstr() function in C is used to search the 
// first occurrence of a substring in another string. 
// If it is not found, it returns a NULL.
// s1: This is the main string to be examined.
// s2: This is the sub-string to be searched in string.
// Return Value:
// - This function returns a pointer point to the first character of
// the found s2 in s1 otherwise a null pointer if s2 is not present in s1.
// - If s2 points to an empty string, s1 is returned.
char *ft_strstr(const char *s1, const char *s2) {
    int i, j;

    if(*s2 == '\0')
        return (char *)s1;

    i = 0;
    while(s1[i]) {
        j = 0;
        while(s1[i] && s2[j] && s1[i] == s2[j]) {
            i++;
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
    char s2[] = "Worl";

  	// Find the occurence of "Worl" in string s1
    char *pos = ft_strstr(s1, s2);
    
    if (pos != 0)
        printf("\nOutput: %s\n", pos); 
    else
        printf("\nNot Found\n");

    return (0);
}
