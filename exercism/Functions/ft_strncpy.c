#include <stdio.h>

// The strncpy() function is similar to strcpy(), 
// but it copies at most n bytes from source to destination string. 
// If source is shorter than n, strncpy() adds a null character to 
// destination to ensure n characters are written. exp [h,e,l,\0,\0,\0]
char *ft_strncpy(char *dest, char *src, int n) {
    if(!src || !dest)
        return NULL;
    
    char *ptr = dest;

    while(*src && n) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    while(n--)
        *dest++ = '\0';
    
    return ptr;
}

// char *ft_strncpy(char *dest, char *src, int n) {
//     int i;
//     if(!src || !dest)
//         return NULL;
    
//     char *ptr = dest;

//     i = 0;
//     while(src[i] && n > 0) {
//         dest[i] = src[i];
//         i++;
//         n--;
//     }
//     while(n > 0) {
//         dest[i++] = '\0';
//         n;
//     }
    
//     return ptr;
// }

int main(void) {
    char src[] = "hello";
    char dest[20];

    // Copies "Hello" to dest
    // It returns a pointer to the dest string after copying the content from src.
    printf("%s\n", ft_strncpy(dest, src, 4)); // hell
    return(0);
}