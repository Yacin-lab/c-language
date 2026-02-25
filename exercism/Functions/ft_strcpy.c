#include <stdio.h>

// The strcpy() function copies a string from the source to the destination. 
// It copies the entire string, including the null terminator.
char *ft_strcpy(char *dest, char *src) {
    if(!src || !dest)
        return NULL;
    
    char *ptr = dest;

    while(*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}

int main(void) {
    char src[] = "hello";
    char dest[20];

    // Copies "Hello" to dest
    // It returns a pointer to the dest string after copying the content from src.
    printf("%s\n", ft_strcpy(dest, src)); // hello
    return(0);
}