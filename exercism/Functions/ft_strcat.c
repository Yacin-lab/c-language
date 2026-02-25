#include <stdio.h>

// The strcat() function is used to concatenate (append) one string 
// to the end of another. It appends the source string to the destination string,
// replacing the null terminator of the destination with the source string’s content.
// The real strcat function returns a char * (the pointer to s1)
char *ft_strcat(char *s1, char *s2) {
    int i = 0;
    int j = 0;

    // Move to the end of dest
    while(s1[i])
        i++;
    
    // copy src to dest
    while(s2[j]) {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    
    return s1;
}

int main(void) {
    char s1[30] = "hello, ";
    char s2[] = "World!";

    // Appends "World!" to "Hello, "
    ft_strcat(s1, s2);

    printf("%s\n", s1); // hello, World!
    // printf("%s\n", ft_strcat(s1, s2));

    return(0);
}