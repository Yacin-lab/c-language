#include <stdio.h>

// In C, there is a function strncat() similar to strcat(). 
// This function appends not more than n characters from the 
// string pointed to by source to the end of the string pointed
// to by destination plus a terminating NULL character.
// The real strncat function returns a char * (the pointer to s1)
char *ft_strncat(char *s1, char *s2, int n) {
    int i = 0;
    int j = 0;

    // Move to the end of dest
    while(s1[i])
        i++;
    
    // copy src to dest
    while(s2[j] && n > 0) {
        s1[i] = s2[j];
        i++;
        j++;
        n--;
    }
    s1[i] = '\0';
    
    return s1;
}

int main(void) {
    char s1[30] = "hello, ";
    char s2[] = "World!";

    // Appends "World!" to "Hello, "
    ft_strncat(s1, s2, 3);

    printf("%s\n", s1); // hello, World!
    // printf("%s\n", ft_strncat(s1, s2, 2));

    return(0);
}