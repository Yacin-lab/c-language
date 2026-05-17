#include <stdio.h>

// The strchr() function is used to find the first occurrence
// of a given character in a string. If the character is found, 
// it returns a pointer to the first occurrence of the character; 
// otherwise, it returns NULL.
char *ft_strchr(char *s, char c) {
    int i = 0;

    while(s[i]) {
        if(s[i] == c)
            return &s[i];
        i++;
    }
    return (0);
}

int main(void) {
    char s[] = "Hello, World!";
  
  	// Finding the first occurence of 'o' in string s
    char *res = ft_strchr(s, 'd');

    if (res != 0)
        printf("Character found at: %ld index\n", res - s);
    else
        printf("Character not found\n");

    return(0);
}